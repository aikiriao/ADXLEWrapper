#ifndef GET_DEFAULT_CONFIG_H_INCLUDED
#define GET_DEFAULT_CONFIG_H_INCLUDED

#include <cri_le_atom.h>
#include <cri_le_atom_ex.h>
#include <cri_le_atom_asr.h>

#ifdef __cplusplus
extern "C" {
#endif

/*==========================================================================
 *      CRI Atom API
 *=========================================================================*/
CriAtomConfig criAtom_GetDefaultConfig(void);

/*==========================================================================
 *      CRI Atom HCA-MX API
 *=========================================================================*/
CriAtomHcaMxConfig criAtomHcaMx_GetDefaultConfig(void);

/*==========================================================================
 *      CRI Atom Player API
 *=========================================================================*/
CriAtomStandardPlayerConfig criAtomPlayer_GetDefaultConfigForStandardPlayer(void);
CriAtomAdxPlayerConfig criAtomPlayer_GetDefaultConfigForAdxPlayer(void);
CriAtomHcaPlayerConfig criAtomPlayer_GetDefaultConfigForHcaPlayer(void);
CriAtomHcaMxPlayerConfig criAtomPlayer_GetDefaultConfigForHcaMxPlayer(void);
CriAtomWavePlayerConfig criAtomPlayer_GetDefaultConfigForWavePlayer(void);
CriAtomAiffPlayerConfig criAtomPlayer_GetDefaultConfigForAiffPlayer(void);
CriAtomRawPcmPlayerConfig criAtomPlayer_GetDefaultConfigForRawPcmPlayer(void);
CriAtomInstrumentPlayerConfig criAtomPlayer_GetDefaultConfigForInstrumentPlayer(void);

/*==========================================================================
 *      CRI Atom D-BAS API
 *=========================================================================*/
CriAtomDbasConfig criAtomDbas_GetDefaultConfig(void);

/* ========================================================================*/
/*       CRI Atom Streaming Cache API                                      */
/* ========================================================================*/
CriAtomStreamingCacheConfig criAtomStreamingCache_GetDefaultConfig(void);

/* ========================================================================*/
/*       CRI Atom Meter API                                                */
/* ========================================================================*/
CriAtomLevelMeterConfig criAtomMeter_GetDefaultConfigForLevelMeter(void);
CriAtomLoudnessMeterConfig criAtomMeter_GetDefaultConfigForLoudnessMeter(void);
CriAtomTruePeakMeterConfig criAtomMeter_GetDefaultConfigForTruePeakMeter(void);

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
CriAtomExConfig criAtomEx_GetDefaultConfig(void);

/*==========================================================================
 *      CRI AtomEx HCA-MX API
 *=========================================================================*/
CriAtomExHcaMxConfig criAtomExHcaMx_GetDefaultConfig(void);

/*==========================================================================
 *      CRI AtomEx Voice Pool API
 *=========================================================================*/
CriAtomExStandardVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForStandardVoicePool(void);
CriAtomExAdxVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForAdxVoicePool(void);
CriAtomExHcaVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForHcaVoicePool(void);
CriAtomExHcaMxVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForHcaMxVoicePool(void);
CriAtomExWaveVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForWaveVoicePool(void);
CriAtomExAiffVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForAiffVoicePool(void);
CriAtomExRawPcmVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForRawPcmVoicePool(void);
CriAtomExInstrumentVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForInstrumentVoicePool(void);

/*==========================================================================
 *      CRI AtomEx Player API
 *=========================================================================*/
CriAtomExPlayerConfig criAtomExPlayer_GetDefaultConfig(void);

/*==========================================================================
 *      CRI AtomEx Fader API
 *=========================================================================*/
CriAtomExFaderConfig criAtomExFader_GetDefaultConfig(void);

/*==========================================================================
 *      CRI AtomEx D-BAS API
 *=========================================================================*/
CriAtomExDbasConfig criAtomExDbas_GetDefaultConfig(void);

/* ========================================================================*/
/*       CRI AtomEx Streaming Cache API                                    */
/* ========================================================================*/
CriAtomExStreamingCacheConfig criAtomExStreamingCache_GetDefaultConfig(void);

/*==========================================================================
 *      CRI AtomEx 3D API
 *=========================================================================*/
CriAtomEx3dSourceConfig criAtomEx3dSource_GetDefaultConfig(void);
CriAtomEx3dSourceListConfig criAtomEx3dSourceList_GetDefaultConfig(void);
CriAtomEx3dListenerConfig criAtomEx3dListener_GetDefaultConfig(void);
CriAtomEx3dRegionConfig criAtomEx3dRegion_GetDefaultConfig(void);
CriAtomEx3dTransceiverConfig criAtomEx3dTransceiver_GetDefaultConfig(void);
CriAtomEx3dSourceRandomPositionConfig criAtomEx3dSource_GetDefaultConfigForRandomPosition(void);

/*==========================================================================
 *      CRI AtomEx DSP API
 *=========================================================================*/
CriAtomExDspPitchShifterConfig criAtomExVoicePool_GetDefaultConfigForDspPitchShifter(void);
CriAtomExDspTimeStretchConfig criAtomExVoicePool_GetDefaultConfigForDspTimeStretch(void);

/*==========================================================================
 *      CRI AtomEx Tween API
 *=========================================================================*/
CriAtomExTweenConfig criAtomExTween_GetDefaultConfig(void);

/*==========================================================================
 *      CRI AtomEx Sound Object API
 *=========================================================================*/
CriAtomExSoundObjectConfig criAtomExSoundObject_GetDefaultConfig(void);


/*==========================================================================
 *      CRI AtomEx ASR API
 *=========================================================================*/
CriAtomExAsrConfig criAtomExAsr_GetDefaultConfig(void);
CriAtomExAsrBusAnalyzerConfig criAtomExAsr_GetDefaultConfigForBusAnalyzer(void);

/*==========================================================================
 *      CRI AtomEx ASR Rack API
 *=========================================================================*/
CriAtomExAsrRackConfig criAtomExAsrRack_GetDefaultConfig(void);

/*==========================================================================
 *      CRI Atom ASR API
 *=========================================================================*/
CriAtomAsrConfig criAtomAsr_GetDefaultConfig(void);

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
CriAtomExConfigForUserPcmOutput criAtomEx_GetDefaultConfigForUserPcmOutput(void);

#ifdef __cplusplus
}
#endif

#endif /* GET_DEFAULT_CONFIG_H_INCLUDED */
