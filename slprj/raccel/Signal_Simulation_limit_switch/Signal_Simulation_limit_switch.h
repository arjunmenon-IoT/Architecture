#ifndef RTW_HEADER_Signal_Simulation_limit_switch_h_
#define RTW_HEADER_Signal_Simulation_limit_switch_h_
#ifndef Signal_Simulation_limit_switch_COMMON_INCLUDES_
#define Signal_Simulation_limit_switch_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Signal_Simulation_limit_switch_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#define MODEL_NAME Signal_Simulation_limit_switch
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (4) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T a5kyfxk4xe ; real_T ce22b4h5co ; uint8_T fgayencn5l ;
uint8_T gfu2325lce ; } B ; typedef struct { struct { void * LoggedData [ 3 ]
; } jieqrkgmgu ; uint8_T fwwy0hicqa ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
RepeatingSequenceStair_OutValues [ 5 ] ; real_T RepeatingSequence_rep_seq_y [
2 ] ; uint8_T LimitedCounter_uplimit ; real_T LookUpTable1_bp01Data [ 2 ] ;
real_T Constant_Value ; uint8_T Output_InitialCondition ; uint8_T
FixPtConstant_Value ; uint8_T Constant_Value_fqewnxpaqg ; } ; extern const
char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern
P rtP ; extern mxArray * mr_Signal_Simulation_limit_switch_GetDWork ( ) ;
extern void mr_Signal_Simulation_limit_switch_SetDWork ( const mxArray * ssDW
) ; extern mxArray *
mr_Signal_Simulation_limit_switch_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
Signal_Simulation_limit_switch_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
