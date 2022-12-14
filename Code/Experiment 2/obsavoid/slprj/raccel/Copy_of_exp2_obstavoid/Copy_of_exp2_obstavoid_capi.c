#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Copy_of_exp2_obstavoid_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 18
#endif
#ifndef SS_INT64
#define SS_INT64 19
#endif
#else
#include "builtin_typeid_types.h"
#include "Copy_of_exp2_obstavoid.h"
#include "Copy_of_exp2_obstavoid_capi.h"
#include "Copy_of_exp2_obstavoid_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/Saturation" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 1 , 4 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/MATLAB Function" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 2 , 4 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/MATLAB Function" ) , TARGET_STRING ( "" )
, 1 , 0 , 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/Add" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/Sum1" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/Add" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/Sum1" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/Add" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/Sum1" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 6 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Signal Reshaping" ) ,
TARGET_STRING ( "p" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 6 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Signal Reshaping" ) ,
TARGET_STRING ( "v" ) , 1 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Barrier Certificate Constraint/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Barrier Certificate Constraint/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 16 , 1 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Constraint Enforcement/computeSafeAction"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 17 , 1 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Constraint Enforcement/computeSafeAction"
) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 , 2 } , { 18 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot1/initial conditions" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 3 } , { 19 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot1/Integrator" ) ,
TARGET_STRING ( "v" ) , 0 , 0 , 1 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot1/Integrator1" ) ,
TARGET_STRING ( "p" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot2/initial conditions" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 3 } , { 22 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot2/Integrator" ) ,
TARGET_STRING ( "v" ) , 0 , 0 , 1 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot2/Integrator1" ) ,
TARGET_STRING ( "p" ) , 0 , 0 , 1 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot3/initial conditions" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 3 } , { 25 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot3/Integrator" ) ,
TARGET_STRING ( "v" ) , 0 , 0 , 1 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot3/Integrator1" ) ,
TARGET_STRING ( "p" ) , 0 , 0 , 1 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller/Filter/Cont. Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller/Filter/Cont. Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller/Filter/Cont. Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller/Filter/Cont. Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller/Filter/Cont. Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller/Filter/Cont. Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 45 , TARGET_STRING (
"Copy_of_exp2_obstavoid/CBF/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 7 ,
0 } , { 46 , TARGET_STRING ( "Copy_of_exp2_obstavoid/CBF/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 47 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 5 , 0 } , { 48 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 5 , 0 } , { 49 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Constraint Enforcement"
) , TARGET_STRING ( "c" ) , 0 , 9 , 0 } , { 50 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller" ) ,
TARGET_STRING ( "P" ) , 0 , 5 , 0 } , { 51 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller" ) ,
TARGET_STRING ( "I" ) , 0 , 5 , 0 } , { 52 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller" ) ,
TARGET_STRING ( "D" ) , 0 , 5 , 0 } , { 53 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller" ) ,
TARGET_STRING ( "N" ) , 0 , 5 , 0 } , { 54 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 5 , 0 } , { 55 ,
TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 5 , 0 } , { 56 ,
TARGET_STRING ( "Copy_of_exp2_obstavoid/Controller/controller robot1/Ref_p1"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 57 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot1/Ref_v1" ) ,
TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 58 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller" ) ,
TARGET_STRING ( "P" ) , 0 , 5 , 0 } , { 59 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller" ) ,
TARGET_STRING ( "I" ) , 0 , 5 , 0 } , { 60 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller" ) ,
TARGET_STRING ( "D" ) , 0 , 5 , 0 } , { 61 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller" ) ,
TARGET_STRING ( "N" ) , 0 , 5 , 0 } , { 62 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 5 , 0 } , { 63 ,
TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 5 , 0 } , { 64 ,
TARGET_STRING ( "Copy_of_exp2_obstavoid/Controller/controller robot2/Ref_p1"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 65 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot2/Ref_v1" ) ,
TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 66 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller" ) ,
TARGET_STRING ( "P" ) , 0 , 5 , 0 } , { 67 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller" ) ,
TARGET_STRING ( "I" ) , 0 , 5 , 0 } , { 68 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller" ) ,
TARGET_STRING ( "D" ) , 0 , 5 , 0 } , { 69 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller" ) ,
TARGET_STRING ( "N" ) , 0 , 5 , 0 } , { 70 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 5 , 0 } , { 71 ,
TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 5 , 0 } , { 72 ,
TARGET_STRING ( "Copy_of_exp2_obstavoid/Controller/controller robot3/Ref_p1"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 73 , TARGET_STRING (
"Copy_of_exp2_obstavoid/Controller/controller robot3/Ref_v1" ) ,
TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 74 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Barrier Certificate Constraint/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 75 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Barrier Certificate Constraint/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 5 , 0 } , { 76 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Barrier Certificate Constraint/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 5 , 0 } , { 77 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Barrier Certificate Constraint/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 5 , 0 } , { 78 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Constraint Enforcement/umax constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 79 , TARGET_STRING (
 "Copy_of_exp2_obstavoid/CBF/Barrier Certificate Enforcement/Constraint Enforcement/umin constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 80 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot1/initial conditions" ) ,
TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 81 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot1/Integrator" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 5 , 0 } , { 82 , TARGET_STRING
( "Copy_of_exp2_obstavoid/environment/robots/Robot1/Integrator" ) ,
TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 5 , 0 } , { 83 , TARGET_STRING
( "Copy_of_exp2_obstavoid/environment/robots/Robot2/initial conditions" ) ,
TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 84 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot2/Integrator" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 5 , 0 } , { 85 , TARGET_STRING
( "Copy_of_exp2_obstavoid/environment/robots/Robot2/Integrator" ) ,
TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 5 , 0 } , { 86 , TARGET_STRING
( "Copy_of_exp2_obstavoid/environment/robots/Robot3/initial conditions" ) ,
TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 87 , TARGET_STRING (
"Copy_of_exp2_obstavoid/environment/robots/Robot3/Integrator" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 5 , 0 } , { 88 , TARGET_STRING
( "Copy_of_exp2_obstavoid/environment/robots/Robot3/Integrator" ) ,
TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 5 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ;
static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] =
{ { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . b0agtsqbh3 [ 0 ] , & rtB .
kfai1qmqc5 [ 0 ] , & rtB . fu4mwqiown [ 0 ] , & rtB . ksirtn35v4 [ 0 ] , &
rtB . pyccux13oh [ 0 ] , & rtB . iclmzwxqs3 [ 0 ] , & rtB . nkbh0ad3dz [ 0 ]
, & rtB . oqcs3qeeli [ 0 ] , & rtB . n1unafbpjc [ 0 ] , & rtB . d3aalpgobu [
0 ] , & rtB . kgqxquypz3 [ 0 ] , & rtB . prrur2jflh [ 0 ] , & rtB .
n1m2hbrqv1 [ 0 ] , & rtB . hl0uuhzuvt [ 0 ] , & rtB . fz1yjtueq2 [ 0 ] , &
rtB . ob4rbqgfim [ 0 ] , & rtB . iymit1x3xp [ 0 ] , & rtB . iifrhx4cko , &
rtB . atzbhuadkh [ 0 ] , & rtB . b1rs1wlrjx [ 0 ] , & rtB . jv0m1srrja [ 0 ]
, & rtB . ofcujety0u [ 0 ] , & rtB . f0qgskmy2i [ 0 ] , & rtB . kmh4pywknr [
0 ] , & rtB . nwpwlpuzte [ 0 ] , & rtB . d22xigfax5 [ 0 ] , & rtB .
msrgcxqeju [ 0 ] , & rtB . m2yincydfk [ 0 ] , & rtB . kbcqb2x3yb [ 0 ] , &
rtB . hhdwa0bhgm [ 0 ] , & rtB . iooh3agbgu [ 0 ] , & rtB . mhudpacpgy [ 0 ]
, & rtB . h1kv0ninpj [ 0 ] , & rtB . ktrk2zt5rh [ 0 ] , & rtB . jgom23aadi [
0 ] , & rtB . muzj5q2qkv [ 0 ] , & rtB . lk0k5psk2m [ 0 ] , & rtB .
fclztygbns [ 0 ] , & rtB . gc45mejfib [ 0 ] , & rtB . lfiv14p2kf [ 0 ] , &
rtB . ae5dn11ynt [ 0 ] , & rtB . gni3bpus51 [ 0 ] , & rtB . hnyu344m25 [ 0 ]
, & rtB . iqoi20gpai [ 0 ] , & rtB . lmwzw5w0jv [ 0 ] , & rtP .
Constant_Value_e5cors3m1f [ 0 ] , & rtP . Gain_Gain [ 0 ] , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
ConstraintEnforcement_c [ 0 ] , & rtP . PIDController_P , & rtP .
PIDController_I , & rtP . PIDController_D , & rtP . PIDController_N , & rtP .
PIDController_InitialConditionForIntegrator , & rtP .
PIDController_InitialConditionForFilter , & rtP . Ref_p1_Value [ 0 ] , & rtP
. Ref_v1_Value [ 0 ] , & rtP . PIDController_P_ahca11nczu , & rtP .
PIDController_I_mookvequop , & rtP . PIDController_D_e1feedjw5h , & rtP .
PIDController_N_fjaeixuxyv , & rtP .
PIDController_InitialConditionForIntegrator_labkggpuwp , & rtP .
PIDController_InitialConditionForFilter_de1ys3ahhh , & rtP .
Ref_p1_Value_opouedc3dv [ 0 ] , & rtP . Ref_v1_Value_dovcbbjwsu [ 0 ] , & rtP
. PIDController_P_ksfq5ochcx , & rtP . PIDController_I_b1xhupkm44 , & rtP .
PIDController_D_pmnoqidxhh , & rtP . PIDController_N_by1f323fn4 , & rtP .
PIDController_InitialConditionForIntegrator_lz4wascz0h , & rtP .
PIDController_InitialConditionForFilter_fvwb31ti1d , & rtP .
Ref_p1_Value_bmazuu21z2 [ 0 ] , & rtP . Ref_v1_Value_gcvb1oqdbs [ 0 ] , & rtP
. Constant_Value , & rtP . Gain_Gain_kdekrvsba1 , & rtP . Gain1_Gain , & rtP
. Gain2_Gain , & rtP . umaxconstant_Value [ 0 ] , & rtP . uminconstant_Value
[ 0 ] , & rtP . initialconditions_Value [ 0 ] , & rtP . Integrator_UpperSat ,
& rtP . Integrator_LowerSat , & rtP . initialconditions_Value_eczelweelu [ 0
] , & rtP . Integrator_UpperSat_nzhvzzdcx2 , & rtP .
Integrator_LowerSat_li4gnjpeq5 , & rtP . initialconditions_Value_mwviqzbxqh [
0 ] , & rtP . Integrator_UpperSat_lonuxufgp5 , & rtP .
Integrator_LowerSat_np30azhqa2 , } ; static int32_T * rtVarDimsAddrMap [ ] =
{ ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR ,
6 , 2 , 0 } , { rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 8 , 2 , 0 }
, { rtwCAPI_MATRIX_COL_MAJOR , 10 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 12
, 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , { rtwCAPI_VECTOR , 4
, 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 }
} ; static const uint_T rtDimensionArray [ ] = { 6 , 1 , 2 , 1 , 9 , 1 , 9 ,
6 , 1 , 1 , 4 , 1 , 12 , 6 , 12 , 12 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 , 0.1 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2
] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T )
0 } , { ( NULL ) , ( NULL ) , 3 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 45 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 44 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3056357310U , 1959472067U , 1379717648U , 1374270084U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Copy_of_exp2_obstavoid_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Copy_of_exp2_obstavoid_InitializeDataMapInfo ( void ) {
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
void Copy_of_exp2_obstavoid_host_InitializeDataMapInfo (
Copy_of_exp2_obstavoid_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
