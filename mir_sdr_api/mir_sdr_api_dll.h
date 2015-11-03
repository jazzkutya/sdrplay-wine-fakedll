/*
 * mir_sdr_api.dll
 *
 * Generated from mir_sdr_api.dll by winedump.
 *
 * DO NOT SEND GENERATED DLLS FOR INCLUSION INTO WINE !
 *
 */
#ifndef __WINE_MIR_SDR_API_DLL_H
#define __WINE_MIR_SDR_API_DLL_H

#define callconv __cdecl

#include <mirsdrapi-rsp.h>
#include "windef.h"
#include "wine/debug.h"
#include "winbase.h"
#include "winnt.h"


mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_ApiVersion(float * version);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_DownConvert(short * in, short * xi, short * xq, unsigned int samplesPerPacket, mir_sdr_If_kHzT ifType, unsigned int M, unsigned int preReset);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_Init(int gRdB, double fsMHz, double rfMHz, mir_sdr_Bw_MHzT bwType, mir_sdr_If_kHzT ifType, int * samplesPerPacket);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_ReadPacket(short * xi, short * xq, unsigned int * firstSampleNum, int * grChanged, int * rfChanged, int * fsChanged);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_ResetUpdateFlags(int resetGainUpdate, int resetRfUpdate, int resetFsUpdate);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetDcMode(int dcCal, int speedUp);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetDcTrackTime(int trackTime);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetFs(double dfsHz, int abs, int syncUpdate, int reCal);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetGr(int gRdB, int abs, int syncUpdate);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetGrParams(int minimumGr, int lnaGrThreshold);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetParam(unsigned int id, unsigned int value);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetRf(double drfHz, int abs, int syncUpdate);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetSyncUpdatePeriod(unsigned int period);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetSyncUpdateSampleNum(unsigned int sampleNum);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetTransferMode(mir_sdr_TransferModeT mode);
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_Uninit(void);



#endif	/* __WINE_MIR_SDR_API_DLL_H */
