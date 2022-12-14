#ifndef RTW_HEADER_Copy_of_exp2_obstavoid_h_
#define RTW_HEADER_Copy_of_exp2_obstavoid_h_
#ifndef Copy_of_exp2_obstavoid_COMMON_INCLUDES_
#define Copy_of_exp2_obstavoid_COMMON_INCLUDES_
#include <stdlib.h>
#include <stdio.h>
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
#include "Copy_of_exp2_obstavoid_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME Copy_of_exp2_obstavoid
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (48) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (36)   
#elif NCSTATES != 36
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
typedef struct { ljxdlfkika CholRegManager ; real_T jv0m1srrja [ 2 ] ; real_T
b1rs1wlrjx [ 2 ] ; real_T kmh4pywknr [ 2 ] ; real_T f0qgskmy2i [ 2 ] ; real_T
msrgcxqeju [ 2 ] ; real_T d22xigfax5 [ 2 ] ; real_T pyccux13oh [ 2 ] ; real_T
iclmzwxqs3 [ 2 ] ; real_T mhudpacpgy [ 4 ] ; real_T m2yincydfk [ 4 ] ; real_T
kbcqb2x3yb [ 4 ] ; real_T hhdwa0bhgm [ 4 ] ; real_T h1kv0ninpj [ 4 ] ; real_T
ksirtn35v4 [ 2 ] ; real_T oqcs3qeeli [ 2 ] ; real_T n1unafbpjc [ 2 ] ; real_T
fclztygbns [ 4 ] ; real_T ktrk2zt5rh [ 4 ] ; real_T jgom23aadi [ 4 ] ; real_T
muzj5q2qkv [ 4 ] ; real_T gc45mejfib [ 4 ] ; real_T nkbh0ad3dz [ 2 ] ; real_T
kgqxquypz3 [ 2 ] ; real_T prrur2jflh [ 2 ] ; real_T iqoi20gpai [ 4 ] ; real_T
lfiv14p2kf [ 4 ] ; real_T ae5dn11ynt [ 4 ] ; real_T gni3bpus51 [ 4 ] ; real_T
lmwzw5w0jv [ 4 ] ; real_T d3aalpgobu [ 2 ] ; real_T b0agtsqbh3 [ 6 ] ; real_T
fz1yjtueq2 [ 9 ] ; real_T ob4rbqgfim [ 54 ] ; real_T iooh3agbgu [ 4 ] ;
real_T lk0k5psk2m [ 4 ] ; real_T hnyu344m25 [ 4 ] ; real_T atzbhuadkh [ 4 ] ;
real_T ofcujety0u [ 4 ] ; real_T nwpwlpuzte [ 4 ] ; real_T n1m2hbrqv1 [ 6 ] ;
real_T hl0uuhzuvt [ 6 ] ; real_T kfai1qmqc5 [ 2 ] ; real_T fu4mwqiown [ 2 ] ;
real_T dbfquspqdj [ 12 ] ; real_T g5pwfmgg0q [ 12 ] ; real_T fzf1y0c02y [ 4 ]
; real_T iymit1x3xp [ 6 ] ; real_T iifrhx4cko ; } B ; typedef struct { struct
{ void * LoggedData ; } o3f4ljny23 ; struct { void * LoggedData ; }
brh5emq5l5 ; struct { void * LoggedData ; } jnlmh15aax ; struct { void *
LoggedData ; } lzglywoncm ; struct { void * LoggedData ; } no1ziyun1a ;
struct { void * LoggedData ; } cy2vbl11rb ; int_T pywgroe530 ; int_T
bp1r1xfrdc ; int_T gc4n03nzfn ; int_T acg1flwbux ; int_T fnx2sqboij ; int_T
gvjxkecdgi ; int_T buyrvmnubo [ 2 ] ; int_T frkr0zsk1e [ 2 ] ; int_T
pfob24qucz [ 2 ] ; int_T acfsurjur3 [ 6 ] ; } DW ; typedef struct { real_T
k5eqbluoil [ 2 ] ; real_T ngdokjdgsy [ 2 ] ; real_T iusxhffkpj [ 2 ] ; real_T
ek3saalov4 [ 2 ] ; real_T g0kkdzau41 [ 2 ] ; real_T e0vh2jr0wr [ 2 ] ; real_T
bnr04lpwtw [ 4 ] ; real_T e32azti1sy [ 4 ] ; real_T noqzx53y4f [ 4 ] ; real_T
ocre3hnxix [ 4 ] ; real_T enmqgwm1ac [ 4 ] ; real_T bssjoyxvjz [ 4 ] ; } X ;
typedef struct { real_T k5eqbluoil [ 2 ] ; real_T ngdokjdgsy [ 2 ] ; real_T
iusxhffkpj [ 2 ] ; real_T ek3saalov4 [ 2 ] ; real_T g0kkdzau41 [ 2 ] ; real_T
e0vh2jr0wr [ 2 ] ; real_T bnr04lpwtw [ 4 ] ; real_T e32azti1sy [ 4 ] ; real_T
noqzx53y4f [ 4 ] ; real_T ocre3hnxix [ 4 ] ; real_T enmqgwm1ac [ 4 ] ; real_T
bssjoyxvjz [ 4 ] ; } XDot ; typedef struct { boolean_T k5eqbluoil [ 2 ] ;
boolean_T ngdokjdgsy [ 2 ] ; boolean_T iusxhffkpj [ 2 ] ; boolean_T
ek3saalov4 [ 2 ] ; boolean_T g0kkdzau41 [ 2 ] ; boolean_T e0vh2jr0wr [ 2 ] ;
boolean_T bnr04lpwtw [ 4 ] ; boolean_T e32azti1sy [ 4 ] ; boolean_T
noqzx53y4f [ 4 ] ; boolean_T ocre3hnxix [ 4 ] ; boolean_T enmqgwm1ac [ 4 ] ;
boolean_T bssjoyxvjz [ 4 ] ; } XDis ; typedef struct { real_T k5eqbluoil [ 2
] ; real_T ngdokjdgsy [ 2 ] ; real_T iusxhffkpj [ 2 ] ; real_T ek3saalov4 [ 2
] ; real_T g0kkdzau41 [ 2 ] ; real_T e0vh2jr0wr [ 2 ] ; real_T bnr04lpwtw [ 4
] ; real_T e32azti1sy [ 4 ] ; real_T noqzx53y4f [ 4 ] ; real_T ocre3hnxix [ 4
] ; real_T enmqgwm1ac [ 4 ] ; real_T bssjoyxvjz [ 4 ] ; } CStateAbsTol ;
typedef struct { real_T k5eqbluoil [ 2 ] ; real_T ngdokjdgsy [ 2 ] ; real_T
iusxhffkpj [ 2 ] ; real_T ek3saalov4 [ 2 ] ; real_T g0kkdzau41 [ 2 ] ; real_T
e0vh2jr0wr [ 2 ] ; real_T bnr04lpwtw [ 4 ] ; real_T e32azti1sy [ 4 ] ; real_T
noqzx53y4f [ 4 ] ; real_T ocre3hnxix [ 4 ] ; real_T enmqgwm1ac [ 4 ] ; real_T
bssjoyxvjz [ 4 ] ; } CXPtMin ; typedef struct { real_T k5eqbluoil [ 2 ] ;
real_T ngdokjdgsy [ 2 ] ; real_T iusxhffkpj [ 2 ] ; real_T ek3saalov4 [ 2 ] ;
real_T g0kkdzau41 [ 2 ] ; real_T e0vh2jr0wr [ 2 ] ; real_T bnr04lpwtw [ 4 ] ;
real_T e32azti1sy [ 4 ] ; real_T noqzx53y4f [ 4 ] ; real_T ocre3hnxix [ 4 ] ;
real_T enmqgwm1ac [ 4 ] ; real_T bssjoyxvjz [ 4 ] ; } CXPtMax ; typedef
struct { real_T fcipdsr1t0 [ 2 ] ; real_T hs4jtfjevw [ 2 ] ; real_T
p2rzuwna12 [ 2 ] ; real_T lbeis2w42p [ 2 ] ; real_T gvfg3p11kr [ 2 ] ; real_T
gnktmf3obg [ 2 ] ; real_T ntqgn34xfa [ 6 ] ; real_T jvsj55mahb [ 6 ] ; } ZCV
; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T PIDController_D ; real_T PIDController_D_e1feedjw5h ; real_T
PIDController_D_pmnoqidxhh ; real_T PIDController_I ; real_T
PIDController_I_mookvequop ; real_T PIDController_I_b1xhupkm44 ; real_T
PIDController_InitialConditionForFilter ; real_T
PIDController_InitialConditionForFilter_de1ys3ahhh ; real_T
PIDController_InitialConditionForFilter_fvwb31ti1d ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController_InitialConditionForIntegrator_labkggpuwp ; real_T
PIDController_InitialConditionForIntegrator_lz4wascz0h ; real_T
PIDController_N ; real_T PIDController_N_fjaeixuxyv ; real_T
PIDController_N_by1f323fn4 ; real_T PIDController_P ; real_T
PIDController_P_ahca11nczu ; real_T PIDController_P_ksfq5ochcx ; real_T
ConstraintEnforcement_c [ 9 ] ; real_T Integrator_UpperSat ; real_T
Integrator_LowerSat ; real_T Integrator_UpperSat_nzhvzzdcx2 ; real_T
Integrator_LowerSat_li4gnjpeq5 ; real_T Integrator_UpperSat_lonuxufgp5 ;
real_T Integrator_LowerSat_np30azhqa2 ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Gain_Gain [ 144 ] ; real_T Gain_Gain_kdekrvsba1
; real_T Gain1_Gain ; real_T Gain2_Gain ; real_T Constant_Value ; real_T
umaxconstant_Value [ 6 ] ; real_T uminconstant_Value [ 6 ] ; real_T
Constant_Value_e5cors3m1f [ 72 ] ; real_T Ref_p1_Value [ 2 ] ; real_T
Ref_v1_Value [ 2 ] ; real_T Ref_p1_Value_opouedc3dv [ 2 ] ; real_T
Ref_v1_Value_dovcbbjwsu [ 2 ] ; real_T Ref_p1_Value_bmazuu21z2 [ 2 ] ; real_T
Ref_v1_Value_gcvb1oqdbs [ 2 ] ; real_T initialconditions_Value [ 4 ] ; real_T
initialconditions_Value_eczelweelu [ 4 ] ; real_T
initialconditions_Value_mwviqzbxqh [ 4 ] ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_Copy_of_exp2_obstavoid_GetDWork ( ) ;
extern void mr_Copy_of_exp2_obstavoid_SetDWork ( const mxArray * ssDW ) ;
extern mxArray * mr_Copy_of_exp2_obstavoid_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Copy_of_exp2_obstavoid_GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
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
