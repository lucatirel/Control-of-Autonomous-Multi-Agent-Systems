#include "Copy_of_exp2_obstavoid_capi_host.h"
static Copy_of_exp2_obstavoid_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Copy_of_exp2_obstavoid_host_InitializeDataMapInfo(&(root), "Copy_of_exp2_obstavoid");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
