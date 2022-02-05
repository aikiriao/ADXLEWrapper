#include "get_default_config.h"

#ifndef NULL
#define NULL CRI_NULL
#endif

CriAtomConfig criAtom_GetDefaultConfig(void)
{
	CriAtomConfig config;
	criAtom_SetDefaultConfig(&config);
	return config;
}

CriAtomHcaMxConfig criAtomHcaMx_GetDefaultConfig(void)
{
	CriAtomHcaMxConfig config;
	criAtomHcaMx_SetDefaultConfig(&config);
	return config;
}

CriAtomStandardPlayerConfig criAtomPlayer_GetDefaultConfigForStandardPlayer(void)
{
	CriAtomStandardPlayerConfig config;
	criAtomPlayer_SetDefaultConfigForStandardPlayer(&config);
	return config;
}

CriAtomAdxPlayerConfig criAtomPlayer_GetDefaultConfigForAdxPlayer(void)
{
	CriAtomAdxPlayerConfig config;
	criAtomPlayer_SetDefaultConfigForAdxPlayer(&config);
	return config;
}

CriAtomHcaPlayerConfig criAtomPlayer_GetDefaultConfigForHcaPlayer(void)
{
	CriAtomHcaPlayerConfig config;
	criAtomPlayer_SetDefaultConfigForHcaPlayer(&config);
	return config;
}

CriAtomHcaMxPlayerConfig criAtomPlayer_GetDefaultConfigForHcaMxPlayer(void)
{
	CriAtomHcaMxPlayerConfig config;
	criAtomPlayer_SetDefaultConfigForHcaMxPlayer(&config);
	return config;
}

CriAtomWavePlayerConfig criAtomPlayer_GetDefaultConfigForWavePlayer(void)
{
	CriAtomWavePlayerConfig config;
	criAtomPlayer_SetDefaultConfigForWavePlayer(&config);
	return config;
}

CriAtomAiffPlayerConfig criAtomPlayer_GetDefaultConfigForAiffPlayer(void)
{
	CriAtomAiffPlayerConfig config;
	criAtomPlayer_SetDefaultConfigForAiffPlayer(&config);
	return config;
}

CriAtomRawPcmPlayerConfig criAtomPlayer_GetDefaultConfigForRawPcmPlayer(void)
{
	CriAtomRawPcmPlayerConfig config;
	criAtomPlayer_SetDefaultConfigForRawPcmPlayer(&config);
	return config;
}

CriAtomInstrumentPlayerConfig criAtomPlayer_GetDefaultConfigForInstrumentPlayer(void)
{
	CriAtomInstrumentPlayerConfig config;
	criAtomPlayer_SetDefaultConfigForInstrumentPlayer(&config);
	return config;
}

CriAtomDbasConfig criAtomDbas_GetDefaultConfig(void)
{
	CriAtomDbasConfig config;
	criAtomDbas_SetDefaultConfig(&config);
	return config;
}

CriAtomStreamingCacheConfig criAtomStreamingCache_GetDefaultConfig(void)
{
	CriAtomStreamingCacheConfig config;
	criAtomStreamingCache_SetDefaultConfig(&config);
	return config;
}

CriAtomLevelMeterConfig criAtomMeter_GetDefaultConfigForLevelMeter(void)
{
	CriAtomLevelMeterConfig config;
	criAtomMeter_SetDefaultConfigForLevelMeter(&config);
	return config;
}

CriAtomLoudnessMeterConfig criAtomMeter_GetDefaultConfigForLoudnessMeter(void)
{
	CriAtomLoudnessMeterConfig config;
	criAtomMeter_SetDefaultConfigForLoudnessMeter(&config);
	return config;
}

CriAtomTruePeakMeterConfig criAtomMeter_GetDefaultConfigForTruePeakMeter(void)
{
	CriAtomTruePeakMeterConfig config;
	criAtomMeter_SetDefaultConfigForTruePeakMeter(&config);
	return config;
}

CriAtomExConfig criAtomEx_GetDefaultConfig(void)
{
	CriAtomExConfig config;
	criAtomEx_SetDefaultConfig(&config);
	return config;
}

CriAtomExHcaMxConfig criAtomExHcaMx_GetDefaultConfig(void)
{
	CriAtomExHcaMxConfig config;
	criAtomExHcaMx_SetDefaultConfig(&config);
	return config;
}

CriAtomExStandardVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForStandardVoicePool(void)
{
	CriAtomExStandardVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForStandardVoicePool(&config);
	return config;
}

CriAtomExAdxVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForAdxVoicePool(void)
{
	CriAtomExAdxVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForAdxVoicePool(&config);
	return config;
}

CriAtomExHcaVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForHcaVoicePool(void)
{
	CriAtomExHcaVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForHcaVoicePool(&config);
	return config;
}

CriAtomExHcaMxVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForHcaMxVoicePool(void)
{
	CriAtomExHcaMxVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForHcaMxVoicePool(&config);
	return config;
}

CriAtomExWaveVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForWaveVoicePool(void)
{
	CriAtomExWaveVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForWaveVoicePool(&config);
	return config;
}

CriAtomExAiffVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForAiffVoicePool(void)
{
	CriAtomExAiffVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForAiffVoicePool(&config);
	return config;
}

CriAtomExRawPcmVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForRawPcmVoicePool(void)
{
	CriAtomExRawPcmVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForRawPcmVoicePool(&config);
	return config;
}

CriAtomExInstrumentVoicePoolConfig criAtomExVoicePool_GetDefaultConfigForInstrumentVoicePool(void)
{
	CriAtomExInstrumentVoicePoolConfig config;
	criAtomExVoicePool_SetDefaultConfigForInstrumentVoicePool(&config);
	return config;
}

CriAtomExPlayerConfig criAtomExPlayer_GetDefaultConfig(void)
{
	CriAtomExPlayerConfig config;
	criAtomExPlayer_SetDefaultConfig(&config);
	return config;
}

CriAtomExFaderConfig criAtomExFader_GetDefaultConfig(void)
{
	CriAtomExFaderConfig config;
	criAtomExFader_SetDefaultConfig(&config);
	return config;
}

CriAtomExDbasConfig criAtomExDbas_GetDefaultConfig(void)
{
	CriAtomExDbasConfig config;
	criAtomExDbas_SetDefaultConfig(&config);
	return config;
}

CriAtomExStreamingCacheConfig criAtomExStreamingCache_GetDefaultConfig(void)
{
	CriAtomExStreamingCacheConfig config;
	criAtomStreamingCache_SetDefaultConfig(&config);
	return config;
}

CriAtomEx3dSourceConfig criAtomEx3dSource_GetDefaultConfig(void)
{
	CriAtomEx3dSourceConfig config;
	criAtomEx3dSource_SetDefaultConfig(&config);
	return config;
}

CriAtomEx3dSourceListConfig criAtomEx3dSourceList_GetDefaultConfig(void)
{
	CriAtomEx3dSourceListConfig config;
	criAtomEx3dSourceList_SetDefaultConfig(&config);
	return config;
}

CriAtomEx3dListenerConfig criAtomEx3dListener_GetDefaultConfig(void)
{
	CriAtomEx3dListenerConfig config;
	criAtomEx3dListener_SetDefaultConfig(&config);
	return config;
}

CriAtomEx3dRegionConfig criAtomEx3dRegion_GetDefaultConfig(void)
{
	CriAtomEx3dRegionConfig config;
	criAtomEx3dRegion_SetDefaultConfig(&config);
	return config;
}

CriAtomEx3dTransceiverConfig criAtomEx3dTransceiver_GetDefaultConfig(void)
{
	CriAtomEx3dTransceiverConfig config;
	criAtomEx3dTransceiver_SetDefaultConfig(&config);
	return config;
}

CriAtomEx3dSourceRandomPositionConfig criAtomEx3dSource_GetDefaultConfigForRandomPosition(void)
{
	CriAtomEx3dSourceRandomPositionConfig config;
	criAtomEx3dSource_SetDefaultConfigForRandomPosition(&config);
	return config;
}

CriAtomExDspPitchShifterConfig criAtomExVoicePool_GetDefaultConfigForDspPitchShifter(void)
{
	CriAtomExDspPitchShifterConfig config;
	criAtomExVoicePool_SetDefaultConfigForDspPitchShifter(&config);
	return config;
}

CriAtomExDspTimeStretchConfig criAtomExVoicePool_GetDefaultConfigForDspTimeStretch(void)
{
	CriAtomExDspTimeStretchConfig config;
	criAtomExVoicePool_SetDefaultConfigForDspTimeStretch(&config);
	return config;
}

CriAtomExTweenConfig criAtomExTween_GetDefaultConfig(void)
{
	CriAtomExTweenConfig config;
	criAtomExTween_SetDefaultConfig(&config);
	return config;
}

CriAtomExSoundObjectConfig criAtomExSoundObject_GetDefaultConfig(void)
{
	CriAtomExSoundObjectConfig config;
	criAtomExSoundObject_SetDefaultConfig(&config);
	return config;
}

CriAtomExAsrConfig criAtomExAsr_GetDefaultConfig(void)
{
	CriAtomExAsrConfig config;
	criAtomExAsr_SetDefaultConfig(&config);
	return config;
}

CriAtomExAsrBusAnalyzerConfig criAtomExAsr_GetDefaultConfigForBusAnalyzer(void)
{
	CriAtomExAsrBusAnalyzerConfig config;
	criAtomExAsr_SetDefaultConfigForBusAnalyzer(&config);
	return config;
}

CriAtomExAsrRackConfig criAtomExAsrRack_GetDefaultConfig(void)
{
	CriAtomExAsrRackConfig config;
	criAtomExAsrRack_SetDefaultConfig(&config);
	return config;
}

CriAtomAsrConfig criAtomAsr_GetDefaultConfig(void)
{
	CriAtomAsrConfig config;
	criAtomAsr_SetDefaultConfig(&config);
	return config;
}

CriAtomExConfigForUserPcmOutput criAtomEx_GetDefaultConfigForUserPcmOutput(void)
{
	CriAtomExConfigForUserPcmOutput config;
	criAtomEx_SetDefaultConfigForUserPcmOutput(&config);
	return config;
}
