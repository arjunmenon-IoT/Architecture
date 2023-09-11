#include "Signal_Simulation_limit_switch_capi_host.h"
static Signal_Simulation_limit_switch_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Signal_Simulation_limit_switch_host_InitializeDataMapInfo(&(root), "Signal_Simulation_limit_switch");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
