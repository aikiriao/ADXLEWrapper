use std::path::PathBuf;
use std::{env, fs};

fn main() {
    // ビルドスクリプトに変更があれば実行
    println!("cargo:rerun-if-changed=build.rs");

    // パス取得
    let manifest_dir = PathBuf::from(env::var("CARGO_MANIFEST_DIR").unwrap());
    let libpath = manifest_dir.join("c/cri/pc/libs/x64");

    // 出力パスに.dllをコピー
    let build_type = env::var("PROFILE").unwrap();
    let target_dir = manifest_dir.join("target").join(build_type);
    fs::copy(
        libpath.join("cri_ware_pcx64_le.dll"),
        target_dir.join("cri_ware_pcx64_le.dll"),
    )
    .unwrap();

    // bindgenでバインディング生成
    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindgen::Builder::default()
        .header("c/wrapper.h")
        .clang_arg("-Ic")
        .clang_arg("-Ic/cri/pc/include")
        .generate()
        .unwrap()
        .write_to_file(out_path.join("adx2le_raw.rs"))
        .expect("Failed to generate bindings!");

    // デフォルトコンフィグ取得関数のビルド
    cc::Build::new()
        .include("c")
        .include("c/cri/pc/include")
        .file("c/get_default_config.c")
        .compile("get_default_config");

    // 静的リンクするライブラリを指定
    println!("cargo:rustc-link-search={}", libpath.display());
    println!("cargo:rustc-link-lib=cri_ware_pcx64_le_import");
    println!("cargo:rustc-link-lib=get_default_config");

    // acf/acb/awbファイルをコピー
    let asset_path = manifest_dir.join("c/cri/pc/samples/criatom/data/Public");
    fs::copy(
        asset_path.join("ADX2_samples.acf"),
        manifest_dir.join("ADX2_samples.acf"),
    )
    .unwrap();
    fs::copy(asset_path.join("Basic.acb"), manifest_dir.join("Basic.acb")).unwrap();
    fs::copy(asset_path.join("Basic.awb"), manifest_dir.join("Basic.awb")).unwrap();

    // Basic.hからキューIDを含むバインディング生成
    bindgen::Builder::default()
        .header("c/cri/pc/samples/criatom/data/Public/Basic.h")
        .generate()
        .unwrap()
        .write_to_file(manifest_dir.join("examples/Basic.rs"))
        .expect("Failed to generate bindings!");
}
