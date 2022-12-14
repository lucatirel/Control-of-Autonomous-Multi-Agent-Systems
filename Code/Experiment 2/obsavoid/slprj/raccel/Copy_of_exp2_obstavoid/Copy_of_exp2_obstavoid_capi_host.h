#ifndef RTW_HEADER_Copy_of_exp2_obstavoid_cap_host_h__
#define RTW_HEADER_Copy_of_exp2_obstavoid_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Copy_of_exp2_obstavoid_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Copy_of_exp2_obstavoid_host_InitializeDataMapInfo (
Copy_of_exp2_obstavoid_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
