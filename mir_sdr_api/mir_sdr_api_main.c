/*
 * mir_sdr_api.dll
 *
 * Generated from mir_sdr_api.dll by winedump.
 *
 * DO NOT SUBMIT GENERATED DLLS FOR INCLUSION INTO WINE!
 *
 */

//#include "config.h"

#define WINESRC
#define __WINESRC__
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "mir_sdr_api_dll.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(mir_sdr_api);

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_WINE_PREATTACH:
            return TRUE;    /* prefer native version */
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}
/******************************************************************
 *		mir_sdr_ApiVersion (MIR_SDR_API.1)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_ApiVersion(float * version)
{
	TRACE("((float *)%p): stub\n",version);
	return mir_sdr_ApiVersion(version);
}
/******************************************************************
 *		mir_sdr_DownConvert (MIR_SDR_API.2)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_DownConvert(short * in, short * xi, short * xq, unsigned int samplesPerPacket, mir_sdr_If_kHzT ifType, unsigned int M, unsigned int preReset)
{
	TRACE("((short *)%p,(short *)%p,(short *)%p,(unsigned int)%ld,(mir_sdr_If_kHzT)%ld,(unsigned int)%ld,(unsigned int)%ld): stub\n",in,xi,xq,(LONG)samplesPerPacket,(LONG)ifType,(LONG)M,(LONG)preReset);
	return mir_sdr_DownConvert(in,xi,xq,samplesPerPacket,ifType,M,preReset);
}
/******************************************************************
 *		mir_sdr_Init (MIR_SDR_API.3)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_Init(int gRdB, double fsMHz, double rfMHz, mir_sdr_Bw_MHzT bwType, mir_sdr_If_kHzT ifType, int * samplesPerPacket)
{
	TRACE("((int)%ld,(double)%g,(double)%g,(mir_sdr_Bw_MHzT)%ld,(mir_sdr_If_kHzT)%ld,(int *)%p): stub\n",(LONG)gRdB,fsMHz,rfMHz,(LONG)bwType,(LONG)ifType,samplesPerPacket);
	return mir_sdr_Init(gRdB,fsMHz,rfMHz,bwType,ifType,samplesPerPacket);
}
/******************************************************************
 *		mir_sdr_ReadPacket (MIR_SDR_API.4)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_ReadPacket(short * xi, short * xq, unsigned int * firstSampleNum, int * grChanged, int * rfChanged, int * fsChanged)
{
	TRACE("((short *)%p,(short *)%p,(unsigned int *)%p,(int *)%p,(int *)%p,(int *)%p): stub\n",xi,xq,firstSampleNum,grChanged,rfChanged,fsChanged);
	return mir_sdr_ReadPacket(xi,xq,firstSampleNum,grChanged,rfChanged,fsChanged);
}
/******************************************************************
 *		mir_sdr_ResetUpdateFlags (MIR_SDR_API.5)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_ResetUpdateFlags(int resetGainUpdate, int resetRfUpdate, int resetFsUpdate)
{
	TRACE("((int)%ld,(int)%ld,(int)%ld): stub\n",(LONG)resetGainUpdate,(LONG)resetRfUpdate,(LONG)resetFsUpdate);
	return mir_sdr_ResetUpdateFlags(resetGainUpdate,resetRfUpdate,resetFsUpdate);
}
/******************************************************************
 *		mir_sdr_SetDcMode (MIR_SDR_API.6)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetDcMode(int dcCal, int speedUp)
{
	TRACE("((int)%ld,(int)%ld): stub\n",(LONG)dcCal,(LONG)speedUp);
	return mir_sdr_SetDcMode(dcCal,speedUp);
}
/******************************************************************
 *		mir_sdr_SetDcTrackTime (MIR_SDR_API.7)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetDcTrackTime(int trackTime)
{
	TRACE("((int)%ld): stub\n",(LONG)trackTime);
	return mir_sdr_SetDcTrackTime(trackTime);
}
/******************************************************************
 *		mir_sdr_SetFs (MIR_SDR_API.8)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetFs(double dfsHz, int abs, int syncUpdate, int reCal)
{
	TRACE("((double)%g,(int)%ld,(int)%ld,(int)%ld): stub\n",dfsHz,(LONG)abs,(LONG)syncUpdate,(LONG)reCal);
	return mir_sdr_SetFs(dfsHz,abs,syncUpdate,reCal);
}
/******************************************************************
 *		mir_sdr_SetGr (MIR_SDR_API.9)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetGr(int gRdB, int abs, int syncUpdate)
{
	TRACE("((int)%ld,(int)%ld,(int)%ld): stub\n",(LONG)gRdB,(LONG)abs,(LONG)syncUpdate);
	return mir_sdr_SetGr(gRdB,abs,syncUpdate);
}
/******************************************************************
 *		mir_sdr_SetGrParams (MIR_SDR_API.10)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetGrParams(int minimumGr, int lnaGrThreshold)
{
	TRACE("((int)%ld,(int)%ld): stub\n",(LONG)minimumGr,(LONG)lnaGrThreshold);
	return mir_sdr_SetGrParams(minimumGr,lnaGrThreshold);
}
/******************************************************************
 *		mir_sdr_SetParam (MIR_SDR_API.11)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetParam(unsigned int id, unsigned int value)
{
	TRACE("((unsigned int)%ld,(unsigned int)%ld): stub\n",(LONG)id,(LONG)value);
	return mir_sdr_SetParam(id,value);
}
/******************************************************************
 *		mir_sdr_SetRf (MIR_SDR_API.12)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetRf(double drfHz, int abs, int syncUpdate)
{
	TRACE("((double)%g,(int)%ld,(int)%ld): stub\n",drfHz,(LONG)abs,(LONG)syncUpdate);
	return mir_sdr_SetRf(drfHz,abs,syncUpdate);
}
/******************************************************************
 *		mir_sdr_SetSyncUpdatePeriod (MIR_SDR_API.13)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetSyncUpdatePeriod(unsigned int period)
{
	TRACE("((unsigned int)%ld): stub\n",(LONG)period);
	return mir_sdr_SetSyncUpdatePeriod(period);
}
/******************************************************************
 *		mir_sdr_SetSyncUpdateSampleNum (MIR_SDR_API.14)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetSyncUpdateSampleNum(unsigned int sampleNum)
{
	TRACE("((unsigned int)%ld): stub\n",(LONG)sampleNum);
	return mir_sdr_SetSyncUpdateSampleNum(sampleNum);
}
/******************************************************************
 *		mir_sdr_SetTransferMode (MIR_SDR_API.15)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_SetTransferMode(mir_sdr_TransferModeT mode)
{
	TRACE("((mir_sdr_TransferModeT)%ld): stub\n",(LONG)mode);
	return mir_sdr_SetTransferMode(mode);
}
/******************************************************************
 *		mir_sdr_Uninit (MIR_SDR_API.16)
 *
 *
 */
mir_sdr_ErrT callconv MIR_SDR_API_mir_sdr_Uninit(void)
{
	TRACE("(void): stub\n");
	return mir_sdr_Uninit();
}
