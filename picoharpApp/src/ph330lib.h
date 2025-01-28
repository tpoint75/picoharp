/*
    PH330Lib programming library for PicoHarp 330
    PicoQuant GmbH 

    Ver. 2.0.0.0  August 2024
*/


extern int PH330_GetLibraryVersion(char* vers);
extern int PH330_GetErrorString(char* errstring, int errcode);

extern int PH330_OpenDevice(int devidx, char* serial);
extern int PH330_CloseDevice(int devidx);
extern int PH330_Initialize(int devidx, int mode, int refsource);

// all functions below can only be used after PH330_Initialize

extern int PH330_GetHardwareInfo(int devidx, char* model, char* partno, char* version);
extern int PH330_GetSerialNumber(int devidx, char* serial);
extern int PH330_GetFeatures(int devidx, int* features);
extern int PH330_GetBaseResolution(int devidx, double* resolution, int* binsteps);
extern int PH330_GetNumOfInputChannels(int devidx, int* nchannels);

extern int PH330_SetSyncDiv(int devidx, int div);
extern int PH330_SetSyncTrgMode(int devidx, int mode);
extern int PH330_SetSyncEdgeTrg(int devidx, int level, int edge);
extern int PH330_SetSyncCFD(int devidx, int level, int zerocross);
extern int PH330_SetSyncChannelOffset(int devidx, int offset);
extern int PH330_SetSyncChannelEnable(int devidx, int enable); 
extern int PH330_SetSyncDeadTime(int devidx, int on, int deadtime); 

extern int PH330_SetInputTrgMode(int devidx, int channel, int mode);
extern int PH330_SetInputEdgeTrg(int devidx, int channel, int level, int edge);
extern int PH330_SetInputCFD(int devidx, int channel, int level, int zerocross);
extern int PH330_SetInputChannelOffset(int devidx, int channel, int offset);
extern int PH330_SetInputDeadTime(int devidx, int channel, int on, int deadtime);
extern int PH330_SetInputHysteresis(int devidx, int hystcode); 
extern int PH330_SetInputChannelEnable(int devidx, int channel, int enable);

extern int PH330_SetStopOverflow(int devidx, int stop_ovfl, unsigned int stopcount);
extern int PH330_SetBinning(int devidx, int binning);
extern int PH330_SetOffset(int devidx, int offset);
extern int PH330_SetHistoLen(int devidx, int lencode, int* actuallen);
extern int PH330_SetMeasControl(int devidx, int control, int startedge, int stopedge);
extern int PH330_SetTriggerOutput(int devidx, int period);

extern int PH330_ClearHistMem(int devidx);
extern int PH330_StartMeas(int devidx, int tacq);
extern int PH330_StopMeas(int devidx);
extern int PH330_CTCStatus(int devidx, int* ctcstatus);

extern int PH330_GetHistogram(int devidx, unsigned int *chcount, int channel);
extern int PH330_GetAllHistograms(int devidx, unsigned int *chcount);
extern int PH330_GetResolution(int devidx, double* resolution);
extern int PH330_GetSyncPeriod(int devidx, double* period);
extern int PH330_GetSyncRate(int devidx, int* syncrate);
extern int PH330_GetCountRate(int devidx, int channel, int* cntrate);
extern int PH330_GetAllCountRates(int devidx, int* syncrate, int* cntrates);
extern int PH330_GetFlags(int devidx, int* flags);
extern int PH330_GetElapsedMeasTime(int devidx, double* elapsed);

extern int PH330_GetWarnings(int devidx, int* warnings);
extern int PH330_GetWarningsText(int devidx, char* text, int warnings);

// for the time tagging modes only
extern int PH330_SetOflCompression(int devidx, int holdtime); 
extern int PH330_SetMarkerHoldoffTime(int devidx, int holdofftime);
extern int PH330_SetMarkerEdges(int devidx, int me1, int me2, int me3, int me4);
extern int PH330_SetMarkerEnable(int devidx, int en1, int en2, int en3, int en4);
extern int PH330_ReadFiFo(int devidx, unsigned int* buffer, int* nactual);

// for event filtering, time tagging modes only
extern int PH330_SetEventFilterParams(int devidx, int timerange, int matchcnt, int inverse);
extern int PH330_SetEventFilterChannels(int devidx, int usechannels, int passchannels);
extern int PH330_EnableEventFilter(int devidx, int enable);
extern int PH330_SetFilterTestMode(int devidx, int testmode);
extern int PH330_GetFilterInputRates(int devidx, int* syncrate, int* cntrates);
extern int PH330_GetFilterOutputRates(int devidx, int* syncrate, int* cntrates);

// for debugging only
extern int PH330_GetDebugInfo(int devidx, char* debuginfo);
extern int PH330_GetModuleInfo(int devidx, int* modelcode, int* versioncode);
extern int PH330_SaveDebugDump(int devidx, char* filepath);
