#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Signal_Simulation_limit_switch_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "Signal_Simulation_limit_switch.h"
#include "Signal_Simulation_limit_switch_capi.h"
#include "Signal_Simulation_limit_switch_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence/Output" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence Stair/Out" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
 "Signal_Simulation_limit_switch/Repeating Sequence Stair/LimitedCounter/Increment Real World/FixPt Sum1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
 "Signal_Simulation_limit_switch/Repeating Sequence Stair/LimitedCounter/Wrap To Zero/FixPt Switch"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 4 , TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence" ) , TARGET_STRING (
"rep_seq_y" ) , 0 , 1 , 0 } , { 5 , TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence Stair" ) , TARGET_STRING (
"OutValues" ) , 0 , 2 , 0 } , { 6 , TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 7 , TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence/Look-Up Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 1 , 0 } , { 8 ,
TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence Stair/LimitedCounter" ) ,
TARGET_STRING ( "uplimit" ) , 1 , 0 , 0 } , { 9 , TARGET_STRING (
"Signal_Simulation_limit_switch/Repeating Sequence Stair/LimitedCounter/Output"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 10 , TARGET_STRING
(
 "Signal_Simulation_limit_switch/Repeating Sequence Stair/LimitedCounter/Increment Real World/FixPt Constant"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 11 , TARGET_STRING (
 "Signal_Simulation_limit_switch/Repeating Sequence Stair/LimitedCounter/Wrap To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ce22b4h5co , & rtB . a5kyfxk4xe ,
& rtB . fgayencn5l , & rtB . gfu2325lce , & rtP . RepeatingSequence_rep_seq_y
[ 0 ] , & rtP . RepeatingSequenceStair_OutValues [ 0 ] , & rtP .
Constant_Value , & rtP . LookUpTable1_bp01Data [ 0 ] , & rtP .
LimitedCounter_uplimit , & rtP . Output_InitialCondition , & rtP .
FixPtConstant_Value , & rtP . Constant_Value_fqewnxpaqg , } ; static int32_T
* rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 1 , 2 , 5 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0
, 1.2 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
4 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 8 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 1656990345U , 3764995208U , 1521270863U , 1493597060U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo *
Signal_Simulation_limit_switch_GetCAPIStaticMap ( void ) { return & mmiStatic
; }
#ifndef HOST_CAPI_BUILD
void Signal_Simulation_limit_switch_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Signal_Simulation_limit_switch_host_InitializeDataMapInfo (
Signal_Simulation_limit_switch_host_DataMapInfo_T * dataMap , const char *
path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
