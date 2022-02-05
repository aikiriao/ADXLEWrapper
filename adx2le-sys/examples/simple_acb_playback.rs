use adx2le_sys::*;
use std::ffi::{CStr, CString};
use std::os::raw::c_void;
use std::ptr::*;

// CUEIDリスト
include!("Basic.rs");

// エラーコールバック
unsafe extern "C" fn error_callback(
    errid: *const CriChar8,
    p1: CriUint32,
    p2: CriUint32,
    _parray: *mut CriUint32,
) {
    let rawmsg = criErr_ConvertIdToMessage(errid, p1, p2);
    eprintln!("{}", CStr::from_ptr(rawmsg).to_str().unwrap());
}

// アロケータ（適当実装）
unsafe extern "C" fn alloc_function(_obj: *mut c_void, size: CriUint32) -> *mut c_void {
    libc::malloc(size as usize)
}

// デアロケータ（適当実装）
unsafe extern "C" fn free_function(_obj: *mut c_void, mem: *mut c_void) {
    libc::free(mem);
}

fn main() {
    unsafe {
        // エラーコールバック登録
        criErr_SetCallback(Some(error_callback));

        // アロケータ登録
        criAtom_SetUserMallocFunction(Some(alloc_function), null_mut());
        criAtom_SetUserFreeFunction(Some(free_function), null_mut());

        // ライブラリ初期化
        criAtomEx_Initialize(null(), null_mut(), 0);
        criAtomAsr_Initialize(null(), null_mut(), 0);
        criAtomHcaMx_Initialize(null(), null_mut(), 0);

        // D-BAS作成
        let dbasid = criAtomDbas_Create(null(), null_mut(), 0);

        // ボイスプール作成
        let mut voicepoolconfig = criAtomExVoicePool_GetDefaultConfigForStandardVoicePool();
        voicepoolconfig.player_config.streaming_flag = CRI_TRUE as i32;
        let voicepool =
            criAtomExVoicePool_AllocateStandardVoicePool(&voicepoolconfig, null_mut(), 0);

        // acfファイルロード
        let acfpath = CString::new("ADX2_samples.acf").unwrap();
        criAtomEx_RegisterAcfFile(null_mut(), acfpath.as_ptr(), null_mut(), 0);

        // acbファイルロード
        let acbpath = CString::new("Basic.acb").unwrap();
        let awbpath = CString::new("Basic.awb").unwrap();
        let acb = criAtomExAcb_LoadAcbFile(
            null_mut(),
            acbpath.as_ptr(),
            null_mut(),
            awbpath.as_ptr(),
            null_mut(),
            0,
        );

        // プレーヤ作成
        let player = criAtomExPlayer_Create(null(), null_mut(), 0);

        // 再生開始
        criAtomExPlayer_SetCueId(player, acb, CRI_BASIC_VOICE_EFFECT as i32);
        let playbackid = criAtomExPlayer_Start(player);
        let mut status = criAtomExPlayer_GetStatus(player);

        // 再生停止待ち
        while status != CriAtomExPlayerStatusTag_CRIATOMEXPLAYER_STATUS_PLAYEND {
            criAtomEx_ExecuteMain();
            status = criAtomExPlayer_GetStatus(player);
        }

        // リソース破棄
        criAtomExPlayer_Destroy(player);
        criAtomExAcb_Release(acb);
        criAtomEx_UnregisterAcf();
        criAtomExVoicePool_Free(voicepool);
        criAtomDbas_Destroy(dbasid);

        // ライブラリ終了
        criAtomHcaMx_Finalize();
        criAtomAsr_Finalize();
        criAtomEx_Finalize();
    }
}
