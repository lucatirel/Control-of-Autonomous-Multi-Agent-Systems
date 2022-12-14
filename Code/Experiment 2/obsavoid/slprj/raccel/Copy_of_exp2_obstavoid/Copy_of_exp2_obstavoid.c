#include "Copy_of_exp2_obstavoid.h"
#include "rtwtypes.h"
#include "Copy_of_exp2_obstavoid_types.h"
#include "mwmathutil.h"
#include "blas.h"
#include <string.h>
#include "Copy_of_exp2_obstavoid_private.h"
#include "rt_logging_mmi.h"
#include "Copy_of_exp2_obstavoid_capi.h"
#include "Copy_of_exp2_obstavoid_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "9.7 (R2022a) 13-Nov-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static void ole0bylgda ( real_T * x ) ; static void lmd1nhzfzp (
i5yhexr3qk * obj , const real_T Aineq [ 54 ] , const real_T bineq [ 9 ] ) ;
static void pj5iov1cpz ( i5yhexr3qk * obj ) ; static real_T ghk2fxpmmy (
int32_T n , const real_T x [ 70 ] , int32_T ix0 ) ; static void kxrhjpey4h (
int32_T n , real_T a , real_T x [ 70 ] , int32_T ix0 ) ; static real_T
k5lxf0quxd ( int32_T n , real_T * alpha1 , real_T x [ 70 ] , int32_T ix0 ) ;
static void aa3fst1nqi ( int32_T m , int32_T n , int32_T iv0 , real_T tau ,
real_T C [ 70 ] , int32_T ic0 , real_T work [ 10 ] ) ; static void mcltj2doxf
( real_T A [ 70 ] , int32_T ia0 , int32_T m , int32_T n , int32_T nfxd ,
real_T tau [ 7 ] ) ; static void btsrkytfzm ( int32_T n , real_T x [ 70 ] ,
int32_T ix0 , int32_T iy0 ) ; static void ev24u3t34s ( p4p24nnrhp * obj ,
int32_T mrows , int32_T ncols ) ; static void bbehgwhq00 ( int32_T m ,
int32_T n , int32_T k , real_T A [ 49 ] , int32_T lda , const real_T tau [ 7
] ) ; static void ibpfypmesd ( p4p24nnrhp * obj , int32_T nrows ) ; static
real_T iiflb1ff2c ( int32_T n , const real_T x [ 49 ] , int32_T ix0 , const
real_T y [ 10 ] ) ; static void corexhtezj ( int32_T depIdx [ 10 ] , int32_T
mFixed , int32_T nDep , p4p24nnrhp * qrmanager , int32_T mRows , int32_T
nCols ) ; static void mgtm5nekki ( int32_T x [ 10 ] , int32_T xLen , int32_T
workspace [ 10 ] , int32_T xMin , int32_T xMax ) ; static void k1j0nkbt5p (
i5yhexr3qk * obj ) ; static void nc0aidj43f ( i5yhexr3qk * obj , int32_T
idx_global_start , int32_T idx_global_dest ) ; static void ghldpbp353 (
int32_T n , const real_T x [ 70 ] , int32_T ix0 , real_T y [ 70 ] , int32_T
iy0 ) ; static void bd0dpx4on5 ( i5yhexr3qk * workingset , p4p24nnrhp *
qrmanager , eeqls2hdjr * memspace , real_T tolfactor ) ; static void
bas4bkmcce ( int32_T m , int32_T n , const real_T A [ 70 ] , int32_T lda ,
const real_T x [ 7 ] , real_T y [ 70 ] ) ; static void mgmlsflwcg (
p4p24nnrhp * obj , const real_T A [ 70 ] , int32_T mrows , int32_T ncols ,
int32_T ldA ) ; static void deyky4gxc4 ( int32_T m , const real_T A [ 70 ] ,
int32_T lda , real_T B_e [ 70 ] ) ; static void pqwgwbjegzo ( int32_T m ,
int32_T k , const real_T A [ 49 ] , int32_T lda , const real_T B_i [ 70 ] ,
real_T C [ 70 ] ) ; static void pqwgwbjegz ( int32_T m , int32_T k , const
real_T A [ 49 ] , int32_T lda , const real_T B_p [ 70 ] , real_T C [ 70 ] ) ;
static void ghldpbp353r ( int32_T n , const real_T x [ 9 ] , real_T y [ 10 ]
) ; static void bas4bkmcceg ( int32_T m , int32_T n , const real_T A [ 63 ] ,
int32_T lda , const real_T x [ 70 ] , real_T y [ 10 ] ) ; static real_T
bj5i5xsfec ( i5yhexr3qk * obj , const real_T x [ 70 ] ) ; static void
bas4bkmccegw ( int32_T m , int32_T n , const real_T A [ 63 ] , int32_T lda ,
const real_T x [ 70 ] , real_T y [ 10 ] ) ; static real_T bj5i5xsfecs (
i5yhexr3qk * obj , const real_T x [ 70 ] ) ; static boolean_T fnhc5k4g5m (
real_T workspace [ 70 ] , real_T xCurrent [ 7 ] , i5yhexr3qk * workingset ,
p4p24nnrhp * qrmanager ) ; static void bas4bkmccegwc ( int32_T m , int32_T n
, const real_T A [ 63 ] , int32_T lda , const real_T x [ 7 ] , real_T y [ 10
] ) ; static real_T bj5i5xsfecsi ( i5yhexr3qk * obj , const real_T x [ 7 ] )
; static void jlmfojzqwn ( i5yhexr3qk * obj , int32_T idx_global ) ; static
void fnwzkkrnuc ( hzxbyztu40 * solution , eeqls2hdjr * memspace , i5yhexr3qk
* workingset , p4p24nnrhp * qrmanager ) ; static void cwrgud3rag ( i5yhexr3qk
* obj ) ; static void pdwhtdx1va ( i5yhexr3qk * obj ) ; static void
bx32ivnacs ( i5yhexr3qk * obj , int32_T PROBLEM_TYPE ) ; static void
oeng3ezgi4 ( boolean_T obj_hasLinear , int32_T obj_nvar , real_T workspace [
70 ] , const real_T f [ 6 ] , const real_T x [ 7 ] ) ; static real_T
iiflb1ff2c0 ( int32_T n , const real_T x [ 7 ] , const real_T y [ 70 ] ) ;
static real_T l4otuy5m0u ( const nvpjvsx3xp * obj , real_T workspace [ 70 ] ,
const real_T f [ 6 ] , const real_T x [ 7 ] ) ; static void bas4bkmccegwch (
int32_T m , int32_T n , int32_T lda , const real_T x [ 7 ] , real_T y [ 6 ] )
; static void bnfiaksbhk ( int32_T n , real_T a , const real_T x [ 6 ] ,
real_T y [ 7 ] ) ; static void eoqr34sblq ( nvpjvsx3xp * obj , const real_T f
[ 6 ] , const real_T x [ 7 ] ) ; static real_T iiflb1ff2c0s ( int32_T n ,
const real_T x [ 7 ] , const real_T y [ 6 ] ) ; static real_T aqbrn5c3pb (
const nvpjvsx3xp * obj , real_T workspace [ 70 ] , const real_T f [ 6 ] ,
const real_T x [ 7 ] ) ; static void ghldpbp353rw ( int32_T n , real_T x ,
real_T y [ 10 ] ) ; static void izz4gtj0d5 ( real_T * a , real_T * b , real_T
* c , real_T * s ) ; static void c3mvw0ni0h ( p4p24nnrhp * obj , const real_T
vec [ 70 ] , int32_T iv0 ) ; static void horw5uuiys ( p4p24nnrhp * obj ,
int32_T idx ) ; static void ahooultswj ( ljxdlfkika * cholmanager , const
p4p24nnrhp * qrmanager , eeqls2hdjr * memspace ) ; static int32_T gopoj1vvcq
( int32_T n , const real_T x [ 49 ] , int32_T incx ) ; static void psztjsmta1
( ljxdlfkika * obj , int32_T LD_offset , int32_T NColsRemain , real_T
REG_PRIMAL ) ; static void ilb425bbdwf ( const ljxdlfkika * obj , real_T rhs
[ 70 ] ) ; static void bas4bkmccegwchb ( int32_T m , int32_T n , const real_T
A [ 49 ] , int32_T ia0 , int32_T lda , const real_T x [ 70 ] , real_T y [ 7 ]
) ; static void ilb425bbdw ( const ljxdlfkika * obj , real_T rhs [ 7 ] ) ;
static void cwpdjwttol ( hzxbyztu40 * solution , eeqls2hdjr * memspace ,
const p4p24nnrhp * qrmanager , ljxdlfkika * cholmanager , const nvpjvsx3xp *
objective ) ; static real_T ghk2fxpmmyr ( int32_T n , const real_T x [ 7 ] )
; static void ghldpbp353rwe ( int32_T n , const real_T x [ 9 ] , real_T y [
70 ] ) ; static void elrlstbsgv ( int32_T m , int32_T n , const real_T A [ 63
] , int32_T lda , const real_T x [ 7 ] , real_T y [ 70 ] ) ; static void
n2zxqljwxs ( int32_T m , int32_T n , const real_T A [ 63 ] , int32_T lda ,
const real_T x [ 7 ] , real_T y [ 70 ] ) ; static void lmt1g5b1kz ( const
real_T solution_xstar [ 7 ] , const real_T solution_searchDir [ 7 ] , real_T
workspace [ 70 ] , int32_T workingset_nVar , int32_T workingset_ldA , const
real_T workingset_Aineq [ 63 ] , const real_T workingset_bineq [ 9 ] , const
real_T workingset_lb [ 7 ] , const real_T workingset_ub [ 7 ] , const int32_T
workingset_indexLB [ 7 ] , const int32_T workingset_indexUB [ 7 ] , const
int32_T workingset_sizes [ 5 ] , const int32_T workingset_isActiveIdx [ 6 ] ,
const boolean_T workingset_isActiveConstr [ 10 ] , const int32_T
workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T tolcon , real_T *
toldelta , real_T toltau , real_T * alpha , boolean_T * newBlocking , int32_T
* constrType , int32_T * constrIdx ) ; static void okmccfwzwb ( const real_T
solution_xstar [ 7 ] , const real_T solution_searchDir [ 7 ] , real_T
workspace [ 70 ] , int32_T workingset_nVar , int32_T workingset_ldA , const
real_T workingset_Aineq [ 63 ] , const real_T workingset_bineq [ 9 ] , const
real_T workingset_lb [ 7 ] , const real_T workingset_ub [ 7 ] , const int32_T
workingset_indexLB [ 7 ] , const int32_T workingset_indexUB [ 7 ] , const
int32_T workingset_sizes [ 5 ] , const int32_T workingset_isActiveIdx [ 6 ] ,
const boolean_T workingset_isActiveConstr [ 10 ] , const int32_T
workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T tolcon , real_T *
alpha , boolean_T * newBlocking , int32_T * constrType , int32_T * constrIdx
) ; static void fahxpir5e0 ( i5yhexr3qk * obj , int32_T TYPE , int32_T
idx_local ) ; static void go2tauwr2l ( i5yhexr3qk * obj , int32_T idx_local )
; static void anb2wy4yoe ( real_T workspace [ 70 ] , hzxbyztu40 * solution ,
const nvpjvsx3xp * objective , const p4p24nnrhp * qrmanager ) ; static void
ghldpbp353rwes ( int32_T n , const real_T x [ 7 ] , real_T y [ 7 ] ) ; static
void octlzgh32c ( int32_T * activeSetChangeID , const real_T f [ 6 ] ,
hzxbyztu40 * solution , eeqls2hdjr * memspace , const nvpjvsx3xp * objective
, i5yhexr3qk * workingset , p4p24nnrhp * qrmanager , boolean_T
b_options_IterDisplayQP , real_T b_options_ObjectiveLimit , real_T
b_options_ConstraintTolerance , int32_T runTimeOptions_MaxIterations , real_T
runTimeOptions_ConstrRelTolFactor , boolean_T updateFval ) ; static void
kw3r0ywtvg ( hzxbyztu40 * solution , const nvpjvsx3xp * objective , int32_T
workingset_nVar , int32_T workingset_ldA , const real_T workingset_ATwset [
70 ] , int32_T workingset_nActiveConstr , real_T workspace [ 70 ] ) ; static
void ht4stwwg0l ( boolean_T newBlocking , int32_T PROBLEM_TYPE , real_T alpha
, real_T stepNorm , int32_T activeConstrChangedType , int32_T
localActiveConstrIdx , int32_T activeSetChangeID , real_T solution_fstar ,
real_T solution_firstorderopt , real_T solution_maxConstr , int32_T
solution_iterations , const int32_T workingset_indexLB [ 7 ] , const int32_T
workingset_indexUB [ 7 ] , int32_T workingset_nActiveConstr ) ; static void
lg42f0n1fn ( const real_T f [ 6 ] , hzxbyztu40 * solution , eeqls2hdjr *
memspace , i5yhexr3qk * workingset , p4p24nnrhp * qrmanager , ljxdlfkika *
cholmanager , nvpjvsx3xp * objective , boolean_T b_options_IterDisplayQP ,
real_T b_options_PricingTolerance , real_T b_options_ObjectiveLimit , real_T
b_options_ConstraintTolerance , real_T b_options_StepTolerance , int32_T
runTimeOptions_MaxIterations , real_T runTimeOptions_ConstrRelTolFactor ,
real_T runTimeOptions_ProbRelTolFactor , boolean_T
runTimeOptions_RemainFeasible ) ; static void fnwzkkrnucs ( hzxbyztu40 *
solution , eeqls2hdjr * memspace , i5yhexr3qk * workingset , p4p24nnrhp *
qrmanager , const epfislbnrs * b_options ) ; static char_T fwezxf5smx (
char_T x ) ; static void pglr1fl5sa ( const real_T f [ 6 ] , hzxbyztu40 *
solution , eeqls2hdjr * memspace , i5yhexr3qk * workingset , p4p24nnrhp *
qrmanager , ljxdlfkika * cholmanager , nvpjvsx3xp * objective , epfislbnrs *
b_options , const f22haufkvl * runTimeOptions ) ; static void hftyudfsy5 (
const real_T f [ 6 ] , hzxbyztu40 * solution , eeqls2hdjr * memspace ,
i5yhexr3qk * workingset , ljxdlfkika * cholmanager , f22haufkvl
runTimeOptions , p4p24nnrhp * qrmanager , nvpjvsx3xp * objective ) ; static
void ole0bylgda ( real_T * x ) { * x = muDoubleScalarSqrt ( * x ) ; } static
void lmd1nhzfzp ( i5yhexr3qk * obj , const real_T Aineq [ 54 ] , const real_T
bineq [ 9 ] ) { int32_T b_idx_row ; int32_T i ; int8_T obj_tmp ; static const
int8_T obj_tmp_p [ 5 ] = { 0 , 0 , 9 , 0 , 0 } ; static const int8_T
d_varargin_2 [ 6 ] = { 1 , 0 , 0 , 9 , 0 , 0 } ; static const int8_T d [ 5 ]
= { 0 , 0 , 9 , 1 , 0 } ; static const int8_T c [ 5 ] = { 0 , 0 , 9 , 9 , 0 }
; static const int8_T b [ 5 ] = { 0 , 0 , 9 , 10 , 0 } ; static const int8_T
c_varargin_2 [ 6 ] = { 1 , 0 , 0 , 9 , 1 , 0 } ; static const int8_T
b_varargin_2 [ 6 ] = { 1 , 0 , 0 , 9 , 9 , 0 } ; static const int8_T
varargin_2 [ 6 ] = { 1 , 0 , 0 , 9 , 10 , 0 } ; obj -> mConstr = 9 ; obj ->
mConstrOrig = 9 ; obj -> mConstrMax = 10 ; for ( i = 0 ; i < 5 ; i ++ ) {
obj_tmp = obj_tmp_p [ i ] ; obj -> sizes [ i ] = obj_tmp ; obj -> sizesNormal
[ i ] = obj_tmp ; obj -> sizesPhaseOne [ i ] = d [ i ] ; obj ->
sizesRegularized [ i ] = c [ i ] ; obj -> sizesRegPhaseOne [ i ] = b [ i ] ;
} for ( i = 0 ; i < 6 ; i ++ ) { obj -> isActiveIdxRegPhaseOne [ i ] =
d_varargin_2 [ i ] ; } for ( i = 0 ; i < 5 ; i ++ ) { obj ->
isActiveIdxRegPhaseOne [ i + 1 ] += obj -> isActiveIdxRegPhaseOne [ i ] ; }
for ( i = 0 ; i < 6 ; i ++ ) { obj -> isActiveIdx [ i ] = obj ->
isActiveIdxRegPhaseOne [ i ] ; obj -> isActiveIdxRegPhaseOne [ i ] =
d_varargin_2 [ i ] ; } for ( i = 0 ; i < 5 ; i ++ ) { obj ->
isActiveIdxRegPhaseOne [ i + 1 ] += obj -> isActiveIdxRegPhaseOne [ i ] ; }
for ( i = 0 ; i < 6 ; i ++ ) { obj -> isActiveIdxNormal [ i ] = obj ->
isActiveIdxRegPhaseOne [ i ] ; obj -> isActiveIdxRegPhaseOne [ i ] =
c_varargin_2 [ i ] ; } for ( i = 0 ; i < 5 ; i ++ ) { obj ->
isActiveIdxRegPhaseOne [ i + 1 ] += obj -> isActiveIdxRegPhaseOne [ i ] ; }
for ( i = 0 ; i < 6 ; i ++ ) { obj -> isActiveIdxPhaseOne [ i ] = obj ->
isActiveIdxRegPhaseOne [ i ] ; obj -> isActiveIdxRegPhaseOne [ i ] =
b_varargin_2 [ i ] ; } for ( i = 0 ; i < 5 ; i ++ ) { obj ->
isActiveIdxRegPhaseOne [ i + 1 ] += obj -> isActiveIdxRegPhaseOne [ i ] ; }
for ( i = 0 ; i < 6 ; i ++ ) { obj -> isActiveIdxRegularized [ i ] = obj ->
isActiveIdxRegPhaseOne [ i ] ; obj -> isActiveIdxRegPhaseOne [ i ] =
varargin_2 [ i ] ; } for ( i = 0 ; i < 5 ; i ++ ) { obj ->
isActiveIdxRegPhaseOne [ i + 1 ] += obj -> isActiveIdxRegPhaseOne [ i ] ; }
for ( i = 0 ; i < 9 ; i ++ ) { for ( b_idx_row = 0 ; b_idx_row < obj -> nVar
; b_idx_row ++ ) { obj -> Aineq [ b_idx_row + obj -> ldA * i ] = Aineq [ 9 *
b_idx_row + i ] ; } } memcpy ( & obj -> bineq [ 0 ] , & bineq [ 0 ] , 9U *
sizeof ( real_T ) ) ; } static void pj5iov1cpz ( i5yhexr3qk * obj ) { int32_T
b_idx_local ; int32_T iATw0 ; int32_T idx_global ; int32_T nWFixed ; obj ->
nVar = obj -> nVarOrig ; obj -> mConstr = obj -> mConstrOrig ; if ( obj ->
nWConstr [ 4 ] > 0 ) { for ( nWFixed = - 1 ; nWFixed < obj -> sizesNormal [ 4
] - 1 ; nWFixed ++ ) { obj -> isActiveConstr [ obj -> isActiveIdxNormal [ 4 ]
+ nWFixed ] = obj -> isActiveConstr [ obj -> isActiveIdx [ 4 ] + nWFixed ] ;
} } for ( nWFixed = 0 ; nWFixed < 5 ; nWFixed ++ ) { obj -> sizes [ nWFixed ]
= obj -> sizesNormal [ nWFixed ] ; } for ( nWFixed = 0 ; nWFixed < 6 ;
nWFixed ++ ) { obj -> isActiveIdx [ nWFixed ] = obj -> isActiveIdxNormal [
nWFixed ] ; } obj -> probType = 3 ; for ( nWFixed = obj -> isActiveIdx [ 2 ]
; nWFixed <= obj -> mConstrMax ; nWFixed ++ ) { obj -> isActiveConstr [
nWFixed - 1 ] = false ; } obj -> nWConstr [ 0 ] = obj -> sizes [ 0 ] ; obj ->
nWConstr [ 1 ] = obj -> sizes [ 1 ] ; obj -> nWConstr [ 2 ] = 0 ; obj ->
nWConstr [ 3 ] = 0 ; obj -> nWConstr [ 4 ] = 0 ; obj -> nActiveConstr = obj
-> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; nWFixed = obj -> sizes [ 0 ] - 1
; for ( b_idx_local = 0 ; b_idx_local <= nWFixed ; b_idx_local ++ ) { obj ->
Wid [ b_idx_local ] = 1 ; obj -> Wlocalidx [ b_idx_local ] = b_idx_local + 1
; obj -> isActiveConstr [ b_idx_local ] = true ; idx_global = obj -> ldA *
b_idx_local - 1 ; for ( iATw0 = 0 ; iATw0 <= obj -> indexFixed [ b_idx_local
] - 2 ; iATw0 ++ ) { obj -> ATwset [ ( iATw0 + idx_global ) + 1 ] = 0.0 ; }
obj -> ATwset [ obj -> indexFixed [ b_idx_local ] + idx_global ] = 1.0 ; for
( iATw0 = obj -> indexFixed [ b_idx_local ] + 1 ; iATw0 <= obj -> nVar ;
iATw0 ++ ) { obj -> ATwset [ iATw0 + idx_global ] = 0.0 ; } obj -> bwset [
b_idx_local ] = obj -> ub [ obj -> indexFixed [ b_idx_local ] - 1 ] ; } for (
b_idx_local = 0 ; b_idx_local < obj -> sizes [ 1 ] ; b_idx_local ++ ) {
idx_global = ( nWFixed + b_idx_local ) + 1 ; obj -> Wid [ idx_global ] = 2 ;
obj -> Wlocalidx [ idx_global ] = b_idx_local + 1 ; obj -> isActiveConstr [
idx_global ] = true ; } } static real_T ghk2fxpmmy ( int32_T n , const real_T
x [ 70 ] , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T t ; real_T y
; int32_T k ; int32_T kend ; y = 0.0 ; if ( n >= 1 ) { if ( n == 1 ) { y =
muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; } } return y
; } static void kxrhjpey4h ( int32_T n , real_T a , real_T x [ 70 ] , int32_T
ix0 ) { int32_T b ; int32_T k ; b = ix0 + n ; for ( k = ix0 ; k < b ; k ++ )
{ x [ k - 1 ] *= a ; } } static real_T k5lxf0quxd ( int32_T n , real_T *
alpha1 , real_T x [ 70 ] , int32_T ix0 ) { real_T tau ; real_T xnorm ;
int32_T k ; int32_T knt ; tau = 0.0 ; if ( n > 0 ) { xnorm = ghk2fxpmmy ( n -
1 , x , ix0 ) ; if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( * alpha1
, xnorm ) ; if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ; } if (
muDoubleScalarAbs ( xnorm ) < 1.0020841800044864E-292 ) { knt = - 1 ; do {
knt ++ ; kxrhjpey4h ( n - 1 , 9.9792015476736E+291 , x , ix0 ) ; xnorm *=
9.9792015476736E+291 ; * alpha1 *= 9.9792015476736E+291 ; } while ( (
muDoubleScalarAbs ( xnorm ) < 1.0020841800044864E-292 ) && ( knt + 1 < 20 ) )
; xnorm = muDoubleScalarHypot ( * alpha1 , ghk2fxpmmy ( n - 1 , x , ix0 ) ) ;
if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ; } tau = ( xnorm - * alpha1 ) /
xnorm ; kxrhjpey4h ( n - 1 , 1.0 / ( * alpha1 - xnorm ) , x , ix0 ) ; for ( k
= 0 ; k <= knt ; k ++ ) { xnorm *= 1.0020841800044864E-292 ; } * alpha1 =
xnorm ; } else { tau = ( xnorm - * alpha1 ) / xnorm ; kxrhjpey4h ( n - 1 ,
1.0 / ( * alpha1 - xnorm ) , x , ix0 ) ; * alpha1 = xnorm ; } } } return tau
; } static void aa3fst1nqi ( int32_T m , int32_T n , int32_T iv0 , real_T tau
, real_T C [ 70 ] , int32_T ic0 , real_T work [ 10 ] ) { real_T c ; int32_T
b_b ; int32_T coltop ; int32_T exitg1 ; int32_T ia ; int32_T iac ; int32_T ix
; int32_T jy ; int32_T lastc ; int32_T lastv ; boolean_T exitg2 ; if ( tau !=
0.0 ) { lastv = m - 1 ; lastc = iv0 + m ; while ( ( lastv + 1 > 0 ) && ( C [
lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc = n - 1 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = lastc * 7 +
ic0 ; jy = coltop ; do { exitg1 = 0 ; if ( jy <= coltop + lastv ) { if ( C [
jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else { lastc -- ;
exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ;
} } } else { lastv = - 1 ; lastc = - 1 ; } if ( lastv + 1 > 0 ) { if ( lastc
+ 1 != 0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++ ) { work [ coltop
] = 0.0 ; } coltop = 0 ; jy = 7 * lastc + ic0 ; for ( iac = ic0 ; iac <= jy ;
iac += 7 ) { ix = iv0 ; c = 0.0 ; b_b = iac + lastv ; for ( ia = iac ; ia <=
b_b ; ia ++ ) { c += C [ ia - 1 ] * C [ ix - 1 ] ; ix ++ ; } work [ coltop ]
+= c ; coltop ++ ; } } if ( ! ( - tau == 0.0 ) ) { coltop = ic0 ; jy = 0 ;
for ( iac = 0 ; iac <= lastc ; iac ++ ) { if ( work [ jy ] != 0.0 ) { c =
work [ jy ] * - tau ; ix = iv0 ; b_b = lastv + coltop ; for ( ia = coltop ;
ia <= b_b ; ia ++ ) { C [ ia - 1 ] += C [ ix - 1 ] * c ; ix ++ ; } } jy ++ ;
coltop += 7 ; } } } } static void mcltj2doxf ( real_T A [ 70 ] , int32_T ia0
, int32_T m , int32_T n , int32_T nfxd , real_T tau [ 7 ] ) { real_T work [
10 ] ; real_T b_atmp ; int32_T i ; int32_T ii ; int32_T mmi ; memset ( & work
[ 0 ] , 0 , 10U * sizeof ( real_T ) ) ; for ( i = 0 ; i < nfxd ; i ++ ) { ii
= ( ( i * 7 + ia0 ) + i ) - 1 ; mmi = m - i ; if ( i + 1 < m ) { b_atmp = A [
ii ] ; tau [ i ] = k5lxf0quxd ( mmi , & b_atmp , A , ii + 2 ) ; A [ ii ] =
b_atmp ; } else { tau [ i ] = 0.0 ; } if ( i + 1 < n ) { b_atmp = A [ ii ] ;
A [ ii ] = 1.0 ; aa3fst1nqi ( mmi , ( n - i ) - 1 , ii + 1 , tau [ i ] , A ,
ii + 8 , work ) ; A [ ii ] = b_atmp ; } } } static void btsrkytfzm ( int32_T
n , real_T x [ 70 ] , int32_T ix0 , int32_T iy0 ) { real_T temp ; int32_T ix
; int32_T iy ; int32_T k ; ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n
; k ++ ) { temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] = temp ; ix ++ ;
iy ++ ; } } static void ev24u3t34s ( p4p24nnrhp * obj , int32_T mrows ,
int32_T ncols ) { real_T vn1 [ 10 ] ; real_T vn2 [ 10 ] ; real_T work [ 10 ]
; real_T s ; real_T smax ; int32_T i ; int32_T ii ; int32_T ix ; int32_T k ;
int32_T minmn ; int32_T nfxd ; int32_T nmi ; int32_T pvt ; if ( mrows * ncols
== 0 ) { obj -> mrows = mrows ; obj -> ncols = ncols ; obj -> minRowCol = 0 ;
} else { obj -> usedPivoting = true ; obj -> mrows = mrows ; obj -> ncols =
ncols ; obj -> minRowCol = muIntScalarMin_sint32 ( mrows , ncols ) ; minmn =
muIntScalarMin_sint32 ( mrows , ncols ) ; for ( i = 0 ; i < 7 ; i ++ ) { obj
-> tau [ i ] = 0.0 ; } if ( minmn < 1 ) { for ( minmn = 0 ; minmn < ncols ;
minmn ++ ) { obj -> jpvt [ minmn ] = minmn + 1 ; } } else { nfxd = - 1 ; for
( i = 0 ; i < ncols ; i ++ ) { if ( obj -> jpvt [ i ] != 0 ) { nfxd ++ ; if (
i + 1 != nfxd + 1 ) { btsrkytfzm ( mrows , obj -> QR , i * 7 + 1 , nfxd * 7 +
1 ) ; obj -> jpvt [ i ] = obj -> jpvt [ nfxd ] ; obj -> jpvt [ nfxd ] = i + 1
; } else { obj -> jpvt [ i ] = i + 1 ; } } else { obj -> jpvt [ i ] = i + 1 ;
} } nfxd ++ ; nfxd = muIntScalarMin_sint32 ( nfxd , minmn ) ; for ( i = 0 ; i
< 7 ; i ++ ) { obj -> tau [ i ] = 0.0 ; } mcltj2doxf ( obj -> QR , 1 , mrows
, ncols , nfxd , obj -> tau ) ; if ( nfxd < minmn ) { minmn =
muIntScalarMin_sint32 ( mrows , ncols ) ; memset ( & work [ 0 ] , 0 , 10U *
sizeof ( real_T ) ) ; memset ( & vn1 [ 0 ] , 0 , 10U * sizeof ( real_T ) ) ;
memset ( & vn2 [ 0 ] , 0 , 10U * sizeof ( real_T ) ) ; for ( i = nfxd ; i <
ncols ; i ++ ) { vn1 [ i ] = ghk2fxpmmy ( mrows - nfxd , obj -> QR , ( i * 7
+ nfxd ) + 1 ) ; vn2 [ i ] = vn1 [ i ] ; } while ( nfxd + 1 <= minmn ) { ii =
nfxd * 7 + nfxd ; nmi = ncols - nfxd ; i = mrows - nfxd ; if ( nmi < 1 ) {
pvt = - 1 ; } else { pvt = 0 ; if ( nmi > 1 ) { ix = nfxd ; smax =
muDoubleScalarAbs ( vn1 [ nfxd ] ) ; for ( k = 2 ; k <= nmi ; k ++ ) { ix ++
; s = muDoubleScalarAbs ( vn1 [ ix ] ) ; if ( s > smax ) { pvt = k - 1 ; smax
= s ; } } } } pvt += nfxd ; if ( pvt + 1 != nfxd + 1 ) { btsrkytfzm ( mrows ,
obj -> QR , pvt * 7 + 1 , nfxd * 7 + 1 ) ; ix = obj -> jpvt [ pvt ] ; obj ->
jpvt [ pvt ] = obj -> jpvt [ nfxd ] ; obj -> jpvt [ nfxd ] = ix ; vn1 [ pvt ]
= vn1 [ nfxd ] ; vn2 [ pvt ] = vn2 [ nfxd ] ; } if ( nfxd + 1 < mrows ) {
smax = obj -> QR [ ii ] ; obj -> tau [ nfxd ] = k5lxf0quxd ( i , & smax , obj
-> QR , ii + 2 ) ; obj -> QR [ ii ] = smax ; } else { obj -> tau [ nfxd ] =
0.0 ; } if ( nfxd + 1 < ncols ) { smax = obj -> QR [ ii ] ; obj -> QR [ ii ]
= 1.0 ; aa3fst1nqi ( i , nmi - 1 , ii + 1 , obj -> tau [ nfxd ] , obj -> QR ,
ii + 8 , work ) ; obj -> QR [ ii ] = smax ; } for ( ii = nfxd + 1 ; ii <
ncols ; ii ++ ) { nmi = ii * 7 + nfxd ; if ( vn1 [ ii ] != 0.0 ) { smax =
muDoubleScalarAbs ( obj -> QR [ nmi ] ) / vn1 [ ii ] ; smax = 1.0 - smax *
smax ; if ( smax < 0.0 ) { smax = 0.0 ; } s = vn1 [ ii ] / vn2 [ ii ] ; s = s
* s * smax ; if ( s <= 1.4901161193847656E-8 ) { if ( nfxd + 1 < mrows ) {
vn1 [ ii ] = ghk2fxpmmy ( i - 1 , obj -> QR , nmi + 2 ) ; vn2 [ ii ] = vn1 [
ii ] ; } else { vn1 [ ii ] = 0.0 ; vn2 [ ii ] = 0.0 ; } } else { vn1 [ ii ]
*= muDoubleScalarSqrt ( smax ) ; } } } nfxd ++ ; } } } } } static void
bbehgwhq00 ( int32_T m , int32_T n , int32_T k , real_T A [ 49 ] , int32_T
lda , const real_T tau [ 7 ] ) { real_T work [ 7 ] ; real_T c ; int32_T b_ia
; int32_T b_ix ; int32_T c_b ; int32_T c_ia ; int32_T coltop ; int32_T exitg1
; int32_T i ; int32_T iaii ; int32_T itau ; int32_T ix ; int32_T jA ; int32_T
lastc ; int32_T lastv ; boolean_T exitg2 ; if ( n >= 1 ) { for ( itau = k ;
itau < n ; itau ++ ) { i = itau * lda ; for ( iaii = 0 ; iaii < m ; iaii ++ )
{ A [ i + iaii ] = 0.0 ; } A [ i + itau ] = 1.0 ; } itau = k - 1 ; for ( i =
0 ; i < 7 ; i ++ ) { work [ i ] = 0.0 ; } for ( i = k ; i >= 1 ; i -- ) {
iaii = ( ( i - 1 ) * lda + i ) - 1 ; if ( i < n ) { A [ iaii ] = 1.0 ; lastc
= m - i ; jA = ( iaii + lda ) + 1 ; if ( tau [ itau ] != 0.0 ) { lastv =
lastc ; lastc += iaii ; while ( ( lastv + 1 > 0 ) && ( A [ lastc ] == 0.0 ) )
{ lastv -- ; lastc -- ; } lastc = ( n - i ) - 1 ; exitg2 = false ; while ( (
! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = lastc * lda + jA ; c_ia = coltop
; do { exitg1 = 0 ; if ( c_ia <= coltop + lastv ) { if ( A [ c_ia - 1 ] !=
0.0 ) { exitg1 = 1 ; } else { c_ia ++ ; } } else { lastc -- ; exitg1 = 2 ; }
} while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } } else {
lastv = - 1 ; lastc = - 1 ; } if ( lastv + 1 > 0 ) { if ( lastc + 1 != 0 ) {
for ( coltop = 0 ; coltop <= lastc ; coltop ++ ) { work [ coltop ] = 0.0 ; }
coltop = 0 ; c_ia = lda * lastc + jA ; b_ix = jA ; while ( ( ( lda > 0 ) && (
b_ix <= c_ia ) ) || ( ( lda < 0 ) && ( b_ix >= c_ia ) ) ) { ix = iaii ; c =
0.0 ; c_b = b_ix + lastv ; for ( b_ia = b_ix ; b_ia <= c_b ; b_ia ++ ) { c +=
A [ b_ia - 1 ] * A [ ix ] ; ix ++ ; } work [ coltop ] += c ; coltop ++ ; b_ix
+= lda ; } } if ( ! ( - tau [ itau ] == 0.0 ) ) { coltop = 0 ; for ( c_ia = 0
; c_ia <= lastc ; c_ia ++ ) { if ( work [ coltop ] != 0.0 ) { c = work [
coltop ] * - tau [ itau ] ; b_ix = iaii ; ix = lastv + jA ; for ( c_b = jA ;
c_b <= ix ; c_b ++ ) { A [ c_b - 1 ] += A [ b_ix ] * c ; b_ix ++ ; } } coltop
++ ; jA += lda ; } } } } if ( i < m ) { lastv = ( ( iaii + m ) - i ) + 1 ;
for ( jA = iaii + 1 ; jA < lastv ; jA ++ ) { A [ jA ] *= - tau [ itau ] ; } }
A [ iaii ] = 1.0 - tau [ itau ] ; for ( lastv = 0 ; lastv <= i - 2 ; lastv ++
) { A [ ( iaii - lastv ) - 1 ] = 0.0 ; } itau -- ; } } } static void
ibpfypmesd ( p4p24nnrhp * obj , int32_T nrows ) { int32_T iQR0 ; int32_T idx
; int32_T k ; int32_T n ; for ( idx = 0 ; idx < obj -> minRowCol ; idx ++ ) {
iQR0 = obj -> ldq * idx + idx ; n = ( obj -> mrows - idx ) - 2 ; for ( k = 1
; k - 1 <= n ; k ++ ) { obj -> Q [ iQR0 + k ] = obj -> QR [ iQR0 + k ] ; } }
bbehgwhq00 ( obj -> mrows , nrows , obj -> minRowCol , obj -> Q , obj -> ldq
, obj -> tau ) ; } static real_T iiflb1ff2c ( int32_T n , const real_T x [ 49
] , int32_T ix0 , const real_T y [ 10 ] ) { real_T d ; int32_T ix ; int32_T
iy ; int32_T k ; d = 0.0 ; if ( n >= 1 ) { ix = ix0 ; iy = 0 ; for ( k = 0 ;
k < n ; k ++ ) { d += x [ ix - 1 ] * y [ iy ] ; ix ++ ; iy ++ ; } } return d
; } static void corexhtezj ( int32_T depIdx [ 10 ] , int32_T mFixed , int32_T
nDep , p4p24nnrhp * qrmanager , int32_T mRows , int32_T nCols ) { int32_T
b_idx ; for ( b_idx = 0 ; b_idx < mFixed ; b_idx ++ ) { qrmanager -> jpvt [
b_idx ] = 1 ; } for ( b_idx = mFixed ; b_idx < nCols ; b_idx ++ ) { qrmanager
-> jpvt [ b_idx ] = 0 ; } ev24u3t34s ( qrmanager , mRows , nCols ) ; for (
b_idx = 0 ; b_idx < nDep ; b_idx ++ ) { depIdx [ b_idx ] = qrmanager -> jpvt
[ ( nCols - nDep ) + b_idx ] ; } } static void mgtm5nekki ( int32_T x [ 10 ]
, int32_T xLen , int32_T workspace [ 10 ] , int32_T xMin , int32_T xMax ) {
int32_T b_idxW ; int32_T idxEnd ; int32_T idxStart ; int32_T maxOffset ; if (
( xLen > 1 ) && ( xMax > xMin ) ) { maxOffset = xMax - xMin ; for ( idxStart
= 0 ; idxStart <= maxOffset ; idxStart ++ ) { workspace [ idxStart ] = 0 ; }
maxOffset = ( xMax - xMin ) - 1 ; for ( idxStart = 0 ; idxStart < xLen ;
idxStart ++ ) { workspace [ x [ idxStart ] - xMin ] ++ ; } for ( idxStart = 1
; idxStart < maxOffset + 2 ; idxStart ++ ) { workspace [ idxStart ] +=
workspace [ idxStart - 1 ] ; } idxStart = 0 ; idxEnd = workspace [ 0 ] ; for
( b_idxW = 0 ; b_idxW <= maxOffset ; b_idxW ++ ) { while ( idxStart + 1 <=
idxEnd ) { x [ idxStart ] = b_idxW + xMin ; idxStart ++ ; } idxStart =
workspace [ b_idxW ] ; idxEnd = workspace [ b_idxW + 1 ] ; } while ( idxStart
+ 1 <= idxEnd ) { x [ idxStart ] = xMax ; idxStart ++ ; } } } static void
k1j0nkbt5p ( i5yhexr3qk * obj ) { int32_T idx_global ; for ( idx_global = obj
-> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; idx_global < obj -> nActiveConstr
; idx_global ++ ) { obj -> isActiveConstr [ ( obj -> isActiveIdx [ obj -> Wid
[ idx_global ] - 1 ] + obj -> Wlocalidx [ idx_global ] ) - 2 ] = false ; }
obj -> nWConstr [ 2 ] = 0 ; obj -> nWConstr [ 3 ] = 0 ; obj -> nWConstr [ 4 ]
= 0 ; obj -> nActiveConstr = obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ;
} static void nc0aidj43f ( i5yhexr3qk * obj , int32_T idx_global_start ,
int32_T idx_global_dest ) { int32_T b_idx ; obj -> Wid [ idx_global_dest - 1
] = obj -> Wid [ idx_global_start - 1 ] ; obj -> Wlocalidx [ idx_global_dest
- 1 ] = obj -> Wlocalidx [ idx_global_start - 1 ] ; for ( b_idx = 0 ; b_idx <
obj -> nVar ; b_idx ++ ) { obj -> ATwset [ b_idx + obj -> ldA * (
idx_global_dest - 1 ) ] = obj -> ATwset [ ( idx_global_start - 1 ) * obj ->
ldA + b_idx ] ; } obj -> bwset [ idx_global_dest - 1 ] = obj -> bwset [
idx_global_start - 1 ] ; } static void ghldpbp353 ( int32_T n , const real_T
x [ 70 ] , int32_T ix0 , real_T y [ 70 ] , int32_T iy0 ) { int32_T b_k ; for
( b_k = - 1 ; b_k < n - 1 ; b_k ++ ) { y [ iy0 + b_k ] = x [ ix0 + b_k ] ; }
} static void bd0dpx4on5 ( i5yhexr3qk * workingset , p4p24nnrhp * qrmanager ,
eeqls2hdjr * memspace , real_T tolfactor ) { real_T tol ; int32_T idx ;
int32_T nDepIneq ; int32_T nFixedConstr ; int32_T nVar ; nFixedConstr =
workingset -> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ] ; nVar =
workingset -> nVar ; if ( ( workingset -> nWConstr [ 2 ] + workingset ->
nWConstr [ 3 ] ) + workingset -> nWConstr [ 4 ] > 0 ) { tol = tolfactor * (
real_T ) workingset -> nVar * 2.2204460492503131E-16 ; for ( nDepIneq = 0 ;
nDepIneq < nFixedConstr ; nDepIneq ++ ) { qrmanager -> jpvt [ nDepIneq ] = 1
; } for ( nDepIneq = nFixedConstr ; nDepIneq < workingset -> nActiveConstr ;
nDepIneq ++ ) { qrmanager -> jpvt [ nDepIneq ] = 0 ; } for ( nDepIneq = 0 ;
nDepIneq < workingset -> nActiveConstr ; nDepIneq ++ ) { ghldpbp353 ( nVar ,
workingset -> ATwset , workingset -> ldA * nDepIneq + 1 , qrmanager -> QR ,
qrmanager -> ldq * nDepIneq + 1 ) ; } ev24u3t34s ( qrmanager , workingset ->
nVar , workingset -> nActiveConstr ) ; nDepIneq = - 1 ; for ( idx =
workingset -> nActiveConstr - 1 ; idx + 1 > nVar ; idx -- ) { nDepIneq ++ ;
memspace -> workspace_int [ nDepIneq ] = qrmanager -> jpvt [ idx ] ; } if (
idx + 1 <= workingset -> nVar ) { nVar = qrmanager -> ldq * idx + idx ; while
( ( idx + 1 > nFixedConstr ) && ( muDoubleScalarAbs ( qrmanager -> QR [ nVar
] ) < tol ) ) { nDepIneq ++ ; memspace -> workspace_int [ nDepIneq ] =
qrmanager -> jpvt [ idx ] ; idx -- ; nVar = ( nVar - qrmanager -> ldq ) - 1 ;
} } mgtm5nekki ( memspace -> workspace_int , nDepIneq + 1 , memspace ->
workspace_sort , nFixedConstr + 1 , workingset -> nActiveConstr ) ; while (
nDepIneq + 1 > 0 ) { nFixedConstr = workingset -> Wid [ memspace ->
workspace_int [ nDepIneq ] - 1 ] - 1 ; workingset -> isActiveConstr [ (
workingset -> isActiveIdx [ workingset -> Wid [ memspace -> workspace_int [
nDepIneq ] - 1 ] - 1 ] + workingset -> Wlocalidx [ memspace -> workspace_int
[ nDepIneq ] - 1 ] ) - 2 ] = false ; nc0aidj43f ( workingset , workingset ->
nActiveConstr , memspace -> workspace_int [ nDepIneq ] ) ; workingset ->
nActiveConstr -- ; workingset -> nWConstr [ nFixedConstr ] -- ; nDepIneq -- ;
} } } static void bas4bkmcce ( int32_T m , int32_T n , const real_T A [ 70 ]
, int32_T lda , const real_T x [ 7 ] , real_T y [ 70 ] ) { real_T c ; int32_T
b ; int32_T b_b ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; if ( (
m != 0 ) && ( n != 0 ) ) { iy = 0 ; b = ( n - 1 ) * lda + 1 ; iac = 1 ; while
( ( ( lda > 0 ) && ( iac <= b ) ) || ( ( lda < 0 ) && ( iac >= b ) ) ) { ix =
0 ; c = 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia ++ ) { c += A [
ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ] += - c ; iy ++ ; iac += lda ; } } }
static void mgmlsflwcg ( p4p24nnrhp * obj , const real_T A [ 70 ] , int32_T
mrows , int32_T ncols , int32_T ldA ) { int32_T i ; int32_T minmn ; boolean_T
guard1 = false ; guard1 = false ; if ( mrows * ncols > 0 ) { for ( minmn = 0
; minmn < ncols ; minmn ++ ) { ghldpbp353 ( mrows , A , ldA * minmn + 1 , obj
-> QR , obj -> ldq * minmn + 1 ) ; } guard1 = true ; } else if ( mrows *
ncols == 0 ) { obj -> mrows = mrows ; obj -> ncols = ncols ; obj -> minRowCol
= 0 ; } else { guard1 = true ; } if ( guard1 ) { obj -> usedPivoting = false
; obj -> mrows = mrows ; obj -> ncols = ncols ; for ( minmn = 0 ; minmn <
ncols ; minmn ++ ) { obj -> jpvt [ minmn ] = minmn + 1 ; } obj -> minRowCol =
muIntScalarMin_sint32 ( mrows , ncols ) ; minmn = muIntScalarMin_sint32 (
mrows , ncols ) ; for ( i = 0 ; i < 7 ; i ++ ) { obj -> tau [ i ] = 0.0 ; }
if ( minmn >= 1 ) { for ( i = 0 ; i < 7 ; i ++ ) { obj -> tau [ i ] = 0.0 ; }
mcltj2doxf ( obj -> QR , 1 , mrows , ncols , minmn , obj -> tau ) ; } } }
static void deyky4gxc4 ( int32_T m , const real_T A [ 70 ] , int32_T lda ,
real_T B_e [ 70 ] ) { real_T temp ; int32_T b_i ; int32_T iAcol ; int32_T k ;
for ( b_i = 0 ; b_i < m ; b_i ++ ) { iAcol = lda * b_i ; temp = B_e [ b_i ] ;
for ( k = 0 ; k < b_i ; k ++ ) { temp -= A [ k + iAcol ] * B_e [ k ] ; } B_e
[ b_i ] = temp / A [ b_i + iAcol ] ; } for ( b_i = 0 ; b_i < m ; b_i ++ ) {
iAcol = lda * b_i ; temp = B_e [ b_i + 10 ] ; for ( k = 0 ; k < b_i ; k ++ )
{ temp -= A [ k + iAcol ] * B_e [ k + 10 ] ; } B_e [ b_i + 10 ] = temp / A [
b_i + iAcol ] ; } } static void pqwgwbjegzo ( int32_T m , int32_T k , const
real_T A [ 49 ] , int32_T lda , const real_T B_i [ 70 ] , real_T C [ 70 ] ) {
int32_T ar ; int32_T b_ic ; int32_T ia ; int32_T ib ; if ( m != 0 ) { for (
ar = 0 ; ar < m ; ar ++ ) { C [ ar ] = 0.0 ; } for ( ar = 10 ; ar < m + 10 ;
ar ++ ) { C [ ar ] = 0.0 ; } ar = - 1 ; for ( ib = 1 ; ib <= k ; ib ++ ) { ia
= ar ; for ( b_ic = 0 ; b_ic < m ; b_ic ++ ) { ia ++ ; C [ b_ic ] += B_i [ ib
- 1 ] * A [ ia ] ; } ar += lda ; } ar = - 1 ; for ( ib = 11 ; ib <= k + 10 ;
ib ++ ) { ia = ar ; for ( b_ic = 10 ; b_ic < m + 10 ; b_ic ++ ) { ia ++ ; C [
b_ic ] += B_i [ ib - 1 ] * A [ ia ] ; } ar += lda ; } } } static void
pqwgwbjegz ( int32_T m , int32_T k , const real_T A [ 49 ] , int32_T lda ,
const real_T B_p [ 70 ] , real_T C [ 70 ] ) { real_T temp ; int32_T ar ;
int32_T b_ic ; int32_T w ; if ( m != 0 ) { for ( ar = 0 ; ar < m ; ar ++ ) {
C [ ar ] = 0.0 ; } for ( ar = 10 ; ar < m + 10 ; ar ++ ) { C [ ar ] = 0.0 ; }
ar = - 1 ; for ( b_ic = 0 ; b_ic < m ; b_ic ++ ) { temp = 0.0 ; for ( w = 1 ;
w - 1 < k ; w ++ ) { temp += A [ w + ar ] * B_p [ w + - 1 ] ; } C [ b_ic ] +=
temp ; ar += lda ; } ar = - 1 ; for ( b_ic = 10 ; b_ic < m + 10 ; b_ic ++ ) {
temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp += A [ w + ar ] * B_p [
w + 9 ] ; } C [ b_ic ] += temp ; ar += lda ; } } } static void ghldpbp353r (
int32_T n , const real_T x [ 9 ] , real_T y [ 10 ] ) { int32_T b_k ; for (
b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void
bas4bkmcceg ( int32_T m , int32_T n , const real_T A [ 63 ] , int32_T lda ,
const real_T x [ 70 ] , real_T y [ 10 ] ) { real_T c ; int32_T b_b ; int32_T
b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; if ( ( m != 0 )
&& ( n != 0 ) ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = - y [
b_iy ] ; } iy = 0 ; b_iy = ( n - 1 ) * lda + 1 ; iac = 1 ; while ( ( ( lda >
0 ) && ( iac <= b_iy ) ) || ( ( lda < 0 ) && ( iac >= b_iy ) ) ) { ix = 0 ; c
= 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia ++ ) { c += A [ ia - 1
] * x [ ix ] ; ix ++ ; } y [ iy ] += c ; iy ++ ; iac += lda ; } } } static
real_T bj5i5xsfec ( i5yhexr3qk * obj , const real_T x [ 70 ] ) { real_T v ;
int32_T d_idx ; int32_T mFixed ; int32_T mLB ; int32_T mUB ; mLB = obj ->
sizes [ 3 ] ; mUB = obj -> sizes [ 4 ] ; mFixed = obj -> sizes [ 0 ] ; if (
obj -> probType == 2 ) { v = 0.0 ; ghldpbp353r ( obj -> sizes [ 2 ] , obj ->
bineq , obj -> maxConstrWorkspace ) ; bas4bkmcceg ( obj -> nVarOrig , obj ->
sizes [ 2 ] , obj -> Aineq , obj -> ldA , x , obj -> maxConstrWorkspace ) ;
for ( d_idx = 0 ; d_idx < obj -> sizes [ 2 ] ; d_idx ++ ) { obj ->
maxConstrWorkspace [ d_idx ] -= x [ obj -> nVarOrig + d_idx ] ; v =
muDoubleScalarMax ( v , obj -> maxConstrWorkspace [ d_idx ] ) ; } } else { v
= 0.0 ; ghldpbp353r ( obj -> sizes [ 2 ] , obj -> bineq , obj ->
maxConstrWorkspace ) ; bas4bkmcceg ( obj -> nVar , obj -> sizes [ 2 ] , obj
-> Aineq , obj -> ldA , x , obj -> maxConstrWorkspace ) ; for ( d_idx = 0 ;
d_idx < obj -> sizes [ 2 ] ; d_idx ++ ) { v = muDoubleScalarMax ( v , obj ->
maxConstrWorkspace [ d_idx ] ) ; } } if ( mLB > 0 ) { for ( d_idx = 0 ; d_idx
< mLB ; d_idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ d_idx
] - 1 ] - obj -> lb [ obj -> indexLB [ d_idx ] - 1 ] ) ; } } if ( mUB > 0 ) {
for ( mLB = 0 ; mLB < mUB ; mLB ++ ) { v = muDoubleScalarMax ( v , x [ obj ->
indexUB [ mLB ] - 1 ] - obj -> ub [ obj -> indexUB [ mLB ] - 1 ] ) ; } } if (
mFixed > 0 ) { for ( mUB = 0 ; mUB < mFixed ; mUB ++ ) { v =
muDoubleScalarMax ( v , muDoubleScalarAbs ( x [ obj -> indexFixed [ mUB ] - 1
] - obj -> ub [ obj -> indexFixed [ mUB ] - 1 ] ) ) ; } } return v ; } static
void bas4bkmccegw ( int32_T m , int32_T n , const real_T A [ 63 ] , int32_T
lda , const real_T x [ 70 ] , real_T y [ 10 ] ) { real_T c ; int32_T b_b ;
int32_T b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; if ( ( m
!= 0 ) && ( n != 0 ) ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] =
- y [ b_iy ] ; } iy = 0 ; b_iy = ( n - 1 ) * lda + 1 ; iac = 1 ; while ( ( (
lda > 0 ) && ( iac <= b_iy ) ) || ( ( lda < 0 ) && ( iac >= b_iy ) ) ) { ix =
10 ; c = 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia ++ ) { c += A [
ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ] += c ; iy ++ ; iac += lda ; } } }
static real_T bj5i5xsfecs ( i5yhexr3qk * obj , const real_T x [ 70 ] ) {
real_T v ; int32_T d_idx ; int32_T mFixed ; int32_T mLB ; int32_T mUB ; mLB =
obj -> sizes [ 3 ] ; mUB = obj -> sizes [ 4 ] ; mFixed = obj -> sizes [ 0 ] ;
if ( obj -> probType == 2 ) { v = 0.0 ; ghldpbp353r ( obj -> sizes [ 2 ] ,
obj -> bineq , obj -> maxConstrWorkspace ) ; bas4bkmccegw ( obj -> nVarOrig ,
obj -> sizes [ 2 ] , obj -> Aineq , obj -> ldA , x , obj ->
maxConstrWorkspace ) ; for ( d_idx = 0 ; d_idx < obj -> sizes [ 2 ] ; d_idx
++ ) { obj -> maxConstrWorkspace [ d_idx ] -= x [ ( obj -> nVarOrig + d_idx )
+ 10 ] ; v = muDoubleScalarMax ( v , obj -> maxConstrWorkspace [ d_idx ] ) ;
} } else { v = 0.0 ; ghldpbp353r ( obj -> sizes [ 2 ] , obj -> bineq , obj ->
maxConstrWorkspace ) ; bas4bkmccegw ( obj -> nVar , obj -> sizes [ 2 ] , obj
-> Aineq , obj -> ldA , x , obj -> maxConstrWorkspace ) ; for ( d_idx = 0 ;
d_idx < obj -> sizes [ 2 ] ; d_idx ++ ) { v = muDoubleScalarMax ( v , obj ->
maxConstrWorkspace [ d_idx ] ) ; } } if ( mLB > 0 ) { for ( d_idx = 0 ; d_idx
< mLB ; d_idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ d_idx
] + 9 ] - obj -> lb [ obj -> indexLB [ d_idx ] - 1 ] ) ; } } if ( mUB > 0 ) {
for ( mLB = 0 ; mLB < mUB ; mLB ++ ) { v = muDoubleScalarMax ( v , x [ obj ->
indexUB [ mLB ] + 9 ] - obj -> ub [ obj -> indexUB [ mLB ] - 1 ] ) ; } } if (
mFixed > 0 ) { for ( mUB = 0 ; mUB < mFixed ; mUB ++ ) { v =
muDoubleScalarMax ( v , muDoubleScalarAbs ( x [ obj -> indexFixed [ mUB ] + 9
] - obj -> ub [ obj -> indexFixed [ mUB ] - 1 ] ) ) ; } } return v ; } static
boolean_T fnhc5k4g5m ( real_T workspace [ 70 ] , real_T xCurrent [ 7 ] ,
i5yhexr3qk * workingset , p4p24nnrhp * qrmanager ) { real_T A [ 70 ] ; real_T
constrViolation_basicX ; real_T constrViolation_minnormX ; int32_T exitg1 ;
int32_T i ; int32_T jBcol ; int32_T kAcol ; int32_T mWConstr ; int32_T nVar ;
boolean_T nonDegenerateWset ; mWConstr = workingset -> nActiveConstr - 1 ;
nVar = workingset -> nVar - 1 ; nonDegenerateWset = true ; if ( workingset ->
nActiveConstr != 0 ) { for ( jBcol = 0 ; jBcol <= mWConstr ; jBcol ++ ) {
workspace [ jBcol ] = workingset -> bwset [ jBcol ] ; workspace [ jBcol + 10
] = workingset -> bwset [ jBcol ] ; } bas4bkmcce ( workingset -> nVar ,
workingset -> nActiveConstr , workingset -> ATwset , workingset -> ldA ,
xCurrent , workspace ) ; if ( workingset -> nActiveConstr >= workingset ->
nVar ) { for ( jBcol = 0 ; jBcol <= nVar ; jBcol ++ ) { kAcol = qrmanager ->
ldq * jBcol ; for ( i = 0 ; i <= mWConstr ; i ++ ) { qrmanager -> QR [ i +
kAcol ] = workingset -> ATwset [ workingset -> ldA * i + jBcol ] ; } } if (
workingset -> nActiveConstr * workingset -> nVar == 0 ) { qrmanager -> mrows
= workingset -> nActiveConstr ; qrmanager -> ncols = workingset -> nVar ;
qrmanager -> minRowCol = 0 ; } else { qrmanager -> usedPivoting = false ;
qrmanager -> mrows = workingset -> nActiveConstr ; qrmanager -> ncols =
workingset -> nVar ; for ( mWConstr = 0 ; mWConstr <= nVar ; mWConstr ++ ) {
qrmanager -> jpvt [ mWConstr ] = mWConstr + 1 ; } qrmanager -> minRowCol =
muIntScalarMin_sint32 ( workingset -> nActiveConstr , workingset -> nVar ) ;
memcpy ( & A [ 0 ] , & qrmanager -> QR [ 0 ] , 70U * sizeof ( real_T ) ) ;
mWConstr = muIntScalarMin_sint32 ( workingset -> nActiveConstr , workingset
-> nVar ) ; for ( i = 0 ; i < 7 ; i ++ ) { qrmanager -> tau [ i ] = 0.0 ; }
if ( mWConstr >= 1 ) { for ( i = 0 ; i < 7 ; i ++ ) { qrmanager -> tau [ i ]
= 0.0 ; } mcltj2doxf ( A , 1 , workingset -> nActiveConstr , workingset ->
nVar , mWConstr , qrmanager -> tau ) ; } memcpy ( & qrmanager -> QR [ 0 ] , &
A [ 0 ] , 70U * sizeof ( real_T ) ) ; } ibpfypmesd ( qrmanager , qrmanager ->
mrows ) ; memcpy ( & A [ 0 ] , & workspace [ 0 ] , 70U * sizeof ( real_T ) )
; pqwgwbjegz ( workingset -> nVar , workingset -> nActiveConstr , qrmanager
-> Q , qrmanager -> ldq , A , workspace ) ; for ( jBcol = workingset -> nVar
; jBcol > 0 ; jBcol -- ) { kAcol = ( jBcol - 1 ) * qrmanager -> ldq - 1 ; if
( workspace [ jBcol + - 1 ] != 0.0 ) { workspace [ jBcol + - 1 ] /= qrmanager
-> QR [ jBcol + kAcol ] ; for ( i = 1 ; i - 1 <= jBcol - 2 ; i ++ ) {
workspace [ i + - 1 ] -= workspace [ jBcol + - 1 ] * qrmanager -> QR [ i +
kAcol ] ; } } } for ( jBcol = workingset -> nVar ; jBcol > 0 ; jBcol -- ) {
kAcol = ( jBcol - 1 ) * qrmanager -> ldq - 1 ; if ( workspace [ jBcol + 9 ]
!= 0.0 ) { workspace [ jBcol + 9 ] /= qrmanager -> QR [ jBcol + kAcol ] ; for
( i = 1 ; i - 1 <= jBcol - 2 ; i ++ ) { workspace [ i + 9 ] -= workspace [
jBcol + 9 ] * qrmanager -> QR [ i + kAcol ] ; } } } } else { mgmlsflwcg (
qrmanager , workingset -> ATwset , workingset -> nVar , workingset ->
nActiveConstr , workingset -> ldA ) ; ibpfypmesd ( qrmanager , qrmanager ->
minRowCol ) ; deyky4gxc4 ( workingset -> nActiveConstr , qrmanager -> QR ,
qrmanager -> ldq , workspace ) ; memcpy ( & A [ 0 ] , & workspace [ 0 ] , 70U
* sizeof ( real_T ) ) ; pqwgwbjegzo ( workingset -> nVar , workingset ->
nActiveConstr , qrmanager -> Q , qrmanager -> ldq , A , workspace ) ; }
mWConstr = 0 ; do { exitg1 = 0 ; if ( mWConstr <= nVar ) { if (
muDoubleScalarIsInf ( workspace [ mWConstr ] ) || muDoubleScalarIsNaN (
workspace [ mWConstr ] ) || ( muDoubleScalarIsInf ( workspace [ mWConstr + 10
] ) || muDoubleScalarIsNaN ( workspace [ mWConstr + 10 ] ) ) ) {
nonDegenerateWset = false ; exitg1 = 1 ; } else { mWConstr ++ ; } } else { if
( nVar + 1 >= 1 ) { for ( mWConstr = 0 ; mWConstr <= nVar ; mWConstr ++ ) {
workspace [ mWConstr ] += xCurrent [ mWConstr ] ; } }
constrViolation_minnormX = bj5i5xsfec ( workingset , workspace ) ;
constrViolation_basicX = bj5i5xsfecs ( workingset , workspace ) ; if ( (
constrViolation_minnormX <= 2.2204460492503131E-16 ) || (
constrViolation_minnormX < constrViolation_basicX ) ) { for ( mWConstr = 0 ;
mWConstr <= nVar ; mWConstr ++ ) { xCurrent [ mWConstr ] = workspace [
mWConstr ] ; } } else { for ( mWConstr = 0 ; mWConstr <= nVar ; mWConstr ++ )
{ xCurrent [ mWConstr ] = workspace [ mWConstr + 10 ] ; } } exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } return nonDegenerateWset ; } static void
bas4bkmccegwc ( int32_T m , int32_T n , const real_T A [ 63 ] , int32_T lda ,
const real_T x [ 7 ] , real_T y [ 10 ] ) { real_T c ; int32_T b_b ; int32_T
b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; if ( ( m != 0 )
&& ( n != 0 ) ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = - y [
b_iy ] ; } iy = 0 ; b_iy = ( n - 1 ) * lda + 1 ; iac = 1 ; while ( ( ( lda >
0 ) && ( iac <= b_iy ) ) || ( ( lda < 0 ) && ( iac >= b_iy ) ) ) { ix = 0 ; c
= 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia ++ ) { c += A [ ia - 1
] * x [ ix ] ; ix ++ ; } y [ iy ] += c ; iy ++ ; iac += lda ; } } } static
real_T bj5i5xsfecsi ( i5yhexr3qk * obj , const real_T x [ 7 ] ) { real_T v ;
int32_T d_idx ; int32_T mFixed ; int32_T mLB ; int32_T mUB ; mLB = obj ->
sizes [ 3 ] ; mUB = obj -> sizes [ 4 ] ; mFixed = obj -> sizes [ 0 ] ; if (
obj -> probType == 2 ) { v = 0.0 ; ghldpbp353r ( obj -> sizes [ 2 ] , obj ->
bineq , obj -> maxConstrWorkspace ) ; bas4bkmccegwc ( obj -> nVarOrig , obj
-> sizes [ 2 ] , obj -> Aineq , obj -> ldA , x , obj -> maxConstrWorkspace )
; for ( d_idx = 0 ; d_idx < obj -> sizes [ 2 ] ; d_idx ++ ) { obj ->
maxConstrWorkspace [ d_idx ] -= x [ obj -> nVarOrig + d_idx ] ; v =
muDoubleScalarMax ( v , obj -> maxConstrWorkspace [ d_idx ] ) ; } } else { v
= 0.0 ; ghldpbp353r ( obj -> sizes [ 2 ] , obj -> bineq , obj ->
maxConstrWorkspace ) ; bas4bkmccegwc ( obj -> nVar , obj -> sizes [ 2 ] , obj
-> Aineq , obj -> ldA , x , obj -> maxConstrWorkspace ) ; for ( d_idx = 0 ;
d_idx < obj -> sizes [ 2 ] ; d_idx ++ ) { v = muDoubleScalarMax ( v , obj ->
maxConstrWorkspace [ d_idx ] ) ; } } if ( mLB > 0 ) { for ( d_idx = 0 ; d_idx
< mLB ; d_idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ d_idx
] - 1 ] - obj -> lb [ obj -> indexLB [ d_idx ] - 1 ] ) ; } } if ( mUB > 0 ) {
for ( mLB = 0 ; mLB < mUB ; mLB ++ ) { v = muDoubleScalarMax ( v , x [ obj ->
indexUB [ mLB ] - 1 ] - obj -> ub [ obj -> indexUB [ mLB ] - 1 ] ) ; } } if (
mFixed > 0 ) { for ( mUB = 0 ; mUB < mFixed ; mUB ++ ) { v =
muDoubleScalarMax ( v , muDoubleScalarAbs ( x [ obj -> indexFixed [ mUB ] - 1
] - obj -> ub [ obj -> indexFixed [ mUB ] - 1 ] ) ) ; } } return v ; } static
void jlmfojzqwn ( i5yhexr3qk * obj , int32_T idx_global ) { int32_T TYPE ;
int32_T totalEq ; totalEq = obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ;
if ( ( totalEq != 0 ) && ( idx_global <= totalEq ) ) { if ( ( obj ->
nActiveConstr == totalEq ) || ( idx_global == totalEq ) ) { obj -> mEqRemoved
++ ; totalEq = obj -> Wid [ idx_global - 1 ] - 1 ; obj -> isActiveConstr [ (
obj -> isActiveIdx [ obj -> Wid [ idx_global - 1 ] - 1 ] + obj -> Wlocalidx [
idx_global - 1 ] ) - 2 ] = false ; nc0aidj43f ( obj , obj -> nActiveConstr ,
idx_global ) ; obj -> nActiveConstr -- ; obj -> nWConstr [ totalEq ] -- ; }
else { obj -> mEqRemoved ++ ; TYPE = obj -> Wid [ idx_global - 1 ] - 1 ; obj
-> isActiveConstr [ ( obj -> isActiveIdx [ obj -> Wid [ idx_global - 1 ] - 1
] + obj -> Wlocalidx [ idx_global - 1 ] ) - 2 ] = false ; nc0aidj43f ( obj ,
totalEq , idx_global ) ; nc0aidj43f ( obj , obj -> nActiveConstr , totalEq )
; obj -> nActiveConstr -- ; obj -> nWConstr [ TYPE ] -- ; } } } static void
fnwzkkrnuc ( hzxbyztu40 * solution , eeqls2hdjr * memspace , i5yhexr3qk *
workingset , p4p24nnrhp * qrmanager ) { real_T tol ; int32_T i ; int32_T
idx_row ; int32_T mTotalWorkingEq ; int32_T totalRank ; boolean_T exitg1 ;
boolean_T guard1 = false ; boolean_T okWorkingSet ; solution -> state = 82 ;
qrmanager -> ldq = 7 ; memset ( & qrmanager -> QR [ 0 ] , 0 , 70U * sizeof (
real_T ) ) ; memset ( & qrmanager -> Q [ 0 ] , 0 , 49U * sizeof ( real_T ) )
; for ( i = 0 ; i < 10 ; i ++ ) { qrmanager -> jpvt [ i ] = 0 ; } qrmanager
-> mrows = 0 ; qrmanager -> ncols = 0 ; for ( i = 0 ; i < 7 ; i ++ ) {
qrmanager -> tau [ i ] = 0.0 ; } qrmanager -> minRowCol = 0 ; qrmanager ->
usedPivoting = false ; i = workingset -> nVar - 1 ; mTotalWorkingEq =
workingset -> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ] ; idx_row = 0 ;
if ( mTotalWorkingEq > 0 ) { while ( idx_row <= mTotalWorkingEq - 1 ) { for (
totalRank = 0 ; totalRank <= i ; totalRank ++ ) { qrmanager -> QR [ idx_row +
7 * totalRank ] = workingset -> ATwset [ workingset -> ldA * idx_row +
totalRank ] ; } idx_row ++ ; } idx_row = mTotalWorkingEq - workingset -> nVar
; idx_row = muIntScalarMax_sint32 ( 0 , idx_row ) ; for ( totalRank = 0 ;
totalRank <= i ; totalRank ++ ) { qrmanager -> jpvt [ totalRank ] = 0 ; }
ev24u3t34s ( qrmanager , mTotalWorkingEq , workingset -> nVar ) ; tol = 100.0
* ( real_T ) workingset -> nVar * 2.2204460492503131E-16 ; totalRank =
muIntScalarMin_sint32 ( workingset -> nVar , mTotalWorkingEq ) ; totalRank +=
( totalRank - 1 ) * qrmanager -> ldq ; while ( ( totalRank > 0 ) && (
muDoubleScalarAbs ( qrmanager -> QR [ totalRank - 1 ] ) < tol ) ) { totalRank
= ( totalRank - qrmanager -> ldq ) - 1 ; idx_row ++ ; } if ( idx_row > 0 ) {
ibpfypmesd ( qrmanager , qrmanager -> mrows ) ; totalRank = 0 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( totalRank <= idx_row - 1 ) ) { if (
muDoubleScalarAbs ( iiflb1ff2c ( mTotalWorkingEq , qrmanager -> Q , ( (
mTotalWorkingEq - totalRank ) - 1 ) * qrmanager -> ldq + 1 , workingset ->
bwset ) ) >= tol ) { idx_row = - 1 ; exitg1 = true ; } else { totalRank ++ ;
} } } if ( idx_row > 0 ) { for ( totalRank = 0 ; totalRank < mTotalWorkingEq
; totalRank ++ ) { ghldpbp353 ( i + 1 , workingset -> ATwset , workingset ->
ldA * totalRank + 1 , qrmanager -> QR , qrmanager -> ldq * totalRank + 1 ) ;
} corexhtezj ( memspace -> workspace_int , workingset -> nWConstr [ 0 ] ,
idx_row , qrmanager , workingset -> nVar , mTotalWorkingEq ) ; mgtm5nekki (
memspace -> workspace_int , idx_row , memspace -> workspace_sort , 1 ,
mTotalWorkingEq ) ; for ( i = idx_row ; i > 0 ; i -- ) { jlmfojzqwn (
workingset , memspace -> workspace_int [ i - 1 ] ) ; } } } if ( ( idx_row !=
- 1 ) && ( workingset -> nActiveConstr <= qrmanager -> ldq ) ) { bd0dpx4on5 (
workingset , qrmanager , memspace , 100.0 ) ; okWorkingSet = fnhc5k4g5m (
memspace -> workspace_double , solution -> xstar , workingset , qrmanager ) ;
guard1 = false ; if ( ! okWorkingSet ) { bd0dpx4on5 ( workingset , qrmanager
, memspace , 1000.0 ) ; okWorkingSet = fnhc5k4g5m ( memspace ->
workspace_double , solution -> xstar , workingset , qrmanager ) ; if ( !
okWorkingSet ) { solution -> state = - 7 ; } else { guard1 = true ; } } else
{ guard1 = true ; } if ( guard1 ) { if ( workingset -> nWConstr [ 0 ] +
workingset -> nWConstr [ 1 ] == workingset -> nVar ) { tol = bj5i5xsfecsi (
workingset , solution -> xstar ) ; if ( tol > 1.0E-6 ) { solution -> state =
- 2 ; } } } } else { solution -> state = - 3 ; k1j0nkbt5p ( workingset ) ; }
} static void cwrgud3rag ( i5yhexr3qk * obj ) { int32_T idx ; for ( idx = 0 ;
idx < obj -> sizes [ 0 ] ; idx ++ ) { obj -> ATwset [ ( obj -> nVar + obj ->
ldA * idx ) - 1 ] = 0.0 ; } for ( idx = 0 ; idx < obj -> sizes [ 1 ] ; idx ++
) { obj -> ATwset [ ( ( obj -> ldA * idx + obj -> nVar ) + obj -> ldA * ( obj
-> isActiveIdx [ 1 ] - 1 ) ) - 1 ] = 0.0 ; } for ( idx = 0 ; idx < obj ->
sizes [ 2 ] ; idx ++ ) { obj -> Aineq [ ( obj -> nVar + obj -> ldA * idx ) -
1 ] = - 1.0 ; } obj -> indexLB [ obj -> sizes [ 3 ] - 1 ] = obj -> nVar ; obj
-> lb [ obj -> nVar - 1 ] = obj -> SLACK0 ; for ( idx = obj -> isActiveIdx [
2 ] ; idx <= obj -> nActiveConstr ; idx ++ ) { obj -> ATwset [ ( obj -> nVar
+ obj -> ldA * ( idx - 1 ) ) - 1 ] = - 1.0 ; } if ( obj -> nWConstr [ 4 ] > 0
) { for ( idx = 0 ; idx <= obj -> sizesNormal [ 4 ] ; idx ++ ) { obj ->
isActiveConstr [ ( obj -> isActiveIdx [ 4 ] + idx ) - 1 ] = false ; } } obj
-> isActiveConstr [ obj -> isActiveIdx [ 4 ] - 2 ] = false ; } static void
pdwhtdx1va ( i5yhexr3qk * obj ) { int32_T b_idx_col ; int32_T colOffsetATw ;
int32_T colOffsetAeq ; int32_T colOffsetAineq ; int32_T offsetEq1 ; int32_T
offsetEq2 ; int32_T offsetIneq ; offsetIneq = obj -> nVarOrig + 1 ; offsetEq1
= ( obj -> nVarOrig + obj -> sizes [ 2 ] ) + 1 ; offsetEq2 = ( ( obj ->
nVarOrig + obj -> sizes [ 2 ] ) + obj -> sizes [ 1 ] ) + 1 ; for ( b_idx_col
= 0 ; b_idx_col < obj -> sizes [ 0 ] ; b_idx_col ++ ) { colOffsetATw = obj ->
ldA * b_idx_col ; for ( colOffsetAineq = obj -> nVarOrig + 1 ; colOffsetAineq
<= obj -> nVar ; colOffsetAineq ++ ) { obj -> ATwset [ ( colOffsetAineq +
colOffsetATw ) - 1 ] = 0.0 ; } } for ( colOffsetATw = - 1 ; colOffsetATw <
obj -> sizes [ 2 ] - 1 ; colOffsetATw ++ ) { colOffsetAineq = ( colOffsetATw
+ 1 ) * obj -> ldA - 1 ; colOffsetAeq = colOffsetATw + offsetIneq ; for (
b_idx_col = offsetIneq ; b_idx_col <= colOffsetAeq ; b_idx_col ++ ) { obj ->
Aineq [ b_idx_col + colOffsetAineq ] = 0.0 ; } obj -> Aineq [ ( ( offsetIneq
+ colOffsetATw ) + colOffsetAineq ) + 1 ] = - 1.0 ; for ( b_idx_col = (
colOffsetATw + offsetIneq ) + 2 ; b_idx_col <= obj -> nVar ; b_idx_col ++ ) {
obj -> Aineq [ b_idx_col + colOffsetAineq ] = 0.0 ; } } for ( colOffsetAineq
= 0 ; colOffsetAineq < obj -> sizes [ 1 ] ; colOffsetAineq ++ ) {
colOffsetATw = ( ( obj -> isActiveIdx [ 1 ] - 1 ) * obj -> ldA + obj -> ldA *
colOffsetAineq ) - 1 ; for ( b_idx_col = offsetIneq ; b_idx_col < offsetEq1 ;
b_idx_col ++ ) { obj -> ATwset [ b_idx_col + colOffsetATw ] = 0.0 ; }
b_idx_col = ( offsetEq1 + colOffsetAineq ) - 1 ; for ( colOffsetAeq =
offsetEq1 ; colOffsetAeq <= b_idx_col ; colOffsetAeq ++ ) { obj -> ATwset [
colOffsetAeq + colOffsetATw ] = 0.0 ; } obj -> ATwset [ ( offsetEq1 +
colOffsetAineq ) + colOffsetATw ] = - 1.0 ; for ( b_idx_col = ( offsetEq1 +
colOffsetAineq ) + 1 ; b_idx_col < offsetEq2 ; b_idx_col ++ ) { obj -> ATwset
[ b_idx_col + colOffsetATw ] = 0.0 ; } b_idx_col = ( offsetEq2 +
colOffsetAineq ) - 1 ; for ( colOffsetAeq = offsetEq2 ; colOffsetAeq <=
b_idx_col ; colOffsetAeq ++ ) { obj -> ATwset [ colOffsetAeq + colOffsetATw ]
= 0.0 ; } obj -> ATwset [ ( offsetEq2 + colOffsetAineq ) + colOffsetATw ] =
1.0 ; for ( b_idx_col = ( offsetEq2 + colOffsetAineq ) + 1 ; b_idx_col <= obj
-> nVar ; b_idx_col ++ ) { obj -> ATwset [ b_idx_col + colOffsetATw ] = 0.0 ;
} } offsetEq1 = obj -> nVarOrig ; for ( offsetEq2 = obj -> sizesNormal [ 3 ]
; offsetEq2 < obj -> sizesRegularized [ 3 ] ; offsetEq2 ++ ) { offsetEq1 ++ ;
obj -> indexLB [ offsetEq2 ] = offsetEq1 ; } if ( obj -> nWConstr [ 4 ] > 0 )
{ for ( offsetEq1 = - 1 ; offsetEq1 < obj -> sizesRegularized [ 4 ] - 1 ;
offsetEq1 ++ ) { obj -> isActiveConstr [ ( obj -> isActiveIdxRegularized [ 4
] + offsetEq1 ) + 1 ] = obj -> isActiveConstr [ obj -> isActiveIdx [ 4 ] +
offsetEq1 ] ; } } for ( offsetEq1 = obj -> isActiveIdx [ 4 ] ; offsetEq1 <
obj -> isActiveIdxRegularized [ 4 ] ; offsetEq1 ++ ) { obj -> isActiveConstr
[ offsetEq1 - 1 ] = false ; } offsetEq1 = ( obj -> nVarOrig + obj -> sizes [
2 ] ) + ( obj -> sizes [ 1 ] << 1 ) ; for ( offsetEq2 = obj -> nVarOrig ;
offsetEq2 < offsetEq1 ; offsetEq2 ++ ) { obj -> lb [ offsetEq2 ] = 0.0 ; }
for ( offsetEq1 = obj -> isActiveIdx [ 2 ] - 1 ; offsetEq1 < obj ->
nActiveConstr ; offsetEq1 ++ ) { colOffsetATw = obj -> ldA * offsetEq1 - 1 ;
if ( obj -> Wid [ offsetEq1 ] == 3 ) { offsetEq2 = offsetIneq + obj ->
Wlocalidx [ offsetEq1 ] ; for ( b_idx_col = offsetIneq ; b_idx_col <=
offsetEq2 - 2 ; b_idx_col ++ ) { obj -> ATwset [ b_idx_col + colOffsetATw ] =
0.0 ; } obj -> ATwset [ ( ( offsetIneq + obj -> Wlocalidx [ offsetEq1 ] ) +
colOffsetATw ) - 1 ] = - 1.0 ; for ( offsetEq2 = offsetIneq + obj ->
Wlocalidx [ offsetEq1 ] ; offsetEq2 <= obj -> nVar ; offsetEq2 ++ ) { obj ->
ATwset [ offsetEq2 + colOffsetATw ] = 0.0 ; } } else { for ( offsetEq2 =
offsetIneq ; offsetEq2 <= obj -> nVar ; offsetEq2 ++ ) { obj -> ATwset [
offsetEq2 + colOffsetATw ] = 0.0 ; } } } } static void bx32ivnacs (
i5yhexr3qk * obj , int32_T PROBLEM_TYPE ) { int32_T b_idx ; switch (
PROBLEM_TYPE ) { case 3 : obj -> nVar = obj -> nVarOrig ; obj -> mConstr =
obj -> mConstrOrig ; if ( obj -> nWConstr [ 4 ] > 0 ) { for ( b_idx = - 1 ;
b_idx < obj -> sizesNormal [ 4 ] - 1 ; b_idx ++ ) { obj -> isActiveConstr [
obj -> isActiveIdxNormal [ 4 ] + b_idx ] = obj -> isActiveConstr [ obj ->
isActiveIdx [ 4 ] + b_idx ] ; } } for ( b_idx = 0 ; b_idx < 5 ; b_idx ++ ) {
obj -> sizes [ b_idx ] = obj -> sizesNormal [ b_idx ] ; } for ( b_idx = 0 ;
b_idx < 6 ; b_idx ++ ) { obj -> isActiveIdx [ b_idx ] = obj ->
isActiveIdxNormal [ b_idx ] ; } break ; case 1 : obj -> nVar = obj ->
nVarOrig + 1 ; obj -> mConstr = obj -> mConstrOrig + 1 ; for ( b_idx = 0 ;
b_idx < 5 ; b_idx ++ ) { obj -> sizes [ b_idx ] = obj -> sizesPhaseOne [
b_idx ] ; } for ( b_idx = 0 ; b_idx < 6 ; b_idx ++ ) { obj -> isActiveIdx [
b_idx ] = obj -> isActiveIdxPhaseOne [ b_idx ] ; } cwrgud3rag ( obj ) ; break
; case 2 : obj -> nVar = obj -> nVarMax - 1 ; obj -> mConstr = obj ->
mConstrMax - 1 ; for ( b_idx = 0 ; b_idx < 5 ; b_idx ++ ) { obj -> sizes [
b_idx ] = obj -> sizesRegularized [ b_idx ] ; } if ( obj -> probType != 4 ) {
pdwhtdx1va ( obj ) ; } for ( b_idx = 0 ; b_idx < 6 ; b_idx ++ ) { obj ->
isActiveIdx [ b_idx ] = obj -> isActiveIdxRegularized [ b_idx ] ; } break ;
default : obj -> nVar = obj -> nVarMax ; obj -> mConstr = obj -> mConstrMax ;
for ( b_idx = 0 ; b_idx < 5 ; b_idx ++ ) { obj -> sizes [ b_idx ] = obj ->
sizesRegPhaseOne [ b_idx ] ; } for ( b_idx = 0 ; b_idx < 6 ; b_idx ++ ) { obj
-> isActiveIdx [ b_idx ] = obj -> isActiveIdxRegPhaseOne [ b_idx ] ; }
cwrgud3rag ( obj ) ; break ; } obj -> probType = PROBLEM_TYPE ; } static void
oeng3ezgi4 ( boolean_T obj_hasLinear , int32_T obj_nvar , real_T workspace [
70 ] , const real_T f [ 6 ] , const real_T x [ 7 ] ) { real_T c ; int32_T b ;
int32_T b_b ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; static
const int8_T d [ 36 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0
, 0 , 0 , 1 } ; ix = 0 ; if ( obj_hasLinear ) { while ( ix <= obj_nvar - 1 )
{ workspace [ ix ] = f [ ix ] ; ix ++ ; } ix = 1 ; } if ( obj_nvar != 0 ) {
if ( ix != 1 ) { while ( ix <= obj_nvar - 1 ) { workspace [ ix ] = 0.0 ; ix
++ ; } } ix = 0 ; b = ( obj_nvar - 1 ) * obj_nvar + 1 ; iac = 1 ; while ( ( (
obj_nvar > 0 ) && ( iac <= b ) ) || ( ( obj_nvar < 0 ) && ( iac >= b ) ) ) {
c = 0.5 * x [ ix ] ; iy = 0 ; b_b = iac + obj_nvar ; for ( ia = iac ; ia <
b_b ; ia ++ ) { workspace [ iy ] += ( real_T ) d [ ia - 1 ] * c ; iy ++ ; }
ix ++ ; iac += obj_nvar ; } } } static real_T iiflb1ff2c0 ( int32_T n , const
real_T x [ 7 ] , const real_T y [ 70 ] ) { real_T d ; int32_T k ; d = 0.0 ;
if ( n >= 1 ) { for ( k = 0 ; k < n ; k ++ ) { d += x [ k ] * y [ k ] ; } }
return d ; } static real_T l4otuy5m0u ( const nvpjvsx3xp * obj , real_T
workspace [ 70 ] , const real_T f [ 6 ] , const real_T x [ 7 ] ) { real_T val
; int32_T idx ; val = 0.0 ; switch ( obj -> objtype ) { case 5 : val = x [
obj -> nvar - 1 ] * obj -> gammaScalar ; break ; case 3 : oeng3ezgi4 ( obj ->
hasLinear , obj -> nvar , workspace , f , x ) ; val = iiflb1ff2c0 ( obj ->
nvar , x , workspace ) ; break ; case 4 : oeng3ezgi4 ( obj -> hasLinear , obj
-> nvar , workspace , f , x ) ; for ( idx = obj -> nvar ; idx < obj -> maxVar
- 1 ; idx ++ ) { workspace [ idx ] = 0.5 * obj -> beta * x [ idx ] + obj ->
rho ; } val = iiflb1ff2c0 ( obj -> maxVar - 1 , x , workspace ) ; break ; }
return val ; } static void bas4bkmccegwch ( int32_T m , int32_T n , int32_T
lda , const real_T x [ 7 ] , real_T y [ 6 ] ) { int32_T b ; int32_T b_b ;
int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; static const int8_T c [
36 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } ;
if ( ( m != 0 ) && ( n != 0 ) ) { for ( ix = 0 ; ix < m ; ix ++ ) { y [ ix ]
= 0.0 ; } ix = 0 ; b = ( n - 1 ) * lda + 1 ; iac = 1 ; while ( ( ( lda > 0 )
&& ( iac <= b ) ) || ( ( lda < 0 ) && ( iac >= b ) ) ) { iy = 0 ; b_b = iac +
m ; for ( ia = iac ; ia < b_b ; ia ++ ) { y [ iy ] += ( real_T ) c [ ia - 1 ]
* x [ ix ] ; iy ++ ; } ix ++ ; iac += lda ; } } } static void bnfiaksbhk (
int32_T n , real_T a , const real_T x [ 6 ] , real_T y [ 7 ] ) { int32_T k ;
if ( ( n >= 1 ) && ( ! ( a == 0.0 ) ) ) { for ( k = 0 ; k < n ; k ++ ) { y [
k ] += a * x [ k ] ; } } } static void eoqr34sblq ( nvpjvsx3xp * obj , const
real_T f [ 6 ] , const real_T x [ 7 ] ) { int32_T b_i ; int32_T d_i ; int32_T
maxRegVar ; switch ( obj -> objtype ) { case 5 : for ( b_i = 0 ; b_i <= obj
-> nvar - 2 ; b_i ++ ) { obj -> grad [ b_i ] = 0.0 ; } obj -> grad [ obj ->
nvar - 1 ] = obj -> gammaScalar ; break ; case 3 : bas4bkmccegwch ( obj ->
nvar , obj -> nvar , obj -> nvar , x , obj -> Hx ) ; for ( maxRegVar = 0 ;
maxRegVar < obj -> nvar ; maxRegVar ++ ) { obj -> grad [ maxRegVar ] = obj ->
Hx [ maxRegVar ] ; } if ( obj -> hasLinear ) { bnfiaksbhk ( obj -> nvar , 1.0
, f , obj -> grad ) ; } break ; case 4 : maxRegVar = obj -> maxVar - 1 ;
bas4bkmccegwch ( obj -> nvar , obj -> nvar , obj -> nvar , x , obj -> Hx ) ;
for ( b_i = obj -> nvar ; b_i < maxRegVar ; b_i ++ ) { obj -> Hx [ b_i ] =
obj -> beta * x [ b_i ] ; } for ( d_i = 0 ; d_i < maxRegVar ; d_i ++ ) { obj
-> grad [ d_i ] = obj -> Hx [ d_i ] ; } if ( obj -> hasLinear ) { bnfiaksbhk
( obj -> nvar , 1.0 , f , obj -> grad ) ; } b_i = ( obj -> maxVar - obj ->
nvar ) - 1 ; if ( b_i >= 1 ) { maxRegVar = obj -> nvar ; for ( d_i = 0 ; d_i
< b_i ; d_i ++ ) { obj -> grad [ maxRegVar ] += obj -> rho ; maxRegVar ++ ; }
} break ; } } static real_T iiflb1ff2c0s ( int32_T n , const real_T x [ 7 ] ,
const real_T y [ 6 ] ) { real_T d ; int32_T k ; d = 0.0 ; if ( n >= 1 ) { for
( k = 0 ; k < n ; k ++ ) { d += x [ k ] * y [ k ] ; } } return d ; } static
real_T aqbrn5c3pb ( const nvpjvsx3xp * obj , real_T workspace [ 70 ] , const
real_T f [ 6 ] , const real_T x [ 7 ] ) { real_T val ; int32_T c_i ; int32_T
i ; int32_T maxRegVar ; val = 0.0 ; switch ( obj -> objtype ) { case 5 : val
= x [ obj -> nvar - 1 ] * obj -> gammaScalar ; break ; case 3 : if ( obj ->
hasLinear ) { for ( maxRegVar = 0 ; maxRegVar < obj -> nvar ; maxRegVar ++ )
{ workspace [ maxRegVar ] = 0.5 * obj -> Hx [ maxRegVar ] + f [ maxRegVar ] ;
} val = iiflb1ff2c0 ( obj -> nvar , x , workspace ) ; } else { val = 0.5 *
iiflb1ff2c0s ( obj -> nvar , x , obj -> Hx ) ; } break ; case 4 : maxRegVar =
obj -> maxVar - 1 ; if ( obj -> hasLinear ) { for ( c_i = 0 ; c_i < obj ->
nvar ; c_i ++ ) { workspace [ c_i ] = f [ c_i ] ; } i = ( obj -> maxVar - obj
-> nvar ) - 2 ; for ( c_i = 0 ; c_i <= i ; c_i ++ ) { workspace [ obj -> nvar
+ c_i ] = obj -> rho ; } for ( c_i = 0 ; c_i < maxRegVar ; c_i ++ ) {
workspace [ c_i ] += 0.5 * obj -> Hx [ c_i ] ; } val = iiflb1ff2c0 ( obj ->
maxVar - 1 , x , workspace ) ; } else { val = iiflb1ff2c0s ( obj -> maxVar -
1 , x , obj -> Hx ) * 0.5 ; for ( i = obj -> nvar ; i < maxRegVar ; i ++ ) {
val += x [ i ] * obj -> rho ; } } break ; } return val ; } static void
ghldpbp353rw ( int32_T n , real_T x , real_T y [ 10 ] ) { int32_T k ; for ( k
= 0 ; k < n ; k ++ ) { y [ k ] = x ; } } static void izz4gtj0d5 ( real_T * a
, real_T * b , real_T * c , real_T * s ) { real_T absa ; real_T absb ; real_T
ads ; real_T bds ; real_T roe ; real_T scale ; roe = * b ; absa =
muDoubleScalarAbs ( * a ) ; absb = muDoubleScalarAbs ( * b ) ; if ( absa >
absb ) { roe = * a ; } scale = absa + absb ; if ( scale == 0.0 ) { * s = 0.0
; * c = 1.0 ; * a = 0.0 ; * b = 0.0 ; } else { ads = absa / scale ; bds =
absb / scale ; scale *= muDoubleScalarSqrt ( ads * ads + bds * bds ) ; if (
roe < 0.0 ) { scale = - scale ; } * c = * a / scale ; * s = * b / scale ; if
( absa > absb ) { * b = * s ; } else if ( * c != 0.0 ) { * b = 1.0 / * c ; }
else { * b = 1.0 ; } * a = scale ; } } static void c3mvw0ni0h ( p4p24nnrhp *
obj , const real_T vec [ 70 ] , int32_T iv0 ) { real_T b_c ; real_T s ;
real_T temp ; int32_T b_ix ; int32_T b_iy ; int32_T c_b ; int32_T c_iy ;
int32_T ia ; int32_T idx ; int32_T iyend ; b_iy = obj -> ncols + 1 ; obj ->
minRowCol = muIntScalarMin_sint32 ( obj -> mrows , b_iy ) ; b_iy = obj -> ldq
* obj -> ncols ; idx = obj -> ldq ; if ( obj -> mrows != 0 ) { iyend = b_iy +
obj -> mrows ; for ( c_iy = b_iy + 1 ; c_iy <= iyend ; c_iy ++ ) { obj -> QR
[ c_iy - 1 ] = 0.0 ; } iyend = ( obj -> mrows - 1 ) * obj -> ldq + 1 ; c_iy =
1 ; while ( ( ( idx > 0 ) && ( c_iy <= iyend ) ) || ( ( idx < 0 ) && ( c_iy
>= iyend ) ) ) { b_ix = iv0 ; b_c = 0.0 ; c_b = c_iy + obj -> mrows ; for (
ia = c_iy ; ia < c_b ; ia ++ ) { b_c += obj -> Q [ ia - 1 ] * vec [ b_ix - 1
] ; b_ix ++ ; } obj -> QR [ b_iy ] += b_c ; b_iy ++ ; c_iy += idx ; } } obj
-> ncols ++ ; obj -> jpvt [ obj -> ncols - 1 ] = obj -> ncols ; for ( idx =
obj -> mrows - 2 ; idx + 2 > obj -> ncols ; idx -- ) { b_iy = ( obj -> ncols
- 1 ) * obj -> ldq ; temp = obj -> QR [ ( idx + b_iy ) + 1 ] ; izz4gtj0d5 ( &
obj -> QR [ idx + b_iy ] , & temp , & b_c , & s ) ; obj -> QR [ ( idx + b_iy
) + 1 ] = temp ; iyend = obj -> ldq * idx ; if ( obj -> mrows >= 1 ) { b_iy =
iyend ; iyend += obj -> ldq ; for ( c_iy = 0 ; c_iy < obj -> mrows ; c_iy ++
) { temp = b_c * obj -> Q [ b_iy ] + s * obj -> Q [ iyend ] ; obj -> Q [
iyend ] = b_c * obj -> Q [ iyend ] - s * obj -> Q [ b_iy ] ; obj -> Q [ b_iy
] = temp ; iyend ++ ; b_iy ++ ; } } } } static void horw5uuiys ( p4p24nnrhp *
obj , int32_T idx ) { real_T b_s ; real_T c_c ; real_T c_temp ; int32_T QRk0
; int32_T c_ix ; int32_T d_k ; int32_T i ; int32_T idxRotGCol ; int32_T ix ;
int32_T k ; if ( obj -> usedPivoting ) { i = 1 ; while ( ( i <= obj -> ncols
) && ( obj -> jpvt [ i - 1 ] != idx ) ) { i ++ ; } idx = i ; } if ( idx >=
obj -> ncols ) { obj -> ncols -- ; } else { obj -> jpvt [ idx - 1 ] = obj ->
jpvt [ obj -> ncols - 1 ] ; for ( i = 0 ; i < obj -> minRowCol ; i ++ ) { obj
-> QR [ i + obj -> ldq * ( idx - 1 ) ] = obj -> QR [ ( obj -> ncols - 1 ) *
obj -> ldq + i ] ; } obj -> ncols -- ; obj -> minRowCol =
muIntScalarMin_sint32 ( obj -> mrows , obj -> ncols ) ; if ( idx < obj ->
mrows ) { i = obj -> mrows - 1 ; i = muIntScalarMin_sint32 ( i , obj -> ncols
) ; k = i ; idxRotGCol = ( idx - 1 ) * obj -> ldq ; while ( k >= idx ) {
c_temp = obj -> QR [ k + idxRotGCol ] ; izz4gtj0d5 ( & obj -> QR [ ( k +
idxRotGCol ) - 1 ] , & c_temp , & c_c , & b_s ) ; obj -> QR [ k + idxRotGCol
] = c_temp ; obj -> QR [ k + obj -> ldq * ( k - 1 ) ] = 0.0 ; QRk0 = obj ->
ldq * idx + k ; c_ix = obj -> ncols - idx ; if ( c_ix >= 1 ) { ix = QRk0 - 1
; for ( d_k = 0 ; d_k < c_ix ; d_k ++ ) { c_temp = c_c * obj -> QR [ ix ] +
b_s * obj -> QR [ QRk0 ] ; obj -> QR [ QRk0 ] = c_c * obj -> QR [ QRk0 ] -
b_s * obj -> QR [ ix ] ; obj -> QR [ ix ] = c_temp ; QRk0 += obj -> ldq ; ix
+= obj -> ldq ; } } QRk0 = ( k - 1 ) * obj -> ldq ; if ( obj -> mrows >= 1 )
{ c_ix = QRk0 ; QRk0 += obj -> ldq ; for ( ix = 0 ; ix < obj -> mrows ; ix ++
) { c_temp = c_c * obj -> Q [ c_ix ] + b_s * obj -> Q [ QRk0 ] ; obj -> Q [
QRk0 ] = c_c * obj -> Q [ QRk0 ] - b_s * obj -> Q [ c_ix ] ; obj -> Q [ c_ix
] = c_temp ; QRk0 ++ ; c_ix ++ ; } } k -- ; } for ( k = idx + 1 ; k <= i ; k
++ ) { idxRotGCol = ( k - 1 ) * obj -> ldq ; c_temp = obj -> QR [ k +
idxRotGCol ] ; izz4gtj0d5 ( & obj -> QR [ ( k + idxRotGCol ) - 1 ] , & c_temp
, & c_c , & b_s ) ; obj -> QR [ k + idxRotGCol ] = c_temp ; QRk0 = ( obj ->
ldq + 1 ) * k ; idxRotGCol = obj -> ncols - k ; if ( idxRotGCol >= 1 ) { c_ix
= QRk0 - 1 ; for ( ix = 0 ; ix < idxRotGCol ; ix ++ ) { c_temp = c_c * obj ->
QR [ c_ix ] + b_s * obj -> QR [ QRk0 ] ; obj -> QR [ QRk0 ] = c_c * obj -> QR
[ QRk0 ] - b_s * obj -> QR [ c_ix ] ; obj -> QR [ c_ix ] = c_temp ; QRk0 +=
obj -> ldq ; c_ix += obj -> ldq ; } } QRk0 = ( k - 1 ) * obj -> ldq ; if (
obj -> mrows >= 1 ) { idxRotGCol = QRk0 ; QRk0 += obj -> ldq ; for ( c_ix = 0
; c_ix < obj -> mrows ; c_ix ++ ) { c_temp = c_c * obj -> Q [ idxRotGCol ] +
b_s * obj -> Q [ QRk0 ] ; obj -> Q [ QRk0 ] = c_c * obj -> Q [ QRk0 ] - b_s *
obj -> Q [ idxRotGCol ] ; obj -> Q [ idxRotGCol ] = c_temp ; QRk0 ++ ;
idxRotGCol ++ ; } } } } } } static void ahooultswj ( ljxdlfkika * cholmanager
, const p4p24nnrhp * qrmanager , eeqls2hdjr * memspace ) { real_T b_temp ;
int32_T ar ; int32_T b_b ; int32_T b_ic ; int32_T br ; int32_T c_b ; int32_T
cr ; int32_T ia ; int32_T ib ; int32_T lastColC ; int32_T ldQ ; int32_T ldc ;
int32_T mNull ; int32_T nVars ; int32_T nullStart ; static const int8_T c [
36 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } ;
nVars = qrmanager -> mrows - 1 ; mNull = qrmanager -> mrows - qrmanager ->
ncols ; ldc = cholmanager -> ldm ; ldQ = qrmanager -> ldq ; nullStart =
qrmanager -> ldq * qrmanager -> ncols - 1 ; if ( ( qrmanager -> mrows != 0 )
&& ( mNull != 0 ) ) { br = nullStart + 2 ; lastColC = ( mNull - 1 ) * 10 ;
for ( cr = 1 ; cr - 1 <= lastColC ; cr += 10 ) { ar = cr + nVars ; for ( b_b
= cr ; b_b <= ar ; b_b ++ ) { memspace -> workspace_double [ b_b - 1 ] = 0.0
; } } for ( cr = 0 ; cr <= lastColC ; cr += 10 ) { ar = - 1 ; b_b = br +
nVars ; for ( ib = br ; ib <= b_b ; ib ++ ) { ia = ar ; c_b = cr + nVars ;
for ( b_ic = cr ; b_ic < c_b + 1 ; b_ic ++ ) { ia ++ ; memspace ->
workspace_double [ b_ic ] += qrmanager -> Q [ ib - 1 ] * ( real_T ) c [ ia ]
; } ar = ( ar + nVars ) + 1 ; } br += ldQ ; } } if ( mNull != 0 ) { br = - 1
; lastColC = ( mNull - 1 ) * cholmanager -> ldm ; cr = 0 ; while ( ( ( ldc >
0 ) && ( cr <= lastColC ) ) || ( ( ldc < 0 ) && ( cr >= lastColC ) ) ) { ar =
cr + mNull ; for ( b_b = cr ; b_b < ar ; b_b ++ ) { cholmanager -> FMat [ b_b
] = 0.0 ; } cr += ldc ; } cr = 0 ; while ( ( ( ldc > 0 ) && ( cr <= lastColC
) ) || ( ( ldc < 0 ) && ( cr >= lastColC ) ) ) { ar = nullStart ; b_b = cr +
mNull ; for ( ib = cr ; ib < b_b ; ib ++ ) { b_temp = 0.0 ; for ( ia = 1 ; ia
- 1 <= nVars ; ia ++ ) { b_temp += qrmanager -> Q [ ia + ar ] * memspace ->
workspace_double [ ia + br ] ; } cholmanager -> FMat [ ib ] += b_temp ; ar +=
ldQ ; } br += 10 ; cr += ldc ; } } } static int32_T gopoj1vvcq ( int32_T n ,
const real_T x [ 49 ] , int32_T incx ) { real_T s ; real_T smax ; int32_T
idxmax ; int32_T ix ; int32_T k ; if ( ( n < 1 ) || ( incx < 1 ) ) { idxmax =
0 ; } else { idxmax = 1 ; if ( n > 1 ) { ix = 0 ; smax = muDoubleScalarAbs (
x [ 0 ] ) ; for ( k = 2 ; k <= n ; k ++ ) { ix += incx ; s =
muDoubleScalarAbs ( x [ ix ] ) ; if ( s > smax ) { idxmax = k ; smax = s ; }
} } } return idxmax ; } static void psztjsmta1 ( ljxdlfkika * obj , int32_T
LD_offset , int32_T NColsRemain , real_T REG_PRIMAL ) { real_T alpha1 ;
real_T temp ; int32_T LD_diagOffset ; int32_T LDimSizeP1 ; int32_T b ;
int32_T ijA ; int32_T ix ; int32_T j ; int32_T jA ; int32_T jy ; int32_T k ;
int32_T subMatrixDim ; LDimSizeP1 = obj -> ldm + 1 ; for ( k = 0 ; k <
NColsRemain ; k ++ ) { LD_diagOffset = ( LDimSizeP1 * k + LD_offset ) - 1 ;
if ( muDoubleScalarAbs ( obj -> FMat [ LD_diagOffset ] ) <= obj -> regTol_ )
{ obj -> FMat [ LD_diagOffset ] += REG_PRIMAL ; } alpha1 = - 1.0 / obj ->
FMat [ LD_diagOffset ] ; subMatrixDim = ( NColsRemain - k ) - 2 ; for ( jA =
0 ; jA <= subMatrixDim ; jA ++ ) { obj -> workspace_ [ jA ] = obj -> FMat [ (
LD_diagOffset + jA ) + 1 ] ; } if ( ! ( alpha1 == 0.0 ) ) { jA =
LD_diagOffset + LDimSizeP1 ; jy = 0 ; for ( j = 0 ; j <= subMatrixDim ; j ++
) { if ( obj -> workspace_ [ jy ] != 0.0 ) { temp = obj -> workspace_ [ jy ]
* alpha1 ; ix = 0 ; b = subMatrixDim + jA ; for ( ijA = jA ; ijA < b + 1 ;
ijA ++ ) { obj -> FMat [ ijA ] += obj -> workspace_ [ ix ] * temp ; ix ++ ; }
} jy ++ ; jA += obj -> ldm ; } } for ( jA = 1 ; jA - 1 <= subMatrixDim ; jA
++ ) { obj -> FMat [ LD_diagOffset + jA ] /= obj -> FMat [ LD_diagOffset ] ;
} } LDimSizeP1 = ( ( obj -> ldm + 1 ) * ( NColsRemain - 1 ) + LD_offset ) - 1
; if ( muDoubleScalarAbs ( obj -> FMat [ LDimSizeP1 ] ) <= obj -> regTol_ ) {
obj -> FMat [ LDimSizeP1 ] += REG_PRIMAL ; } } static void ilb425bbdwf (
const ljxdlfkika * obj , real_T rhs [ 70 ] ) { real_T temp ; int32_T b ;
int32_T i ; int32_T ix ; int32_T jA ; int32_T jjA ; int32_T n ; n = obj ->
ndims ; if ( obj -> ndims != 0 ) { for ( jA = 0 ; jA < n ; jA ++ ) { jjA = jA
* obj -> ldm + jA ; b = ( n - jA ) - 2 ; for ( i = 1 ; i - 1 <= b ; i ++ ) {
ix = jA + i ; rhs [ ix ] -= obj -> FMat [ jjA + i ] * rhs [ jA ] ; } } } for
( n = 0 ; n < obj -> ndims ; n ++ ) { rhs [ n ] /= obj -> FMat [ obj -> ldm *
n + n ] ; } if ( obj -> ndims != 0 ) { for ( n = obj -> ndims - 1 ; n + 1 > 0
; n -- ) { jA = n * obj -> ldm ; temp = rhs [ n ] ; for ( jjA = obj -> ndims
; jjA >= n + 2 ; jjA -- ) { temp -= obj -> FMat [ ( jA + jjA ) - 1 ] * rhs [
jjA - 1 ] ; } rhs [ n ] = temp ; } } } static void bas4bkmccegwchb ( int32_T
m , int32_T n , const real_T A [ 49 ] , int32_T ia0 , int32_T lda , const
real_T x [ 70 ] , real_T y [ 7 ] ) { int32_T b ; int32_T b_b ; int32_T ia ;
int32_T iac ; int32_T ix ; int32_T iy ; if ( ( m != 0 ) && ( n != 0 ) ) { for
( ix = 0 ; ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; b = ( n - 1 ) * lda
+ ia0 ; iac = ia0 ; while ( ( ( lda > 0 ) && ( iac <= b ) ) || ( ( lda < 0 )
&& ( iac >= b ) ) ) { iy = 0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia
++ ) { y [ iy ] += A [ ia - 1 ] * x [ ix ] ; iy ++ ; } ix ++ ; iac += lda ; }
} } static void ilb425bbdw ( const ljxdlfkika * obj , real_T rhs [ 7 ] ) {
real_T temp ; int32_T b ; int32_T i ; int32_T ix ; int32_T jA ; int32_T jjA ;
int32_T n ; n = obj -> ndims ; if ( obj -> ndims != 0 ) { for ( jA = 0 ; jA <
n ; jA ++ ) { jjA = jA * obj -> ldm + jA ; b = ( n - jA ) - 2 ; for ( i = 1 ;
i - 1 <= b ; i ++ ) { ix = jA + i ; rhs [ ix ] -= obj -> FMat [ jjA + i ] *
rhs [ jA ] ; } } } for ( n = 0 ; n < obj -> ndims ; n ++ ) { rhs [ n ] /= obj
-> FMat [ obj -> ldm * n + n ] ; } if ( obj -> ndims != 0 ) { for ( n = obj
-> ndims - 1 ; n + 1 > 0 ; n -- ) { jA = n * obj -> ldm ; temp = rhs [ n ] ;
for ( jjA = obj -> ndims ; jjA >= n + 2 ; jjA -- ) { temp -= obj -> FMat [ (
jA + jjA ) - 1 ] * rhs [ jjA - 1 ] ; } rhs [ n ] = temp ; } } } static void
cwpdjwttol ( hzxbyztu40 * solution , eeqls2hdjr * memspace , const p4p24nnrhp
* qrmanager , ljxdlfkika * cholmanager , const nvpjvsx3xp * objective ) {
real_T b_SCALED_REG_PRIMAL ; int32_T b ; int32_T b_A_maxDiag_idx ; int32_T
b_b ; int32_T b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T mNull ;
int32_T nVar ; int32_T nullStartIdx ; static const int8_T d [ 36 ] = { 1 , 0
, 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } ; int32_T exitg1
; nVar = qrmanager -> mrows - 1 ; mNull = qrmanager -> mrows - qrmanager ->
ncols ; if ( mNull <= 0 ) { for ( mNull = 0 ; mNull <= nVar ; mNull ++ ) {
solution -> searchDir [ mNull ] = 0.0 ; } } else { for ( nullStartIdx = 0 ;
nullStartIdx <= nVar ; nullStartIdx ++ ) { solution -> searchDir [
nullStartIdx ] = - objective -> grad [ nullStartIdx ] ; } if ( qrmanager ->
ncols <= 0 ) { if ( objective -> objtype == 3 ) { b_SCALED_REG_PRIMAL =
1.4901161193847656E-8 * cholmanager -> scaleFactor * ( real_T ) qrmanager ->
mrows ; cholmanager -> ndims = qrmanager -> mrows ; for ( mNull = 0 ; mNull
<= nVar ; mNull ++ ) { nullStartIdx = ( nVar + 1 ) * mNull ; b_A_maxDiag_idx
= cholmanager -> ldm * mNull ; for ( b_iy = 1 ; b_iy - 1 <= nVar ; b_iy ++ )
{ cholmanager -> FMat [ ( b_A_maxDiag_idx + b_iy ) - 1 ] = d [ ( nullStartIdx
+ b_iy ) - 1 ] ; } } mNull = gopoj1vvcq ( qrmanager -> mrows , cholmanager ->
FMat , cholmanager -> ldm + 1 ) - 1 ; cholmanager -> regTol_ =
muDoubleScalarMax ( muDoubleScalarAbs ( cholmanager -> FMat [ cholmanager ->
ldm * mNull + mNull ] ) * 2.2204460492503131E-16 , muDoubleScalarAbs (
b_SCALED_REG_PRIMAL ) ) ; psztjsmta1 ( cholmanager , 1 , qrmanager -> mrows ,
b_SCALED_REG_PRIMAL ) ; if ( cholmanager -> ConvexCheck ) { mNull = 0 ; do {
exitg1 = 0 ; if ( mNull <= nVar ) { if ( cholmanager -> FMat [ cholmanager ->
ldm * mNull + mNull ] <= 0.0 ) { cholmanager -> info = - mNull - 1 ; exitg1 =
1 ; } else { mNull ++ ; } } else { cholmanager -> ConvexCheck = false ;
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( cholmanager -> info != 0 ) {
solution -> state = - 6 ; } else { ilb425bbdw ( cholmanager , solution ->
searchDir ) ; } } } else { nullStartIdx = qrmanager -> ldq * qrmanager ->
ncols + 1 ; if ( objective -> objtype == 5 ) { for ( b_A_maxDiag_idx = 0 ;
b_A_maxDiag_idx < mNull ; b_A_maxDiag_idx ++ ) { memspace -> workspace_double
[ b_A_maxDiag_idx ] = - qrmanager -> Q [ ( qrmanager -> ncols +
b_A_maxDiag_idx ) * qrmanager -> ldq + nVar ] ; } bas4bkmccegwchb ( qrmanager
-> mrows , mNull , qrmanager -> Q , nullStartIdx , qrmanager -> ldq ,
memspace -> workspace_double , solution -> searchDir ) ; } else { if (
objective -> objtype == 3 ) { ahooultswj ( cholmanager , qrmanager , memspace
) ; } b_SCALED_REG_PRIMAL = 1.4901161193847656E-8 * cholmanager ->
scaleFactor * ( real_T ) mNull ; cholmanager -> ndims = mNull ;
b_A_maxDiag_idx = gopoj1vvcq ( mNull , cholmanager -> FMat , cholmanager ->
ldm + 1 ) - 1 ; cholmanager -> regTol_ = muDoubleScalarMax (
muDoubleScalarAbs ( cholmanager -> FMat [ cholmanager -> ldm *
b_A_maxDiag_idx + b_A_maxDiag_idx ] ) * 2.2204460492503131E-16 ,
muDoubleScalarAbs ( b_SCALED_REG_PRIMAL ) ) ; psztjsmta1 ( cholmanager , 1 ,
mNull , b_SCALED_REG_PRIMAL ) ; if ( cholmanager -> ConvexCheck ) {
b_A_maxDiag_idx = 0 ; do { exitg1 = 0 ; if ( b_A_maxDiag_idx <= mNull - 1 ) {
if ( cholmanager -> FMat [ cholmanager -> ldm * b_A_maxDiag_idx +
b_A_maxDiag_idx ] <= 0.0 ) { cholmanager -> info = - b_A_maxDiag_idx - 1 ;
exitg1 = 1 ; } else { b_A_maxDiag_idx ++ ; } } else { cholmanager ->
ConvexCheck = false ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if (
cholmanager -> info != 0 ) { solution -> state = - 6 ; } else {
b_A_maxDiag_idx = qrmanager -> ldq ; if ( qrmanager -> mrows != 0 ) { for (
b_iy = 0 ; b_iy < mNull ; b_iy ++ ) { memspace -> workspace_double [ b_iy ] =
0.0 ; } b_iy = 0 ; b = ( mNull - 1 ) * qrmanager -> ldq + nullStartIdx ; iac
= nullStartIdx ; while ( ( ( b_A_maxDiag_idx > 0 ) && ( iac <= b ) ) || ( (
b_A_maxDiag_idx < 0 ) && ( iac >= b ) ) ) { ix = 0 ; b_SCALED_REG_PRIMAL =
0.0 ; b_b = iac + nVar ; for ( ia = iac ; ia <= b_b ; ia ++ ) {
b_SCALED_REG_PRIMAL += qrmanager -> Q [ ia - 1 ] * objective -> grad [ ix ] ;
ix ++ ; } memspace -> workspace_double [ b_iy ] += - b_SCALED_REG_PRIMAL ;
b_iy ++ ; iac += b_A_maxDiag_idx ; } } ilb425bbdwf ( cholmanager , memspace
-> workspace_double ) ; bas4bkmccegwchb ( qrmanager -> mrows , mNull ,
qrmanager -> Q , nullStartIdx , qrmanager -> ldq , memspace ->
workspace_double , solution -> searchDir ) ; } } } } } static real_T
ghk2fxpmmyr ( int32_T n , const real_T x [ 7 ] ) { real_T absxk ; real_T
scale ; real_T t ; real_T y ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n ==
1 ) { y = muDoubleScalarAbs ( x [ 0 ] ) ; } else { scale =
3.3121686421112381E-170 ; for ( k = 0 ; k < n ; k ++ ) { absxk =
muDoubleScalarAbs ( x [ k ] ) ; if ( absxk > scale ) { t = scale / absxk ; y
= y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t * t ;
} } y = scale * muDoubleScalarSqrt ( y ) ; } } return y ; } static void
ghldpbp353rwe ( int32_T n , const real_T x [ 9 ] , real_T y [ 70 ] ) {
int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; }
} static void elrlstbsgv ( int32_T m , int32_T n , const real_T A [ 63 ] ,
int32_T lda , const real_T x [ 7 ] , real_T y [ 70 ] ) { real_T c ; int32_T
b_b ; int32_T b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; if
( ( m != 0 ) && ( n != 0 ) ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [
b_iy ] = - y [ b_iy ] ; } iy = 0 ; b_iy = ( n - 1 ) * lda + 1 ; iac = 1 ;
while ( ( ( lda > 0 ) && ( iac <= b_iy ) ) || ( ( lda < 0 ) && ( iac >= b_iy
) ) ) { ix = 0 ; c = 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ; ia ++
) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ] += c ; iy ++ ; iac +=
lda ; } } } static void n2zxqljwxs ( int32_T m , int32_T n , const real_T A [
63 ] , int32_T lda , const real_T x [ 7 ] , real_T y [ 70 ] ) { real_T c ;
int32_T b_b ; int32_T b_iy ; int32_T ia ; int32_T iac ; int32_T ix ; int32_T
iy ; if ( ( m != 0 ) && ( n != 0 ) ) { iy = 10 ; for ( b_iy = 11 ; b_iy <= n
+ 10 ; b_iy ++ ) { y [ b_iy - 1 ] = 0.0 ; } b_iy = ( n - 1 ) * lda + 1 ; iac
= 1 ; while ( ( ( lda > 0 ) && ( iac <= b_iy ) ) || ( ( lda < 0 ) && ( iac >=
b_iy ) ) ) { ix = 0 ; c = 0.0 ; b_b = iac + m ; for ( ia = iac ; ia < b_b ;
ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ] += c ; iy ++ ;
iac += lda ; } } } static void lmt1g5b1kz ( const real_T solution_xstar [ 7 ]
, const real_T solution_searchDir [ 7 ] , real_T workspace [ 70 ] , int32_T
workingset_nVar , int32_T workingset_ldA , const real_T workingset_Aineq [ 63
] , const real_T workingset_bineq [ 9 ] , const real_T workingset_lb [ 7 ] ,
const real_T workingset_ub [ 7 ] , const int32_T workingset_indexLB [ 7 ] ,
const int32_T workingset_indexUB [ 7 ] , const int32_T workingset_sizes [ 5 ]
, const int32_T workingset_isActiveIdx [ 6 ] , const boolean_T
workingset_isActiveConstr [ 10 ] , const int32_T workingset_nWConstr [ 5 ] ,
boolean_T isPhaseOne , real_T tolcon , real_T * toldelta , real_T toltau ,
real_T * alpha , boolean_T * newBlocking , int32_T * constrType , int32_T *
constrIdx ) { real_T denomTol ; real_T p_max ; real_T phaseOneCorrectionP ;
real_T phaseOneCorrectionX ; real_T pk_corrected ; real_T ratio ; int32_T
b_idx ; * alpha = 1.0E+30 ; * newBlocking = false ; * constrType = 0 ; *
constrIdx = 0 ; p_max = 0.0 ; denomTol = 2.2204460492503131E-13 * ghk2fxpmmyr
( workingset_nVar , solution_searchDir ) ; if ( workingset_nWConstr [ 2 ] <
workingset_sizes [ 2 ] ) { ghldpbp353rwe ( workingset_sizes [ 2 ] ,
workingset_bineq , workspace ) ; elrlstbsgv ( workingset_nVar ,
workingset_sizes [ 2 ] , workingset_Aineq , workingset_ldA , solution_xstar ,
workspace ) ; n2zxqljwxs ( workingset_nVar , workingset_sizes [ 2 ] ,
workingset_Aineq , workingset_ldA , solution_searchDir , workspace ) ; for (
b_idx = 0 ; b_idx < workingset_sizes [ 2 ] ; b_idx ++ ) { if ( ( workspace [
b_idx + 10 ] > denomTol ) && ( ! workingset_isActiveConstr [ (
workingset_isActiveIdx [ 2 ] + b_idx ) - 1 ] ) ) { ratio = muDoubleScalarMin
( muDoubleScalarAbs ( workspace [ b_idx ] - * toldelta ) , ( tolcon -
workspace [ b_idx ] ) + * toldelta ) / workspace [ b_idx + 10 ] ; if ( (
ratio <= * alpha ) && ( muDoubleScalarAbs ( workspace [ b_idx + 10 ] ) >
p_max ) ) { * alpha = ratio ; * constrType = 3 ; * constrIdx = b_idx + 1 ; *
newBlocking = true ; } ratio = muDoubleScalarMin ( muDoubleScalarAbs (
workspace [ b_idx ] ) , tolcon - workspace [ b_idx ] ) / workspace [ b_idx +
10 ] ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 3 ; *
constrIdx = b_idx + 1 ; * newBlocking = true ; p_max = muDoubleScalarAbs (
workspace [ b_idx + 10 ] ) ; } } } } if ( workingset_nWConstr [ 3 ] <
workingset_sizes [ 3 ] ) { phaseOneCorrectionX = solution_xstar [
workingset_nVar - 1 ] * ( real_T ) isPhaseOne ; phaseOneCorrectionP =
solution_searchDir [ workingset_nVar - 1 ] * ( real_T ) isPhaseOne ; for (
b_idx = 0 ; b_idx <= workingset_sizes [ 3 ] - 2 ; b_idx ++ ) { pk_corrected =
- solution_searchDir [ workingset_indexLB [ b_idx ] - 1 ] -
phaseOneCorrectionP ; if ( ( pk_corrected > denomTol ) && ( !
workingset_isActiveConstr [ ( workingset_isActiveIdx [ 3 ] + b_idx ) - 1 ] )
) { ratio = ( ( - solution_xstar [ workingset_indexLB [ b_idx ] - 1 ] -
workingset_lb [ workingset_indexLB [ b_idx ] - 1 ] ) - * toldelta ) -
phaseOneCorrectionX ; ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio )
, tolcon - ratio ) / pk_corrected ; if ( ( ratio <= * alpha ) && (
muDoubleScalarAbs ( pk_corrected ) > p_max ) ) { * alpha = ratio ; *
constrType = 4 ; * constrIdx = b_idx + 1 ; * newBlocking = true ; } ratio = (
- solution_xstar [ workingset_indexLB [ b_idx ] - 1 ] - workingset_lb [
workingset_indexLB [ b_idx ] - 1 ] ) - phaseOneCorrectionX ; ratio =
muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , tolcon - ratio ) /
pk_corrected ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ;
* constrIdx = b_idx + 1 ; * newBlocking = true ; p_max = muDoubleScalarAbs (
pk_corrected ) ; } } } if ( ( - solution_searchDir [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] > denomTol ) && ( !
workingset_isActiveConstr [ ( workingset_isActiveIdx [ 3 ] + workingset_sizes
[ 3 ] ) - 2 ] ) ) { ratio = ( - solution_xstar [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] - workingset_lb [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] ) - * toldelta ; ratio = muDoubleScalarMin
( muDoubleScalarAbs ( ratio ) , tolcon - ratio ) / - solution_searchDir [
workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] ; if ( ( ratio <= *
alpha ) && ( muDoubleScalarAbs ( solution_searchDir [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] ) > p_max ) ) { * alpha = ratio ; *
constrType = 4 ; * constrIdx = workingset_sizes [ 3 ] ; * newBlocking = true
; } ratio = - solution_xstar [ workingset_indexLB [ workingset_sizes [ 3 ] -
1 ] - 1 ] - workingset_lb [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ]
- 1 ] ; ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , tolcon -
ratio ) / - solution_searchDir [ workingset_indexLB [ workingset_sizes [ 3 ]
- 1 ] - 1 ] ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ; *
constrIdx = workingset_sizes [ 3 ] ; * newBlocking = true ; p_max =
muDoubleScalarAbs ( solution_searchDir [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] ) ; } } } if ( workingset_nWConstr [ 4 ] <
workingset_sizes [ 4 ] ) { phaseOneCorrectionX = solution_xstar [
workingset_nVar - 1 ] * ( real_T ) isPhaseOne ; phaseOneCorrectionP =
solution_searchDir [ workingset_nVar - 1 ] * ( real_T ) isPhaseOne ; for (
b_idx = 0 ; b_idx < workingset_sizes [ 4 ] ; b_idx ++ ) { pk_corrected =
solution_searchDir [ workingset_indexUB [ b_idx ] - 1 ] - phaseOneCorrectionP
; if ( ( pk_corrected > denomTol ) && ( ! workingset_isActiveConstr [ (
workingset_isActiveIdx [ 4 ] + b_idx ) - 1 ] ) ) { ratio = ( ( solution_xstar
[ workingset_indexUB [ b_idx ] - 1 ] - workingset_ub [ workingset_indexUB [
b_idx ] - 1 ] ) - * toldelta ) - phaseOneCorrectionX ; ratio =
muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , tolcon - ratio ) /
pk_corrected ; if ( ( ratio <= * alpha ) && ( muDoubleScalarAbs (
pk_corrected ) > p_max ) ) { * alpha = ratio ; * constrType = 5 ; * constrIdx
= b_idx + 1 ; * newBlocking = true ; } ratio = ( solution_xstar [
workingset_indexUB [ b_idx ] - 1 ] - workingset_ub [ workingset_indexUB [
b_idx ] - 1 ] ) - phaseOneCorrectionX ; ratio = muDoubleScalarMin (
muDoubleScalarAbs ( ratio ) , tolcon - ratio ) / pk_corrected ; if ( ratio <
* alpha ) { * alpha = ratio ; * constrType = 5 ; * constrIdx = b_idx + 1 ; *
newBlocking = true ; p_max = muDoubleScalarAbs ( pk_corrected ) ; } } } } *
toldelta += toltau ; if ( p_max > 0.0 ) { * alpha = muDoubleScalarMax ( *
alpha , toltau / p_max ) ; } if ( isPhaseOne ) { * newBlocking = ( ( ( ! *
newBlocking ) || ( ! ( * alpha > 1.7976931348623157E+308 ) ) ) && ( *
newBlocking ) ) ; * alpha = muDoubleScalarMin ( * alpha ,
1.7976931348623157E+308 ) ; } else { * newBlocking = ( ( ( ! * newBlocking )
|| ( ! ( * alpha > 1.0 ) ) ) && ( * newBlocking ) ) ; * alpha =
muDoubleScalarMin ( * alpha , 1.0 ) ; } } static void okmccfwzwb ( const
real_T solution_xstar [ 7 ] , const real_T solution_searchDir [ 7 ] , real_T
workspace [ 70 ] , int32_T workingset_nVar , int32_T workingset_ldA , const
real_T workingset_Aineq [ 63 ] , const real_T workingset_bineq [ 9 ] , const
real_T workingset_lb [ 7 ] , const real_T workingset_ub [ 7 ] , const int32_T
workingset_indexLB [ 7 ] , const int32_T workingset_indexUB [ 7 ] , const
int32_T workingset_sizes [ 5 ] , const int32_T workingset_isActiveIdx [ 6 ] ,
const boolean_T workingset_isActiveConstr [ 10 ] , const int32_T
workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T tolcon , real_T *
alpha , boolean_T * newBlocking , int32_T * constrType , int32_T * constrIdx
) { real_T denomTol ; real_T phaseOneCorrectionP ; real_T phaseOneCorrectionX
; real_T pk_corrected ; real_T ratio ; int32_T b_idx ; * alpha = 1.0E+30 ; *
newBlocking = false ; * constrType = 0 ; * constrIdx = 0 ; denomTol =
2.2204460492503131E-13 * ghk2fxpmmyr ( workingset_nVar , solution_searchDir )
; if ( workingset_nWConstr [ 2 ] < workingset_sizes [ 2 ] ) { ghldpbp353rwe (
workingset_sizes [ 2 ] , workingset_bineq , workspace ) ; elrlstbsgv (
workingset_nVar , workingset_sizes [ 2 ] , workingset_Aineq , workingset_ldA
, solution_xstar , workspace ) ; n2zxqljwxs ( workingset_nVar ,
workingset_sizes [ 2 ] , workingset_Aineq , workingset_ldA ,
solution_searchDir , workspace ) ; for ( b_idx = 0 ; b_idx < workingset_sizes
[ 2 ] ; b_idx ++ ) { if ( ( workspace [ b_idx + 10 ] > denomTol ) && ( !
workingset_isActiveConstr [ ( workingset_isActiveIdx [ 2 ] + b_idx ) - 1 ] )
) { ratio = muDoubleScalarMin ( muDoubleScalarAbs ( workspace [ b_idx ] ) ,
tolcon - workspace [ b_idx ] ) / workspace [ b_idx + 10 ] ; if ( ratio < *
alpha ) { * alpha = ratio ; * constrType = 3 ; * constrIdx = b_idx + 1 ; *
newBlocking = true ; } } } } if ( workingset_nWConstr [ 3 ] <
workingset_sizes [ 3 ] ) { phaseOneCorrectionX = solution_xstar [
workingset_nVar - 1 ] * ( real_T ) isPhaseOne ; phaseOneCorrectionP =
solution_searchDir [ workingset_nVar - 1 ] * ( real_T ) isPhaseOne ; for (
b_idx = 0 ; b_idx <= workingset_sizes [ 3 ] - 2 ; b_idx ++ ) { pk_corrected =
- solution_searchDir [ workingset_indexLB [ b_idx ] - 1 ] -
phaseOneCorrectionP ; if ( ( pk_corrected > denomTol ) && ( !
workingset_isActiveConstr [ ( workingset_isActiveIdx [ 3 ] + b_idx ) - 1 ] )
) { ratio = ( - solution_xstar [ workingset_indexLB [ b_idx ] - 1 ] -
workingset_lb [ workingset_indexLB [ b_idx ] - 1 ] ) - phaseOneCorrectionX ;
ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , tolcon - ratio ) /
pk_corrected ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ;
* constrIdx = b_idx + 1 ; * newBlocking = true ; } } } if ( ( -
solution_searchDir [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ]
> denomTol ) && ( ! workingset_isActiveConstr [ ( workingset_isActiveIdx [ 3
] + workingset_sizes [ 3 ] ) - 2 ] ) ) { ratio = - solution_xstar [
workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] - workingset_lb [
workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] ; ratio =
muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , tolcon - ratio ) / -
solution_searchDir [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ]
; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx =
workingset_sizes [ 3 ] ; * newBlocking = true ; } } } if (
workingset_nWConstr [ 4 ] < workingset_sizes [ 4 ] ) { phaseOneCorrectionX =
solution_xstar [ workingset_nVar - 1 ] * ( real_T ) isPhaseOne ;
phaseOneCorrectionP = solution_searchDir [ workingset_nVar - 1 ] * ( real_T )
isPhaseOne ; for ( b_idx = 0 ; b_idx < workingset_sizes [ 4 ] ; b_idx ++ ) {
pk_corrected = solution_searchDir [ workingset_indexUB [ b_idx ] - 1 ] -
phaseOneCorrectionP ; if ( ( pk_corrected > denomTol ) && ( !
workingset_isActiveConstr [ ( workingset_isActiveIdx [ 4 ] + b_idx ) - 1 ] )
) { ratio = ( solution_xstar [ workingset_indexUB [ b_idx ] - 1 ] -
workingset_ub [ workingset_indexUB [ b_idx ] - 1 ] ) - phaseOneCorrectionX ;
ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , tolcon - ratio ) /
pk_corrected ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 5 ;
* constrIdx = b_idx + 1 ; * newBlocking = true ; } } } } if ( ! isPhaseOne )
{ * newBlocking = ( ( ( ! * newBlocking ) || ( ! ( * alpha > 1.0 ) ) ) && ( *
newBlocking ) ) ; * alpha = muDoubleScalarMin ( * alpha , 1.0 ) ; } } static
void fahxpir5e0 ( i5yhexr3qk * obj , int32_T TYPE , int32_T idx_local ) {
int32_T colOffset ; int32_T idx ; int32_T idx_bnd_local ; obj -> nWConstr [
TYPE - 1 ] ++ ; obj -> isActiveConstr [ ( obj -> isActiveIdx [ TYPE - 1 ] +
idx_local ) - 2 ] = true ; obj -> nActiveConstr ++ ; obj -> Wid [ obj ->
nActiveConstr - 1 ] = TYPE ; obj -> Wlocalidx [ obj -> nActiveConstr - 1 ] =
idx_local ; colOffset = ( obj -> nActiveConstr - 1 ) * obj -> ldA - 1 ; if (
TYPE == 5 ) { idx_bnd_local = obj -> indexUB [ idx_local - 1 ] ; obj -> bwset
[ obj -> nActiveConstr - 1 ] = obj -> ub [ obj -> indexUB [ idx_local - 1 ] -
1 ] ; } else { idx_bnd_local = obj -> indexLB [ idx_local - 1 ] ; obj ->
bwset [ obj -> nActiveConstr - 1 ] = obj -> lb [ obj -> indexLB [ idx_local -
1 ] - 1 ] ; } for ( idx = 0 ; idx <= idx_bnd_local - 2 ; idx ++ ) { obj ->
ATwset [ ( idx + colOffset ) + 1 ] = 0.0 ; } obj -> ATwset [ idx_bnd_local +
colOffset ] = ( real_T ) ( TYPE == 5 ) * 2.0 - 1.0 ; for ( idx_bnd_local ++ ;
idx_bnd_local <= obj -> nVar ; idx_bnd_local ++ ) { obj -> ATwset [
idx_bnd_local + colOffset ] = 0.0 ; } switch ( obj -> probType ) { case 3 :
case 2 : break ; default : obj -> ATwset [ obj -> nVar + colOffset ] = - 1.0
; break ; } } static void go2tauwr2l ( i5yhexr3qk * obj , int32_T idx_local )
{ int32_T iAineq0 ; int32_T iAw0 ; int32_T idx ; obj -> nWConstr [ 2 ] ++ ;
obj -> isActiveConstr [ ( obj -> isActiveIdx [ 2 ] + idx_local ) - 2 ] = true
; obj -> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] = 3 ; obj
-> Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; iAineq0 = ( idx_local
- 1 ) * obj -> ldA ; iAw0 = ( obj -> nActiveConstr - 1 ) * obj -> ldA ; for (
idx = 0 ; idx < obj -> nVar ; idx ++ ) { obj -> ATwset [ iAw0 + idx ] = obj
-> Aineq [ iAineq0 + idx ] ; } obj -> bwset [ obj -> nActiveConstr - 1 ] =
obj -> bineq [ idx_local - 1 ] ; } static void anb2wy4yoe ( real_T workspace
[ 70 ] , hzxbyztu40 * solution , const nvpjvsx3xp * objective , const
p4p24nnrhp * qrmanager ) { real_T c ; int32_T b_b ; int32_T c_idx ; int32_T
ia ; int32_T iac ; int32_T idxQR ; int32_T ix ; int32_T jjA ; boolean_T
guard1 = false ; boolean_T guard2 = false ; boolean_T nonDegenerate ; if (
qrmanager -> ncols > 0 ) { guard1 = false ; if ( objective -> objtype != 4 )
{ c = 100.0 * ( real_T ) qrmanager -> mrows * 2.2204460492503131E-16 ;
nonDegenerate = ( ( qrmanager -> mrows > 0 ) && ( qrmanager -> ncols > 0 ) )
; if ( nonDegenerate ) { c_idx = qrmanager -> ncols ; guard2 = false ; if (
qrmanager -> mrows < qrmanager -> ncols ) { idxQR = ( qrmanager -> ncols - 1
) * qrmanager -> ldq + qrmanager -> mrows ; while ( ( c_idx > qrmanager ->
mrows ) && ( muDoubleScalarAbs ( qrmanager -> QR [ idxQR - 1 ] ) >= c ) ) {
c_idx -- ; idxQR -= qrmanager -> ldq ; } nonDegenerate = ( c_idx == qrmanager
-> mrows ) ; if ( ! nonDegenerate ) { } else { guard2 = true ; } } else {
guard2 = true ; } if ( guard2 ) { idxQR = ( c_idx - 1 ) * qrmanager -> ldq +
c_idx ; while ( ( c_idx >= 1 ) && ( muDoubleScalarAbs ( qrmanager -> QR [
idxQR - 1 ] ) >= c ) ) { c_idx -- ; idxQR = ( idxQR - qrmanager -> ldq ) - 1
; } nonDegenerate = ( c_idx == 0 ) ; } } if ( ! nonDegenerate ) { solution ->
state = - 7 ; } else { guard1 = true ; } } else { guard1 = true ; } if (
guard1 ) { c_idx = qrmanager -> ldq ; if ( ( qrmanager -> mrows != 0 ) && (
qrmanager -> ncols != 0 ) ) { for ( idxQR = 0 ; idxQR < qrmanager -> ncols ;
idxQR ++ ) { workspace [ idxQR ] = 0.0 ; } idxQR = 0 ; jjA = ( qrmanager ->
ncols - 1 ) * qrmanager -> ldq + 1 ; iac = 1 ; while ( ( ( c_idx > 0 ) && (
iac <= jjA ) ) || ( ( c_idx < 0 ) && ( iac >= jjA ) ) ) { ix = 0 ; c = 0.0 ;
b_b = iac + qrmanager -> mrows ; for ( ia = iac ; ia < b_b ; ia ++ ) { c +=
qrmanager -> Q [ ia - 1 ] * objective -> grad [ ix ] ; ix ++ ; } workspace [
idxQR ] += c ; idxQR ++ ; iac += c_idx ; } } if ( qrmanager -> ncols != 0 ) {
for ( idxQR = qrmanager -> ncols - 1 ; idxQR + 1 > 0 ; idxQR -- ) { jjA =
idxQR * c_idx + idxQR ; workspace [ idxQR ] /= qrmanager -> QR [ jjA ] ; for
( iac = 1 ; iac - 1 < idxQR ; iac ++ ) { ix = idxQR - iac ; workspace [ ix ]
-= qrmanager -> QR [ jjA - iac ] * workspace [ idxQR ] ; } } } for ( c_idx =
0 ; c_idx < qrmanager -> ncols ; c_idx ++ ) { solution -> lambda [ c_idx ] =
- workspace [ c_idx ] ; } } } } static void ghldpbp353rwes ( int32_T n ,
const real_T x [ 7 ] , real_T y [ 7 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k <
n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void octlzgh32c ( int32_T *
activeSetChangeID , const real_T f [ 6 ] , hzxbyztu40 * solution , eeqls2hdjr
* memspace , const nvpjvsx3xp * objective , i5yhexr3qk * workingset ,
p4p24nnrhp * qrmanager , boolean_T b_options_IterDisplayQP , real_T
b_options_ObjectiveLimit , real_T b_options_ConstraintTolerance , int32_T
runTimeOptions_MaxIterations , real_T runTimeOptions_ConstrRelTolFactor ,
boolean_T updateFval ) { real_T tempMaxConstr ; int32_T b_idx ; boolean_T
nonDegenerateWset ; solution -> iterations ++ ; if ( ( solution -> iterations
>= runTimeOptions_MaxIterations ) && ( ( solution -> state != 1 ) || (
objective -> objtype == 5 ) ) ) { solution -> state = 0 ; } if ( solution ->
iterations - solution -> iterations / 50 * 50 == 0 ) { solution -> maxConstr
= bj5i5xsfecsi ( workingset , solution -> xstar ) ; tempMaxConstr = solution
-> maxConstr ; if ( objective -> objtype == 5 ) { tempMaxConstr = solution ->
maxConstr - solution -> xstar [ objective -> nvar - 1 ] ; } if (
tempMaxConstr > b_options_ConstraintTolerance *
runTimeOptions_ConstrRelTolFactor ) { ghldpbp353rwes ( objective -> nvar ,
solution -> xstar , solution -> searchDir ) ; nonDegenerateWset = fnhc5k4g5m
( memspace -> workspace_double , solution -> searchDir , workingset ,
qrmanager ) ; if ( ( ! nonDegenerateWset ) && ( solution -> state != 0 ) ) {
solution -> state = - 2 ; } * activeSetChangeID = 0 ; tempMaxConstr =
bj5i5xsfecsi ( workingset , solution -> searchDir ) ; if ( tempMaxConstr <
solution -> maxConstr ) { for ( b_idx = 0 ; b_idx < objective -> nvar ; b_idx
++ ) { solution -> xstar [ b_idx ] = solution -> searchDir [ b_idx ] ; }
solution -> maxConstr = tempMaxConstr ; } } } if ( updateFval && ( (
b_options_ObjectiveLimit > ( rtMinusInf ) ) || b_options_IterDisplayQP ) ) {
solution -> fstar = aqbrn5c3pb ( objective , memspace -> workspace_double , f
, solution -> xstar ) ; if ( ( b_options_ObjectiveLimit > ( rtMinusInf ) ) &&
( solution -> fstar < b_options_ObjectiveLimit ) && ( ( solution -> state !=
0 ) || ( objective -> objtype != 5 ) ) ) { solution -> state = 2 ; } } }
static void kw3r0ywtvg ( hzxbyztu40 * solution , const nvpjvsx3xp * objective
, int32_T workingset_nVar , int32_T workingset_ldA , const real_T
workingset_ATwset [ 70 ] , int32_T workingset_nActiveConstr , real_T
workspace [ 70 ] ) { real_T s ; real_T smax ; int32_T b_b ; int32_T b_ix ;
int32_T ia ; int32_T iac ; int32_T ix ; int32_T iy ; for ( ix = 0 ; ix <
workingset_nVar ; ix ++ ) { workspace [ ix ] = objective -> grad [ ix ] ; }
if ( ( workingset_nVar != 0 ) && ( workingset_nActiveConstr != 0 ) ) { ix = 0
; b_ix = ( workingset_nActiveConstr - 1 ) * workingset_ldA + 1 ; iac = 1 ;
while ( ( ( workingset_ldA > 0 ) && ( iac <= b_ix ) ) || ( ( workingset_ldA <
0 ) && ( iac >= b_ix ) ) ) { iy = 0 ; b_b = iac + workingset_nVar ; for ( ia
= iac ; ia < b_b ; ia ++ ) { workspace [ iy ] += workingset_ATwset [ ia - 1 ]
* solution -> lambda [ ix ] ; iy ++ ; } ix ++ ; iac += workingset_ldA ; } }
if ( workingset_nVar < 1 ) { ix = 0 ; } else { ix = 1 ; if ( workingset_nVar
> 1 ) { b_ix = 0 ; smax = muDoubleScalarAbs ( workspace [ 0 ] ) ; for ( iac =
2 ; iac <= workingset_nVar ; iac ++ ) { b_ix ++ ; s = muDoubleScalarAbs (
workspace [ b_ix ] ) ; if ( s > smax ) { ix = iac ; smax = s ; } } } }
solution -> firstorderopt = muDoubleScalarAbs ( workspace [ ix - 1 ] ) ; }
static void ht4stwwg0l ( boolean_T newBlocking , int32_T PROBLEM_TYPE ,
real_T alpha , real_T stepNorm , int32_T activeConstrChangedType , int32_T
localActiveConstrIdx , int32_T activeSetChangeID , real_T solution_fstar ,
real_T solution_firstorderopt , real_T solution_maxConstr , int32_T
solution_iterations , const int32_T workingset_indexLB [ 7 ] , const int32_T
workingset_indexUB [ 7 ] , int32_T workingset_nActiveConstr ) { int32_T
b_localActiveConstrIdx ; printf ( "%5i  %14.6e  %14.6e  %14.6e" ,
solution_iterations , solution_fstar , solution_firstorderopt ,
solution_maxConstr ) ; fflush ( stdout ) ; printf ( "  " ) ; fflush ( stdout
) ; if ( muDoubleScalarIsNaN ( alpha ) ) { printf ( "       -      " ) ;
fflush ( stdout ) ; } else { printf ( "%14.6e" , alpha ) ; fflush ( stdout )
; } printf ( "  " ) ; fflush ( stdout ) ; printf ( "%14.6e" , stepNorm ) ;
fflush ( stdout ) ; printf ( "    " ) ; fflush ( stdout ) ; if ( newBlocking
|| ( activeSetChangeID == - 1 ) ) { if ( newBlocking ) { activeSetChangeID =
1 ; } b_localActiveConstrIdx = localActiveConstrIdx ; switch (
activeSetChangeID ) { case - 1 : printf ( "-" ) ; fflush ( stdout ) ; break ;
case 1 : printf ( "+" ) ; fflush ( stdout ) ; break ; default : printf ( " "
) ; fflush ( stdout ) ; break ; } switch ( activeConstrChangedType ) { case 3
: printf ( "AINEQ" ) ; fflush ( stdout ) ; break ; case 4 : printf ( "LOWER"
) ; fflush ( stdout ) ; b_localActiveConstrIdx = workingset_indexLB [
localActiveConstrIdx - 1 ] ; break ; case 5 : printf ( "UPPER" ) ; fflush (
stdout ) ; b_localActiveConstrIdx = workingset_indexUB [ localActiveConstrIdx
- 1 ] ; break ; default : printf ( "SAME " ) ; fflush ( stdout ) ;
b_localActiveConstrIdx = - 1 ; break ; } printf ( "(%-5i)" ,
b_localActiveConstrIdx ) ; fflush ( stdout ) ; } else { printf ( " SAME " ) ;
fflush ( stdout ) ; printf ( "(%-5i)" , - 1 ) ; fflush ( stdout ) ; } printf
( "           " ) ; fflush ( stdout ) ; printf ( "%5i" ,
workingset_nActiveConstr ) ; fflush ( stdout ) ; printf ( "    " ) ; fflush (
stdout ) ; switch ( PROBLEM_TYPE ) { case 1 : printf ( "Phase One" ) ; fflush
( stdout ) ; break ; case 2 : printf ( "Regularized" ) ; fflush ( stdout ) ;
break ; case 4 : printf ( "Phase One Reg" ) ; fflush ( stdout ) ; break ;
default : printf ( "Normal" ) ; fflush ( stdout ) ; break ; } printf ( "\n" )
; fflush ( stdout ) ; } static void lg42f0n1fn ( const real_T f [ 6 ] ,
hzxbyztu40 * solution , eeqls2hdjr * memspace , i5yhexr3qk * workingset ,
p4p24nnrhp * qrmanager , ljxdlfkika * cholmanager , nvpjvsx3xp * objective ,
boolean_T b_options_IterDisplayQP , real_T b_options_PricingTolerance ,
real_T b_options_ObjectiveLimit , real_T b_options_ConstraintTolerance ,
real_T b_options_StepTolerance , int32_T runTimeOptions_MaxIterations ,
real_T runTimeOptions_ConstrRelTolFactor , real_T
runTimeOptions_ProbRelTolFactor , boolean_T runTimeOptions_RemainFeasible ) {
real_T alpha ; real_T normDelta ; real_T tolDelta ; int32_T TYPE ; int32_T
activeConstrChangedType ; int32_T activeSetChangeID ; int32_T b_TYPE ;
int32_T globalActiveConstrIdx ; int32_T idxMinLambda ; int32_T
localActiveConstrIdx ; int32_T nVar ; char_T varargin_4 [ 14 ] ; char_T
b_varargin_4 [ 13 ] ; boolean_T newBlocking ; boolean_T subProblemChanged ;
boolean_T updateFval ; static const char_T b [ 13 ] = { 'N' , 'o' , 'r' , 'm'
, 'a' , 'l' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' } ; static const char_T
c [ 13 ] = { 'P' , 'h' , 'a' , 's' , 'e' , ' ' , 'O' , 'n' , 'e' , ' ' , ' '
, ' ' , ' ' } ; static const char_T d [ 13 ] = { 'R' , 'e' , 'g' , 'u' , 'l'
, 'a' , 'r' , 'i' , 'z' , 'e' , 'd' , ' ' , ' ' } ; static const char_T e [
13 ] = { 'P' , 'h' , 'a' , 's' , 'e' , ' ' , 'O' , 'n' , 'e' , ' ' , 'R' ,
'e' , 'g' } ; int32_T exitg1 ; boolean_T guard1 = false ; subProblemChanged =
true ; updateFval = true ; activeSetChangeID = 0 ; activeConstrChangedType =
1 ; TYPE = objective -> objtype ; tolDelta = 6.7434957617430445E-7 ; nVar =
workingset -> nVar ; localActiveConstrIdx = 0 ; globalActiveConstrIdx = 0 ;
eoqr34sblq ( objective , f , solution -> xstar ) ; solution -> fstar =
aqbrn5c3pb ( objective , memspace -> workspace_double , f , solution -> xstar
) ; if ( solution -> iterations < runTimeOptions_MaxIterations ) { solution
-> state = - 5 ; } else { solution -> state = 0 ; } ghldpbp353rw ( workingset
-> mConstrMax , 0.0 , solution -> lambda ) ; if ( ( solution -> iterations ==
0 ) && b_options_IterDisplayQP ) { printf (
 "                          First-order                                                                          Active\n"
) ; fflush ( stdout ) ; printf (
 " Iter            Fval      Optimality     Feasibility           alpha    Norm of step           Action     Constraints    Step Type\n"
) ; fflush ( stdout ) ; printf ( "\n" ) ; fflush ( stdout ) ; switch (
workingset -> probType ) { case 1 : for ( idxMinLambda = 0 ; idxMinLambda <
13 ; idxMinLambda ++ ) { b_varargin_4 [ idxMinLambda ] = c [ idxMinLambda ] ;
} break ; case 2 : for ( idxMinLambda = 0 ; idxMinLambda < 13 ; idxMinLambda
++ ) { b_varargin_4 [ idxMinLambda ] = d [ idxMinLambda ] ; } break ; case 4
: for ( idxMinLambda = 0 ; idxMinLambda < 13 ; idxMinLambda ++ ) {
b_varargin_4 [ idxMinLambda ] = e [ idxMinLambda ] ; } break ; default : for
( idxMinLambda = 0 ; idxMinLambda < 13 ; idxMinLambda ++ ) { b_varargin_4 [
idxMinLambda ] = b [ idxMinLambda ] ; } break ; } for ( idxMinLambda = 0 ;
idxMinLambda < 13 ; idxMinLambda ++ ) { varargin_4 [ idxMinLambda ] =
b_varargin_4 [ idxMinLambda ] ; } varargin_4 [ 13 ] = '\x00' ; printf (
 "%5i  %14.6e                                                                                            %5i    %s"
, solution -> iterations , solution -> fstar , workingset -> nActiveConstr ,
& varargin_4 [ 0 ] ) ; fflush ( stdout ) ; printf ( "\n" ) ; fflush ( stdout
) ; } do { exitg1 = 0 ; if ( solution -> state == - 5 ) { newBlocking = false
; guard1 = false ; if ( subProblemChanged ) { switch ( activeSetChangeID ) {
case 1 : c3mvw0ni0h ( qrmanager , workingset -> ATwset , workingset -> ldA *
( workingset -> nActiveConstr - 1 ) + 1 ) ; break ; case - 1 : horw5uuiys (
qrmanager , globalActiveConstrIdx ) ; break ; default : mgmlsflwcg (
qrmanager , workingset -> ATwset , nVar , workingset -> nActiveConstr ,
workingset -> ldA ) ; ibpfypmesd ( qrmanager , qrmanager -> mrows ) ; break ;
} cwpdjwttol ( solution , memspace , qrmanager , cholmanager , objective ) ;
if ( solution -> state != - 5 ) { exitg1 = 1 ; } else { normDelta =
ghk2fxpmmyr ( nVar , solution -> searchDir ) ; guard1 = true ; } } else { for
( idxMinLambda = 0 ; idxMinLambda < nVar ; idxMinLambda ++ ) { solution ->
searchDir [ idxMinLambda ] = 0.0 ; } normDelta = 0.0 ; guard1 = true ; } if (
guard1 ) { if ( ( ! subProblemChanged ) || ( normDelta <
b_options_StepTolerance ) || ( workingset -> nActiveConstr >= nVar ) ) {
anb2wy4yoe ( memspace -> workspace_double , solution , objective , qrmanager
) ; if ( ( solution -> state != - 7 ) || ( workingset -> nActiveConstr > nVar
) ) { idxMinLambda = - 1 ; alpha = b_options_PricingTolerance *
runTimeOptions_ProbRelTolFactor * ( real_T ) ( TYPE != 5 ) ; for ( b_TYPE =
workingset -> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ] ; b_TYPE <
workingset -> nActiveConstr ; b_TYPE ++ ) { if ( solution -> lambda [ b_TYPE
] < alpha ) { alpha = solution -> lambda [ b_TYPE ] ; idxMinLambda = b_TYPE ;
} } if ( idxMinLambda + 1 == 0 ) { solution -> state = 1 ; } else {
activeSetChangeID = - 1 ; globalActiveConstrIdx = idxMinLambda + 1 ;
subProblemChanged = true ; activeConstrChangedType = workingset -> Wid [
idxMinLambda ] ; localActiveConstrIdx = workingset -> Wlocalidx [
idxMinLambda ] ; b_TYPE = workingset -> Wid [ idxMinLambda ] - 1 ; workingset
-> isActiveConstr [ ( workingset -> isActiveIdx [ workingset -> Wid [
idxMinLambda ] - 1 ] + workingset -> Wlocalidx [ idxMinLambda ] ) - 2 ] =
false ; nc0aidj43f ( workingset , workingset -> nActiveConstr , idxMinLambda
+ 1 ) ; workingset -> nActiveConstr -- ; workingset -> nWConstr [ b_TYPE ] --
; solution -> lambda [ idxMinLambda ] = 0.0 ; } } else { idxMinLambda =
workingset -> nActiveConstr ; activeSetChangeID = 0 ; globalActiveConstrIdx =
workingset -> nActiveConstr ; subProblemChanged = true ;
activeConstrChangedType = workingset -> Wid [ workingset -> nActiveConstr - 1
] ; localActiveConstrIdx = workingset -> Wlocalidx [ workingset ->
nActiveConstr - 1 ] ; b_TYPE = workingset -> Wid [ workingset ->
nActiveConstr - 1 ] - 1 ; workingset -> isActiveConstr [ ( workingset ->
isActiveIdx [ workingset -> Wid [ workingset -> nActiveConstr - 1 ] - 1 ] +
workingset -> Wlocalidx [ workingset -> nActiveConstr - 1 ] ) - 2 ] = false ;
nc0aidj43f ( workingset , workingset -> nActiveConstr , idxMinLambda ) ;
workingset -> nActiveConstr -- ; workingset -> nWConstr [ b_TYPE ] -- ;
solution -> lambda [ idxMinLambda - 1 ] = 0.0 ; } updateFval = false ; alpha
= ( rtNaN ) ; } else { updateFval = ( TYPE == 5 ) ; if ( updateFval ||
runTimeOptions_RemainFeasible ) { okmccfwzwb ( solution -> xstar , solution
-> searchDir , memspace -> workspace_double , workingset -> nVar , workingset
-> ldA , workingset -> Aineq , workingset -> bineq , workingset -> lb ,
workingset -> ub , workingset -> indexLB , workingset -> indexUB , workingset
-> sizes , workingset -> isActiveIdx , workingset -> isActiveConstr ,
workingset -> nWConstr , updateFval , b_options_ConstraintTolerance , & alpha
, & newBlocking , & activeConstrChangedType , & localActiveConstrIdx ) ; }
else { lmt1g5b1kz ( solution -> xstar , solution -> searchDir , memspace ->
workspace_double , workingset -> nVar , workingset -> ldA , workingset ->
Aineq , workingset -> bineq , workingset -> lb , workingset -> ub ,
workingset -> indexLB , workingset -> indexUB , workingset -> sizes ,
workingset -> isActiveIdx , workingset -> isActiveConstr , workingset ->
nWConstr , false , b_options_ConstraintTolerance , & tolDelta ,
6.608625846508183E-7 , & alpha , & newBlocking , & activeConstrChangedType ,
& localActiveConstrIdx ) ; } if ( newBlocking ) { switch (
activeConstrChangedType ) { case 3 : go2tauwr2l ( workingset ,
localActiveConstrIdx ) ; break ; case 4 : fahxpir5e0 ( workingset , 4 ,
localActiveConstrIdx ) ; break ; default : fahxpir5e0 ( workingset , 5 ,
localActiveConstrIdx ) ; break ; } activeSetChangeID = 1 ; } else { if (
objective -> objtype == 5 ) { if ( ghk2fxpmmyr ( objective -> nvar , solution
-> searchDir ) > 100.0 * ( real_T ) objective -> nvar * 1.4901161193847656E-8
) { solution -> state = 3 ; } else { solution -> state = 4 ; } }
subProblemChanged = false ; if ( workingset -> nActiveConstr == 0 ) {
solution -> state = 1 ; } } if ( ( nVar >= 1 ) && ( ! ( alpha == 0.0 ) ) ) {
for ( idxMinLambda = 0 ; idxMinLambda < nVar ; idxMinLambda ++ ) { solution
-> xstar [ idxMinLambda ] += alpha * solution -> searchDir [ idxMinLambda ] ;
} } eoqr34sblq ( objective , f , solution -> xstar ) ; updateFval = true ; }
octlzgh32c ( & activeSetChangeID , f , solution , memspace , objective ,
workingset , qrmanager , b_options_IterDisplayQP , b_options_ObjectiveLimit ,
b_options_ConstraintTolerance , runTimeOptions_MaxIterations ,
runTimeOptions_ConstrRelTolFactor , updateFval ) ; if (
b_options_IterDisplayQP ) { if ( solution -> iterations - solution ->
iterations / 50 * 50 == 0 ) { printf (
 "                          First-order                                                                          Active\n"
) ; fflush ( stdout ) ; printf (
 " Iter            Fval      Optimality     Feasibility           alpha    Norm of step           Action     Constraints    Step Type\n"
) ; fflush ( stdout ) ; printf ( "\n" ) ; fflush ( stdout ) ; } else {
solution -> maxConstr = bj5i5xsfecsi ( workingset , solution -> xstar ) ; }
kw3r0ywtvg ( solution , objective , workingset -> nVar , workingset -> ldA ,
workingset -> ATwset , workingset -> nActiveConstr , memspace ->
workspace_double ) ; ht4stwwg0l ( newBlocking , workingset -> probType ,
alpha , normDelta , activeConstrChangedType , localActiveConstrIdx ,
activeSetChangeID , solution -> fstar , solution -> firstorderopt , solution
-> maxConstr , solution -> iterations , workingset -> indexLB , workingset ->
indexUB , workingset -> nActiveConstr ) ; } } } else { if ( ! updateFval ) {
solution -> fstar = aqbrn5c3pb ( objective , memspace -> workspace_double , f
, solution -> xstar ) ; } exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } static
void fnwzkkrnucs ( hzxbyztu40 * solution , eeqls2hdjr * memspace , i5yhexr3qk
* workingset , p4p24nnrhp * qrmanager , const epfislbnrs * b_options ) {
real_T tol ; int32_T idx_row ; int32_T mTotalWorkingEq ; int32_T nVar ;
int32_T totalRank ; boolean_T exitg1 ; boolean_T guard1 = false ; boolean_T
okWorkingSet ; solution -> state = 82 ; nVar = workingset -> nVar - 1 ;
mTotalWorkingEq = workingset -> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ]
; idx_row = 0 ; if ( mTotalWorkingEq > 0 ) { while ( idx_row <=
mTotalWorkingEq - 1 ) { for ( totalRank = 0 ; totalRank <= nVar ; totalRank
++ ) { qrmanager -> QR [ idx_row + qrmanager -> ldq * totalRank ] =
workingset -> ATwset [ workingset -> ldA * idx_row + totalRank ] ; } idx_row
++ ; } idx_row = mTotalWorkingEq - workingset -> nVar ; idx_row =
muIntScalarMax_sint32 ( 0 , idx_row ) ; for ( totalRank = 0 ; totalRank <=
nVar ; totalRank ++ ) { qrmanager -> jpvt [ totalRank ] = 0 ; } ev24u3t34s (
qrmanager , mTotalWorkingEq , workingset -> nVar ) ; tol = 100.0 * ( real_T )
workingset -> nVar * 2.2204460492503131E-16 ; totalRank =
muIntScalarMin_sint32 ( workingset -> nVar , mTotalWorkingEq ) ; totalRank +=
( totalRank - 1 ) * qrmanager -> ldq ; while ( ( totalRank > 0 ) && (
muDoubleScalarAbs ( qrmanager -> QR [ totalRank - 1 ] ) < tol ) ) { totalRank
= ( totalRank - qrmanager -> ldq ) - 1 ; idx_row ++ ; } if ( idx_row > 0 ) {
ibpfypmesd ( qrmanager , qrmanager -> mrows ) ; totalRank = 0 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( totalRank <= idx_row - 1 ) ) { if (
muDoubleScalarAbs ( iiflb1ff2c ( mTotalWorkingEq , qrmanager -> Q , ( (
mTotalWorkingEq - totalRank ) - 1 ) * qrmanager -> ldq + 1 , workingset ->
bwset ) ) >= tol ) { idx_row = - 1 ; exitg1 = true ; } else { totalRank ++ ;
} } } if ( idx_row > 0 ) { for ( totalRank = 0 ; totalRank < mTotalWorkingEq
; totalRank ++ ) { ghldpbp353 ( nVar + 1 , workingset -> ATwset , workingset
-> ldA * totalRank + 1 , qrmanager -> QR , qrmanager -> ldq * totalRank + 1 )
; } corexhtezj ( memspace -> workspace_int , workingset -> nWConstr [ 0 ] ,
idx_row , qrmanager , workingset -> nVar , mTotalWorkingEq ) ; mgtm5nekki (
memspace -> workspace_int , idx_row , memspace -> workspace_sort , 1 ,
mTotalWorkingEq ) ; for ( nVar = idx_row ; nVar > 0 ; nVar -- ) { jlmfojzqwn
( workingset , memspace -> workspace_int [ nVar - 1 ] ) ; } } } if ( (
idx_row != - 1 ) && ( workingset -> nActiveConstr <= qrmanager -> ldq ) ) {
bd0dpx4on5 ( workingset , qrmanager , memspace , 100.0 ) ; okWorkingSet =
fnhc5k4g5m ( memspace -> workspace_double , solution -> xstar , workingset ,
qrmanager ) ; guard1 = false ; if ( ! okWorkingSet ) { bd0dpx4on5 (
workingset , qrmanager , memspace , 1000.0 ) ; okWorkingSet = fnhc5k4g5m (
memspace -> workspace_double , solution -> xstar , workingset , qrmanager ) ;
if ( ! okWorkingSet ) { solution -> state = - 7 ; } else { guard1 = true ; }
} else { guard1 = true ; } if ( guard1 ) { if ( workingset -> nWConstr [ 0 ]
+ workingset -> nWConstr [ 1 ] == workingset -> nVar ) { tol = bj5i5xsfecsi (
workingset , solution -> xstar ) ; if ( tol > b_options ->
ConstraintTolerance ) { solution -> state = - 2 ; } } } } else { solution ->
state = - 3 ; k1j0nkbt5p ( workingset ) ; } } static char_T fwezxf5smx (
char_T x ) { static const char_T b [ 128 ] = { '\x00' , '\x01' , '\x02' ,
'\x03' , '\x04' , '\x05' , '\x06' , '\x07' , '\x08' , '	' , '\x0a' , '\x0b' ,
'\x0c' , '\x0d' , '\x0e' , '\x0f' , '\x10' , '\x11' , '\x12' , '\x13' ,
'\x14' , '\x15' , '\x16' , '\x17' , '\x18' , '\x19' , '\x1a' , '\x1b' ,
'\x1c' , '\x1d' , '\x1e' , '\x1f' , ' ' , '!' , '\"' , '#' , '$' , '%' , '&'
, '\'' , '(' , ')' , '*' , '+' , ',' , '-' , '.' , '/' , '0' , '1' , '2' ,
'3' , '4' , '5' , '6' , '7' , '8' , '9' , ':' , ';' , '<' , '=' , '>' , '?' ,
'@' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' ,
'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' ,
'z' , '[' , '\\' , ']' , '^' , '_' , '`' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f'
, 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's'
, 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '{' , '|' , '}' , '~' , '\x7f' }
; return b [ ( uint8_T ) x & 127 ] ; } static void pglr1fl5sa ( const real_T
f [ 6 ] , hzxbyztu40 * solution , eeqls2hdjr * memspace , i5yhexr3qk *
workingset , p4p24nnrhp * qrmanager , ljxdlfkika * cholmanager , nvpjvsx3xp *
objective , epfislbnrs * b_options , const f22haufkvl * runTimeOptions ) {
real_T oldObjLim ; real_T oldTolX ; int32_T PROBTYPE_ORIG ; int32_T TYPE ;
int32_T b_TYPE ; int32_T mConstr ; int32_T nVar ; int32_T nVarP1 ; boolean_T
exitg1 ; PROBTYPE_ORIG = workingset -> probType ; nVar = workingset -> nVar ;
nVarP1 = workingset -> nVar ; solution -> xstar [ workingset -> nVar ] =
solution -> maxConstr + 1.0 ; if ( workingset -> probType == 3 ) { mConstr =
1 ; } else { mConstr = 4 ; } bx32ivnacs ( workingset , mConstr ) ; k1j0nkbt5p
( workingset ) ; objective -> prev_objtype = objective -> objtype ; objective
-> prev_nvar = objective -> nvar ; objective -> prev_hasLinear = objective ->
hasLinear ; objective -> objtype = 5 ; objective -> nvar = nVarP1 + 1 ;
objective -> gammaScalar = 1.0 ; objective -> hasLinear = true ; oldObjLim =
b_options -> ObjectiveLimit ; oldTolX = b_options -> StepTolerance ;
b_options -> ObjectiveLimit = b_options -> ConstraintTolerance *
runTimeOptions -> ConstrRelTolFactor ; b_options -> StepTolerance =
1.4901161193847657E-10 ; solution -> fstar = l4otuy5m0u ( objective ,
memspace -> workspace_double , f , solution -> xstar ) ; solution -> state =
5 ; lg42f0n1fn ( f , solution , memspace , workingset , qrmanager ,
cholmanager , objective , b_options -> IterDisplayQP , b_options ->
PricingTolerance , b_options -> ObjectiveLimit , b_options ->
ConstraintTolerance , b_options -> StepTolerance , runTimeOptions ->
MaxIterations , runTimeOptions -> ConstrRelTolFactor , runTimeOptions ->
ProbRelTolFactor , runTimeOptions -> RemainFeasible ) ; if ( workingset ->
isActiveConstr [ ( workingset -> isActiveIdx [ 3 ] + workingset -> sizes [ 3
] ) - 2 ] ) { mConstr = workingset -> sizes [ 0 ] + workingset -> sizes [ 1 ]
; exitg1 = false ; while ( ( ! exitg1 ) && ( mConstr + 1 <= workingset ->
nActiveConstr ) ) { if ( ( workingset -> Wid [ mConstr ] == 4 ) && (
workingset -> Wlocalidx [ mConstr ] == workingset -> sizes [ 3 ] ) ) { b_TYPE
= workingset -> Wid [ mConstr ] - 1 ; workingset -> isActiveConstr [ (
workingset -> isActiveIdx [ workingset -> Wid [ mConstr ] - 1 ] + workingset
-> Wlocalidx [ mConstr ] ) - 2 ] = false ; nc0aidj43f ( workingset ,
workingset -> nActiveConstr , mConstr + 1 ) ; workingset -> nActiveConstr --
; workingset -> nWConstr [ b_TYPE ] -- ; exitg1 = true ; } else { mConstr ++
; } } } mConstr = workingset -> nActiveConstr ; b_TYPE = workingset -> sizes
[ 0 ] + workingset -> sizes [ 1 ] ; while ( ( mConstr > b_TYPE ) && ( mConstr
> nVar ) ) { TYPE = workingset -> Wid [ mConstr - 1 ] - 1 ; workingset ->
isActiveConstr [ ( workingset -> isActiveIdx [ workingset -> Wid [ mConstr -
1 ] - 1 ] + workingset -> Wlocalidx [ mConstr - 1 ] ) - 2 ] = false ;
nc0aidj43f ( workingset , workingset -> nActiveConstr , mConstr ) ;
workingset -> nActiveConstr -- ; workingset -> nWConstr [ TYPE ] -- ; mConstr
-- ; } solution -> maxConstr = solution -> xstar [ nVarP1 ] ; bx32ivnacs (
workingset , PROBTYPE_ORIG ) ; objective -> objtype = objective ->
prev_objtype ; objective -> nvar = objective -> prev_nvar ; objective ->
hasLinear = objective -> prev_hasLinear ; b_options -> ObjectiveLimit =
oldObjLim ; b_options -> StepTolerance = oldTolX ; } static void hftyudfsy5 (
const real_T f [ 6 ] , hzxbyztu40 * solution , eeqls2hdjr * memspace ,
i5yhexr3qk * workingset , ljxdlfkika * cholmanager , f22haufkvl
runTimeOptions , p4p24nnrhp * qrmanager , nvpjvsx3xp * objective ) {
epfislbnrs b_options ; i5yhexr3qk b_workingset ; real_T maxConstr_new ;
int32_T TYPE ; int32_T b_TYPE ; int32_T i ; int32_T mConstr ; boolean_T
b_bool ; static const char_T d_FiniteDifferenceType [ 7 ] = { 'f' , 'o' , 'r'
, 'w' , 'a' , 'r' , 'd' } ; static const char_T d_Algorithm [ 10 ] = { 'a' ,
'c' , 't' , 'i' , 'v' , 'e' , '-' , 's' , 'e' , 't' } ; static const char_T
d_SolverName [ 8 ] = { 'q' , 'u' , 'a' , 'd' , 'p' , 'r' , 'o' , 'g' } ;
static const char_T d_Display [ 5 ] = { 'f' , 'i' , 'n' , 'a' , 'l' } ;
int32_T exitg2 ; boolean_T exitg1 ; boolean_T guard1 = false ; for ( i = 0 ;
i < 7 ; i ++ ) { objective -> grad [ i ] = 0.0 ; } for ( i = 0 ; i < 6 ; i ++
) { objective -> Hx [ i ] = 0.0 ; } objective -> hasLinear = true ; objective
-> nvar = 6 ; objective -> maxVar = 7 ; objective -> beta = 0.0 ; objective
-> rho = 0.0 ; objective -> objtype = 3 ; objective -> prev_objtype = 3 ;
objective -> prev_nvar = 0 ; objective -> prev_hasLinear = false ; objective
-> gammaScalar = 0.0 ; solution -> iterations = 0 ; i = workingset -> nVar ;
for ( b_TYPE = 0 ; b_TYPE < workingset -> sizes [ 0 ] ; b_TYPE ++ ) {
solution -> xstar [ workingset -> indexFixed [ b_TYPE ] - 1 ] = workingset ->
ub [ workingset -> indexFixed [ b_TYPE ] - 1 ] ; } for ( b_TYPE = 0 ; b_TYPE
< workingset -> sizes [ 3 ] ; b_TYPE ++ ) { if ( workingset -> isActiveConstr
[ ( workingset -> isActiveIdx [ 3 ] + b_TYPE ) - 1 ] ) { solution -> xstar [
workingset -> indexLB [ b_TYPE ] - 1 ] = - workingset -> lb [ workingset ->
indexLB [ b_TYPE ] - 1 ] ; } } for ( b_TYPE = 0 ; b_TYPE < workingset ->
sizes [ 4 ] ; b_TYPE ++ ) { if ( workingset -> isActiveConstr [ ( workingset
-> isActiveIdx [ 4 ] + b_TYPE ) - 1 ] ) { solution -> xstar [ workingset ->
indexUB [ b_TYPE ] - 1 ] = workingset -> ub [ workingset -> indexUB [ b_TYPE
] - 1 ] ; } } fnwzkkrnuc ( solution , memspace , workingset , qrmanager ) ;
b_options . InitDamping = 0.01 ; for ( b_TYPE = 0 ; b_TYPE < 7 ; b_TYPE ++ )
{ b_options . FiniteDifferenceType [ b_TYPE ] = d_FiniteDifferenceType [
b_TYPE ] ; } b_options . SpecifyObjectiveGradient = false ; b_options .
ScaleProblem = false ; b_options . SpecifyConstraintGradient = false ;
b_options . NonFiniteSupport = true ; b_options . IterDisplaySQP = false ;
b_options . FiniteDifferenceStepSize = - 1.0 ; b_options .
MaxFunctionEvaluations = - 1.0 ; b_options . IterDisplayQP = false ;
b_options . PricingTolerance = 0.0 ; for ( b_TYPE = 0 ; b_TYPE < 10 ; b_TYPE
++ ) { b_options . Algorithm [ b_TYPE ] = d_Algorithm [ b_TYPE ] ; }
b_options . ObjectiveLimit = - 1.0E+20 ; b_options . ConstraintTolerance =
1.0E-6 ; b_options . OptimalityTolerance = 1.0E-8 ; b_options . StepTolerance
= 1.0E-8 ; b_options . MaxIterations = 200.0 ; b_options . FunctionTolerance
= ( rtInf ) ; for ( b_TYPE = 0 ; b_TYPE < 8 ; b_TYPE ++ ) { b_options .
SolverName [ b_TYPE ] = d_SolverName [ b_TYPE ] ; } b_options .
CheckGradients = false ; b_options . Diagnostics [ 0 ] = 'o' ; b_options .
Diagnostics [ 1 ] = 'f' ; b_options . Diagnostics [ 2 ] = 'f' ; b_options .
DiffMaxChange = ( rtInf ) ; b_options . DiffMinChange = 0.0 ; for ( b_TYPE =
0 ; b_TYPE < 5 ; b_TYPE ++ ) { b_options . Display [ b_TYPE ] = d_Display [
b_TYPE ] ; } b_options . FunValCheck [ 0 ] = 'o' ; b_options . FunValCheck [
1 ] = 'f' ; b_options . FunValCheck [ 2 ] = 'f' ; b_options . UseParallel =
false ; b_options . LinearSolver [ 0 ] = 'a' ; b_options . LinearSolver [ 1 ]
= 'u' ; b_options . LinearSolver [ 2 ] = 't' ; b_options . LinearSolver [ 3 ]
= 'o' ; b_options . SubproblemAlgorithm [ 0 ] = 'c' ; b_options .
SubproblemAlgorithm [ 1 ] = 'g' ; if ( solution -> state >= 0 ) { solution ->
iterations = 0 ; solution -> maxConstr = bj5i5xsfecsi ( workingset , solution
-> xstar ) ; guard1 = false ; if ( solution -> maxConstr > 1.0E-6 *
runTimeOptions . ConstrRelTolFactor ) { solution -> xstar [ workingset ->
nVar ] = solution -> maxConstr + 1.0 ; b_workingset = * workingset ; if (
workingset -> probType == 3 ) { b_TYPE = 1 ; } else { b_TYPE = 4 ; }
bx32ivnacs ( & b_workingset , b_TYPE ) ; k1j0nkbt5p ( & b_workingset ) ;
objective -> prev_objtype = 3 ; objective -> prev_nvar = 6 ; objective ->
prev_hasLinear = true ; objective -> objtype = 5 ; objective -> nvar =
workingset -> nVar + 1 ; objective -> gammaScalar = 1.0 ; objective ->
hasLinear = true ; b_options . ObjectiveLimit = 1.0E-6 * runTimeOptions .
ConstrRelTolFactor ; solution -> fstar = l4otuy5m0u ( objective , memspace ->
workspace_double , f , solution -> xstar ) ; solution -> state = 5 ;
lg42f0n1fn ( f , solution , memspace , & b_workingset , qrmanager ,
cholmanager , objective , false , 0.0 , b_options . ObjectiveLimit , 1.0E-6 ,
1.4901161193847657E-10 , runTimeOptions . MaxIterations , runTimeOptions .
ConstrRelTolFactor , runTimeOptions . ProbRelTolFactor , true ) ; if (
b_workingset . isActiveConstr [ ( b_workingset . isActiveIdx [ 3 ] +
b_workingset . sizes [ 3 ] ) - 2 ] ) { mConstr = b_workingset . sizes [ 0 ] +
b_workingset . sizes [ 1 ] ; exitg1 = false ; while ( ( ! exitg1 ) && (
mConstr + 1 <= b_workingset . nActiveConstr ) ) { if ( ( b_workingset . Wid [
mConstr ] == 4 ) && ( b_workingset . Wlocalidx [ mConstr ] == b_workingset .
sizes [ 3 ] ) ) { b_TYPE = b_workingset . Wid [ mConstr ] - 1 ; b_workingset
. isActiveConstr [ ( b_workingset . isActiveIdx [ b_workingset . Wid [
mConstr ] - 1 ] + b_workingset . Wlocalidx [ mConstr ] ) - 2 ] = false ;
nc0aidj43f ( & b_workingset , b_workingset . nActiveConstr , mConstr + 1 ) ;
b_workingset . nActiveConstr -- ; b_workingset . nWConstr [ b_TYPE ] -- ;
exitg1 = true ; } else { mConstr ++ ; } } } mConstr = b_workingset .
nActiveConstr ; b_TYPE = b_workingset . sizes [ 0 ] + b_workingset . sizes [
1 ] ; while ( ( mConstr > b_TYPE ) && ( mConstr > workingset -> nVar ) ) {
TYPE = b_workingset . Wid [ mConstr - 1 ] - 1 ; b_workingset . isActiveConstr
[ ( b_workingset . isActiveIdx [ b_workingset . Wid [ mConstr - 1 ] - 1 ] +
b_workingset . Wlocalidx [ mConstr - 1 ] ) - 2 ] = false ; nc0aidj43f ( &
b_workingset , b_workingset . nActiveConstr , mConstr ) ; b_workingset .
nActiveConstr -- ; b_workingset . nWConstr [ TYPE ] -- ; mConstr -- ; }
solution -> maxConstr = solution -> xstar [ workingset -> nVar ] ; bx32ivnacs
( & b_workingset , workingset -> probType ) ; objective -> objtype =
objective -> prev_objtype ; objective -> nvar = objective -> prev_nvar ;
objective -> hasLinear = objective -> prev_hasLinear ; b_options .
ObjectiveLimit = - 1.0E+20 ; b_options . StepTolerance = 1.0E-8 ; *
workingset = b_workingset ; if ( solution -> state == 0 ) { } else { solution
-> maxConstr = bj5i5xsfecsi ( & b_workingset , solution -> xstar ) ; *
workingset = b_workingset ; if ( solution -> maxConstr > 1.0E-6 *
runTimeOptions . ConstrRelTolFactor ) { ghldpbp353rw ( b_workingset .
mConstrMax , 0.0 , solution -> lambda ) ; solution -> fstar = l4otuy5m0u (
objective , memspace -> workspace_double , f , solution -> xstar ) ; solution
-> state = - 2 ; } else { if ( solution -> maxConstr > 0.0 ) { ghldpbp353rwes
( i , solution -> xstar , solution -> searchDir ) ; fnwzkkrnucs ( solution ,
memspace , & b_workingset , qrmanager , & b_options ) ; * workingset =
b_workingset ; maxConstr_new = bj5i5xsfecsi ( workingset , solution -> xstar
) ; if ( maxConstr_new >= solution -> maxConstr ) { solution -> maxConstr =
maxConstr_new ; ghldpbp353rwes ( i , solution -> searchDir , solution ->
xstar ) ; } } guard1 = true ; } } } else { guard1 = true ; } if ( guard1 ) {
lg42f0n1fn ( f , solution , memspace , workingset , qrmanager , cholmanager ,
objective , false , 0.0 , - 1.0E+20 , 1.0E-6 , 1.0E-8 , runTimeOptions .
MaxIterations , runTimeOptions . ConstrRelTolFactor , runTimeOptions .
ProbRelTolFactor , true ) ; b_bool = false ; i = 0 ; do { exitg2 = 0 ; if ( i
< 8 ) { if ( fwezxf5smx ( b_options . SolverName [ i ] ) != fwezxf5smx (
d_SolverName [ i ] ) ) { exitg2 = 1 ; } else { i ++ ; } } else { b_bool =
true ; exitg2 = 1 ; } } while ( exitg2 == 0 ) ; if ( b_bool && ( solution ->
state != - 6 ) ) { solution -> maxConstr = bj5i5xsfecsi ( workingset ,
solution -> xstar ) ; kw3r0ywtvg ( solution , objective , workingset -> nVar
, workingset -> ldA , workingset -> ATwset , workingset -> nActiveConstr ,
memspace -> workspace_double ) ; runTimeOptions . RemainFeasible = false ;
while ( ( solution -> iterations < runTimeOptions . MaxIterations ) && ( (
solution -> state == - 7 ) || ( ( solution -> state == 1 ) && ( ( solution ->
maxConstr > b_options . ConstraintTolerance * runTimeOptions .
ConstrRelTolFactor ) || ( solution -> firstorderopt > b_options .
OptimalityTolerance * runTimeOptions . ProbRelTolFactor ) ) ) ) ) {
fnhc5k4g5m ( memspace -> workspace_double , solution -> xstar , workingset ,
qrmanager ) ; fnwzkkrnucs ( solution , memspace , workingset , qrmanager , &
b_options ) ; pglr1fl5sa ( f , solution , memspace , workingset , qrmanager ,
cholmanager , objective , & b_options , & runTimeOptions ) ; lg42f0n1fn ( f ,
solution , memspace , workingset , qrmanager , cholmanager , objective ,
b_options . IterDisplayQP , b_options . PricingTolerance , b_options .
ObjectiveLimit , b_options . ConstraintTolerance , b_options . StepTolerance
, runTimeOptions . MaxIterations , runTimeOptions . ConstrRelTolFactor ,
runTimeOptions . ProbRelTolFactor , false ) ; solution -> maxConstr =
bj5i5xsfecsi ( workingset , solution -> xstar ) ; kw3r0ywtvg ( solution ,
objective , workingset -> nVar , workingset -> ldA , workingset -> ATwset ,
workingset -> nActiveConstr , memspace -> workspace_double ) ; } } } } } void
MdlInitialize ( void ) { boolean_T tmp ; rtDW . pywgroe530 = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { rtX . k5eqbluoil [ 0 ] = - 15.0 ; rtX .
k5eqbluoil [ 1 ] = 15.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp
) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . pywgroe530 = !
tmp ; } else { rtDW . pywgroe530 = 1 ; } rtX . ngdokjdgsy [ 0 ] = 0.0 ; rtX .
ngdokjdgsy [ 1 ] = 0.0 ; } rtDW . bp1r1xfrdc = 1 ; if ( ssIsFirstInitCond (
rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . bp1r1xfrdc = ! tmp ; }
else { rtDW . bp1r1xfrdc = 1 ; } rtX . iusxhffkpj [ 0 ] = - 15.0 ; rtX .
iusxhffkpj [ 1 ] = - 15.0 ; } rtDW . gc4n03nzfn = 1 ; if ( ssIsFirstInitCond
( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . gc4n03nzfn = ! tmp ; }
else { rtDW . gc4n03nzfn = 1 ; } rtX . ek3saalov4 [ 0 ] = 0.0 ; rtX .
ek3saalov4 [ 1 ] = 0.0 ; } rtDW . acg1flwbux = 1 ; if ( ssIsFirstInitCond (
rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . acg1flwbux = ! tmp ; }
else { rtDW . acg1flwbux = 1 ; } rtX . g0kkdzau41 [ 0 ] = 15.0 ; rtX .
g0kkdzau41 [ 1 ] = 0.0 ; } rtDW . fnx2sqboij = 1 ; if ( ssIsFirstInitCond (
rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . fnx2sqboij = ! tmp ; }
else { rtDW . fnx2sqboij = 1 ; } rtX . e0vh2jr0wr [ 0 ] = 0.0 ; rtX .
e0vh2jr0wr [ 1 ] = 0.0 ; } rtDW . gvjxkecdgi = 1 ; if ( ssIsFirstInitCond (
rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . gvjxkecdgi = ! tmp ; }
else { rtDW . gvjxkecdgi = 1 ; } } rtX . bnr04lpwtw [ 0 ] = rtP .
PIDController_InitialConditionForIntegrator ; rtX . e32azti1sy [ 0 ] = rtP .
PIDController_InitialConditionForFilter ; rtX . noqzx53y4f [ 0 ] = rtP .
PIDController_InitialConditionForIntegrator_labkggpuwp ; rtX . ocre3hnxix [ 0
] = rtP . PIDController_InitialConditionForFilter_de1ys3ahhh ; rtX .
enmqgwm1ac [ 0 ] = rtP .
PIDController_InitialConditionForIntegrator_lz4wascz0h ; rtX . bssjoyxvjz [ 0
] = rtP . PIDController_InitialConditionForFilter_fvwb31ti1d ; rtX .
bnr04lpwtw [ 1 ] = rtP . PIDController_InitialConditionForIntegrator ; rtX .
e32azti1sy [ 1 ] = rtP . PIDController_InitialConditionForFilter ; rtX .
noqzx53y4f [ 1 ] = rtP .
PIDController_InitialConditionForIntegrator_labkggpuwp ; rtX . ocre3hnxix [ 1
] = rtP . PIDController_InitialConditionForFilter_de1ys3ahhh ; rtX .
enmqgwm1ac [ 1 ] = rtP .
PIDController_InitialConditionForIntegrator_lz4wascz0h ; rtX . bssjoyxvjz [ 1
] = rtP . PIDController_InitialConditionForFilter_fvwb31ti1d ; rtX .
bnr04lpwtw [ 2 ] = rtP . PIDController_InitialConditionForIntegrator ; rtX .
e32azti1sy [ 2 ] = rtP . PIDController_InitialConditionForFilter ; rtX .
noqzx53y4f [ 2 ] = rtP .
PIDController_InitialConditionForIntegrator_labkggpuwp ; rtX . ocre3hnxix [ 2
] = rtP . PIDController_InitialConditionForFilter_de1ys3ahhh ; rtX .
enmqgwm1ac [ 2 ] = rtP .
PIDController_InitialConditionForIntegrator_lz4wascz0h ; rtX . bssjoyxvjz [ 2
] = rtP . PIDController_InitialConditionForFilter_fvwb31ti1d ; rtX .
bnr04lpwtw [ 3 ] = rtP . PIDController_InitialConditionForIntegrator ; rtX .
e32azti1sy [ 3 ] = rtP . PIDController_InitialConditionForFilter ; rtX .
noqzx53y4f [ 3 ] = rtP .
PIDController_InitialConditionForIntegrator_labkggpuwp ; rtX . ocre3hnxix [ 3
] = rtP . PIDController_InitialConditionForFilter_de1ys3ahhh ; rtX .
enmqgwm1ac [ 3 ] = rtP .
PIDController_InitialConditionForIntegrator_lz4wascz0h ; rtX . bssjoyxvjz [ 3
] = rtP . PIDController_InitialConditionForFilter_fvwb31ti1d ; } void
MdlStart ( void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} rtB . atzbhuadkh [ 0 ] = rtP . initialconditions_Value [ 0 ] ; rtB .
ofcujety0u [ 0 ] = rtP . initialconditions_Value_eczelweelu [ 0 ] ; rtB .
nwpwlpuzte [ 0 ] = rtP . initialconditions_Value_mwviqzbxqh [ 0 ] ; rtB .
atzbhuadkh [ 1 ] = rtP . initialconditions_Value [ 1 ] ; rtB . ofcujety0u [ 1
] = rtP . initialconditions_Value_eczelweelu [ 1 ] ; rtB . nwpwlpuzte [ 1 ] =
rtP . initialconditions_Value_mwviqzbxqh [ 1 ] ; rtB . atzbhuadkh [ 2 ] = rtP
. initialconditions_Value [ 2 ] ; rtB . ofcujety0u [ 2 ] = rtP .
initialconditions_Value_eczelweelu [ 2 ] ; rtB . nwpwlpuzte [ 2 ] = rtP .
initialconditions_Value_mwviqzbxqh [ 2 ] ; rtB . atzbhuadkh [ 3 ] = rtP .
initialconditions_Value [ 3 ] ; rtB . ofcujety0u [ 3 ] = rtP .
initialconditions_Value_eczelweelu [ 3 ] ; rtB . nwpwlpuzte [ 3 ] = rtP .
initialconditions_Value_mwviqzbxqh [ 3 ] ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { eeqls2hdjr memspace ; f22haufkvl expl_temp ;
hzxbyztu40 solution ; i5yhexr3qk WorkingSet ; nvpjvsx3xp QPObjective ;
p4p24nnrhp QRManager ; ptrdiff_t K ; ptrdiff_t LDA ; ptrdiff_t LDB ;
ptrdiff_t LDC ; ptrdiff_t M ; ptrdiff_t N ; real_T ny2lc1ygvf [ 108 ] ;
real_T cep3wejvm1 [ 54 ] ; real_T tmp [ 12 ] ; real_T tmp_p [ 12 ] ; real_T
t145_p [ 9 ] ; real_T f [ 6 ] ; real_T t109 ; real_T t110 ; real_T t111 ;
real_T t112 ; real_T t113 ; real_T t114 ; real_T t12 ; real_T t124 ; real_T
t125 ; real_T t126 ; real_T t127 ; real_T t128 ; real_T t129 ; real_T t13 ;
real_T t130 ; real_T t131 ; real_T t132 ; real_T t133 ; real_T t134 ; real_T
t135 ; real_T t136 ; real_T t137 ; real_T t138 ; real_T t139 ; real_T t14 ;
real_T t140 ; real_T t141 ; real_T t142 ; real_T t143 ; real_T t144 ; real_T
t145 ; real_T t146 ; real_T t147 ; real_T t148 ; real_T t149 ; real_T t15 ;
real_T t150 ; real_T t16 ; real_T t160 ; real_T t161 ; real_T t162 ; real_T
t17 ; real_T t18 ; real_T t19 ; real_T t193 ; real_T t195 ; real_T t197 ;
real_T t20 ; real_T t21 ; real_T t22 ; real_T t23 ; real_T t24 ; real_T t25 ;
real_T t26 ; real_T t27 ; real_T t28 ; real_T t29 ; real_T t30 ; real_T t31 ;
real_T t32 ; real_T t33 ; real_T t34 ; real_T t35 ; real_T t36 ; real_T t37 ;
real_T t38 ; real_T t39 ; real_T t40 ; real_T t41 ; real_T t42 ; real_T t43 ;
real_T t44 ; real_T t45 ; real_T t46 ; real_T t47 ; real_T t48 ; real_T t49 ;
real_T t50 ; real_T t51 ; real_T t52 ; real_T t53 ; real_T t54 ; real_T t55 ;
real_T t56 ; real_T t57 ; real_T t58 ; real_T t59 ; real_T t60 ; real_T t61 ;
real_T t62 ; real_T t63 ; real_T t64 ; real_T t65 ; real_T t66 ; real_T t67 ;
real_T t68 ; real_T t69 ; real_T t70 ; real_T t71 ; real_T t72 ; int32_T
colPos ; int32_T i ; int32_T idx_row ; char_T TRANSA ; char_T TRANSB ; static
const int8_T H [ 36 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0
, 0 , 0 , 1 } ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtDW .
pywgroe530 != 0 ) { rtX . k5eqbluoil [ 0 ] = rtB . atzbhuadkh [ 2 ] ; rtX .
k5eqbluoil [ 1 ] = rtB . atzbhuadkh [ 3 ] ; } rtB . jv0m1srrja [ 0 ] = rtX .
k5eqbluoil [ 0 ] ; rtB . jv0m1srrja [ 1 ] = rtX . k5eqbluoil [ 1 ] ; if (
rtDW . bp1r1xfrdc != 0 ) { rtX . ngdokjdgsy [ 0 ] = rtB . atzbhuadkh [ 0 ] ;
rtX . ngdokjdgsy [ 1 ] = rtB . atzbhuadkh [ 1 ] ; } if ( rtX . ngdokjdgsy [ 0
] >= rtP . Integrator_UpperSat ) { if ( rtX . ngdokjdgsy [ 0 ] != rtP .
Integrator_UpperSat ) { rtX . ngdokjdgsy [ 0 ] = rtP . Integrator_UpperSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . buyrvmnubo [ 0
] = 3 ; } else if ( rtX . ngdokjdgsy [ 0 ] <= rtP . Integrator_LowerSat ) {
if ( rtX . ngdokjdgsy [ 0 ] != rtP . Integrator_LowerSat ) { rtX . ngdokjdgsy
[ 0 ] = rtP . Integrator_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . buyrvmnubo [ 0
] = 4 ; } else { if ( rtDW . buyrvmnubo [ 0 ] != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . buyrvmnubo [ 0
] = 0 ; } if ( rtX . ngdokjdgsy [ 1 ] >= rtP . Integrator_UpperSat ) { if (
rtX . ngdokjdgsy [ 1 ] != rtP . Integrator_UpperSat ) { rtX . ngdokjdgsy [ 1
] = rtP . Integrator_UpperSat ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . buyrvmnubo [ 1 ] = 3 ; } else if ( rtX . ngdokjdgsy [ 1 ] <=
rtP . Integrator_LowerSat ) { if ( rtX . ngdokjdgsy [ 1 ] != rtP .
Integrator_LowerSat ) { rtX . ngdokjdgsy [ 1 ] = rtP . Integrator_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . buyrvmnubo [ 1
] = 4 ; } else { if ( rtDW . buyrvmnubo [ 1 ] != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . buyrvmnubo [ 1
] = 0 ; } rtB . b1rs1wlrjx [ 0 ] = rtX . ngdokjdgsy [ 0 ] ; rtB . b1rs1wlrjx
[ 1 ] = rtX . ngdokjdgsy [ 1 ] ; if ( rtDW . gc4n03nzfn != 0 ) { rtX .
iusxhffkpj [ 0 ] = rtB . ofcujety0u [ 2 ] ; rtX . iusxhffkpj [ 1 ] = rtB .
ofcujety0u [ 3 ] ; } rtB . kmh4pywknr [ 0 ] = rtX . iusxhffkpj [ 0 ] ; rtB .
kmh4pywknr [ 1 ] = rtX . iusxhffkpj [ 1 ] ; } else { rtB . jv0m1srrja [ 0 ] =
rtX . k5eqbluoil [ 0 ] ; rtB . jv0m1srrja [ 1 ] = rtX . k5eqbluoil [ 1 ] ;
rtB . b1rs1wlrjx [ 0 ] = rtX . ngdokjdgsy [ 0 ] ; rtB . kmh4pywknr [ 0 ] =
rtX . iusxhffkpj [ 0 ] ; rtB . b1rs1wlrjx [ 1 ] = rtX . ngdokjdgsy [ 1 ] ;
rtB . kmh4pywknr [ 1 ] = rtX . iusxhffkpj [ 1 ] ; } if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtDW . acg1flwbux != 0 ) { rtX .
ek3saalov4 [ 0 ] = rtB . ofcujety0u [ 0 ] ; rtX . ek3saalov4 [ 1 ] = rtB .
ofcujety0u [ 1 ] ; } if ( rtX . ek3saalov4 [ 0 ] >= rtP .
Integrator_UpperSat_nzhvzzdcx2 ) { if ( rtX . ek3saalov4 [ 0 ] != rtP .
Integrator_UpperSat_nzhvzzdcx2 ) { rtX . ek3saalov4 [ 0 ] = rtP .
Integrator_UpperSat_nzhvzzdcx2 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . frkr0zsk1e [ 0 ] = 3 ; } else if ( rtX . ek3saalov4 [ 0 ] <=
rtP . Integrator_LowerSat_li4gnjpeq5 ) { if ( rtX . ek3saalov4 [ 0 ] != rtP .
Integrator_LowerSat_li4gnjpeq5 ) { rtX . ek3saalov4 [ 0 ] = rtP .
Integrator_LowerSat_li4gnjpeq5 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . frkr0zsk1e [ 0 ] = 4 ; } else { if ( rtDW . frkr0zsk1e [ 0 ]
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
frkr0zsk1e [ 0 ] = 0 ; } if ( rtX . ek3saalov4 [ 1 ] >= rtP .
Integrator_UpperSat_nzhvzzdcx2 ) { if ( rtX . ek3saalov4 [ 1 ] != rtP .
Integrator_UpperSat_nzhvzzdcx2 ) { rtX . ek3saalov4 [ 1 ] = rtP .
Integrator_UpperSat_nzhvzzdcx2 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . frkr0zsk1e [ 1 ] = 3 ; } else if ( rtX . ek3saalov4 [ 1 ] <=
rtP . Integrator_LowerSat_li4gnjpeq5 ) { if ( rtX . ek3saalov4 [ 1 ] != rtP .
Integrator_LowerSat_li4gnjpeq5 ) { rtX . ek3saalov4 [ 1 ] = rtP .
Integrator_LowerSat_li4gnjpeq5 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . frkr0zsk1e [ 1 ] = 4 ; } else { if ( rtDW . frkr0zsk1e [ 1 ]
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
frkr0zsk1e [ 1 ] = 0 ; } rtB . f0qgskmy2i [ 0 ] = rtX . ek3saalov4 [ 0 ] ;
rtB . f0qgskmy2i [ 1 ] = rtX . ek3saalov4 [ 1 ] ; if ( rtDW . fnx2sqboij != 0
) { rtX . g0kkdzau41 [ 0 ] = rtB . nwpwlpuzte [ 2 ] ; rtX . g0kkdzau41 [ 1 ]
= rtB . nwpwlpuzte [ 3 ] ; } rtB . msrgcxqeju [ 0 ] = rtX . g0kkdzau41 [ 0 ]
; rtB . msrgcxqeju [ 1 ] = rtX . g0kkdzau41 [ 1 ] ; } else { rtB . f0qgskmy2i
[ 0 ] = rtX . ek3saalov4 [ 0 ] ; rtB . msrgcxqeju [ 0 ] = rtX . g0kkdzau41 [
0 ] ; rtB . f0qgskmy2i [ 1 ] = rtX . ek3saalov4 [ 1 ] ; rtB . msrgcxqeju [ 1
] = rtX . g0kkdzau41 [ 1 ] ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) { if (
rtDW . gvjxkecdgi != 0 ) { rtX . e0vh2jr0wr [ 0 ] = rtB . nwpwlpuzte [ 0 ] ;
rtX . e0vh2jr0wr [ 1 ] = rtB . nwpwlpuzte [ 1 ] ; } if ( rtX . e0vh2jr0wr [ 0
] >= rtP . Integrator_UpperSat_lonuxufgp5 ) { if ( rtX . e0vh2jr0wr [ 0 ] !=
rtP . Integrator_UpperSat_lonuxufgp5 ) { rtX . e0vh2jr0wr [ 0 ] = rtP .
Integrator_UpperSat_lonuxufgp5 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . pfob24qucz [ 0 ] = 3 ; } else if ( rtX . e0vh2jr0wr [ 0 ] <=
rtP . Integrator_LowerSat_np30azhqa2 ) { if ( rtX . e0vh2jr0wr [ 0 ] != rtP .
Integrator_LowerSat_np30azhqa2 ) { rtX . e0vh2jr0wr [ 0 ] = rtP .
Integrator_LowerSat_np30azhqa2 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . pfob24qucz [ 0 ] = 4 ; } else { if ( rtDW . pfob24qucz [ 0 ]
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
pfob24qucz [ 0 ] = 0 ; } if ( rtX . e0vh2jr0wr [ 1 ] >= rtP .
Integrator_UpperSat_lonuxufgp5 ) { if ( rtX . e0vh2jr0wr [ 1 ] != rtP .
Integrator_UpperSat_lonuxufgp5 ) { rtX . e0vh2jr0wr [ 1 ] = rtP .
Integrator_UpperSat_lonuxufgp5 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . pfob24qucz [ 1 ] = 3 ; } else if ( rtX . e0vh2jr0wr [ 1 ] <=
rtP . Integrator_LowerSat_np30azhqa2 ) { if ( rtX . e0vh2jr0wr [ 1 ] != rtP .
Integrator_LowerSat_np30azhqa2 ) { rtX . e0vh2jr0wr [ 1 ] = rtP .
Integrator_LowerSat_np30azhqa2 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . pfob24qucz [ 1 ] = 4 ; } else { if ( rtDW . pfob24qucz [ 1 ]
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
pfob24qucz [ 1 ] = 0 ; } rtB . d22xigfax5 [ 0 ] = rtX . e0vh2jr0wr [ 0 ] ;
rtB . d22xigfax5 [ 1 ] = rtX . e0vh2jr0wr [ 1 ] ; } else { rtB . d22xigfax5 [
0 ] = rtX . e0vh2jr0wr [ 0 ] ; rtB . d22xigfax5 [ 1 ] = rtX . e0vh2jr0wr [ 1
] ; } rtB . n1m2hbrqv1 [ 0 ] = rtB . jv0m1srrja [ 0 ] ; rtB . n1m2hbrqv1 [ 2
] = rtB . kmh4pywknr [ 0 ] ; rtB . n1m2hbrqv1 [ 4 ] = rtB . msrgcxqeju [ 0 ]
; rtB . hl0uuhzuvt [ 0 ] = rtB . b1rs1wlrjx [ 0 ] ; rtB . hl0uuhzuvt [ 2 ] =
rtB . f0qgskmy2i [ 0 ] ; rtB . hl0uuhzuvt [ 4 ] = rtB . d22xigfax5 [ 0 ] ;
rtB . n1m2hbrqv1 [ 1 ] = rtB . jv0m1srrja [ 1 ] ; rtB . n1m2hbrqv1 [ 3 ] =
rtB . kmh4pywknr [ 1 ] ; rtB . n1m2hbrqv1 [ 5 ] = rtB . msrgcxqeju [ 1 ] ;
rtB . hl0uuhzuvt [ 1 ] = rtB . b1rs1wlrjx [ 1 ] ; rtB . hl0uuhzuvt [ 3 ] =
rtB . f0qgskmy2i [ 1 ] ; rtB . hl0uuhzuvt [ 5 ] = rtB . d22xigfax5 [ 1 ] ;
for ( i = 0 ; i < 6 ; i ++ ) { rtB . dbfquspqdj [ i ] = rtB . n1m2hbrqv1 [ i
] ; rtB . dbfquspqdj [ i + 6 ] = rtB . hl0uuhzuvt [ i ] ; } rtB . pyccux13oh
[ 0 ] = rtP . Ref_p1_Value [ 0 ] - rtB . dbfquspqdj [ 0 ] ; rtB . iclmzwxqs3
[ 0 ] = rtP . Ref_v1_Value [ 0 ] - rtB . dbfquspqdj [ 6 ] ; rtB . pyccux13oh
[ 1 ] = rtP . Ref_p1_Value [ 1 ] - rtB . dbfquspqdj [ 1 ] ; rtB . iclmzwxqs3
[ 1 ] = rtP . Ref_v1_Value [ 1 ] - rtB . dbfquspqdj [ 7 ] ; rtB . mhudpacpgy
[ 0 ] = rtX . bnr04lpwtw [ 0 ] ; rtB . mhudpacpgy [ 1 ] = rtX . bnr04lpwtw [
1 ] ; rtB . mhudpacpgy [ 2 ] = rtX . bnr04lpwtw [ 2 ] ; rtB . mhudpacpgy [ 3
] = rtX . bnr04lpwtw [ 3 ] ; rtB . m2yincydfk [ 0 ] = rtP . PIDController_D *
rtB . pyccux13oh [ 0 ] ; rtB . m2yincydfk [ 2 ] = rtP . PIDController_D * rtB
. iclmzwxqs3 [ 0 ] ; rtB . m2yincydfk [ 1 ] = rtP . PIDController_D * rtB .
pyccux13oh [ 1 ] ; rtB . m2yincydfk [ 3 ] = rtP . PIDController_D * rtB .
iclmzwxqs3 [ 1 ] ; rtB . kbcqb2x3yb [ 0 ] = rtX . e32azti1sy [ 0 ] ; rtB .
hhdwa0bhgm [ 0 ] = rtB . m2yincydfk [ 0 ] - rtB . kbcqb2x3yb [ 0 ] ; rtB .
h1kv0ninpj [ 0 ] = rtP . PIDController_N * rtB . hhdwa0bhgm [ 0 ] ; rtB .
kbcqb2x3yb [ 1 ] = rtX . e32azti1sy [ 1 ] ; rtB . hhdwa0bhgm [ 1 ] = rtB .
m2yincydfk [ 1 ] - rtB . kbcqb2x3yb [ 1 ] ; rtB . h1kv0ninpj [ 1 ] = rtP .
PIDController_N * rtB . hhdwa0bhgm [ 1 ] ; rtB . kbcqb2x3yb [ 2 ] = rtX .
e32azti1sy [ 2 ] ; rtB . hhdwa0bhgm [ 2 ] = rtB . m2yincydfk [ 2 ] - rtB .
kbcqb2x3yb [ 2 ] ; rtB . h1kv0ninpj [ 2 ] = rtP . PIDController_N * rtB .
hhdwa0bhgm [ 2 ] ; rtB . kbcqb2x3yb [ 3 ] = rtX . e32azti1sy [ 3 ] ; rtB .
hhdwa0bhgm [ 3 ] = rtB . m2yincydfk [ 3 ] - rtB . kbcqb2x3yb [ 3 ] ; rtB .
h1kv0ninpj [ 3 ] = rtP . PIDController_N * rtB . hhdwa0bhgm [ 3 ] ; rtB .
ksirtn35v4 [ 0 ] = ( ( rtP . PIDController_P * rtB . pyccux13oh [ 0 ] + rtB .
mhudpacpgy [ 0 ] ) + rtB . h1kv0ninpj [ 0 ] ) + ( ( rtP . PIDController_P *
rtB . iclmzwxqs3 [ 0 ] + rtB . mhudpacpgy [ 2 ] ) + rtB . h1kv0ninpj [ 2 ] )
; rtB . oqcs3qeeli [ 0 ] = rtP . Ref_p1_Value_opouedc3dv [ 0 ] - rtB .
dbfquspqdj [ 2 ] ; rtB . n1unafbpjc [ 0 ] = rtP . Ref_v1_Value_dovcbbjwsu [ 0
] - rtB . dbfquspqdj [ 8 ] ; rtB . ksirtn35v4 [ 1 ] = ( ( rtP .
PIDController_P * rtB . pyccux13oh [ 1 ] + rtB . mhudpacpgy [ 1 ] ) + rtB .
h1kv0ninpj [ 1 ] ) + ( ( rtP . PIDController_P * rtB . iclmzwxqs3 [ 1 ] + rtB
. mhudpacpgy [ 3 ] ) + rtB . h1kv0ninpj [ 3 ] ) ; rtB . oqcs3qeeli [ 1 ] =
rtP . Ref_p1_Value_opouedc3dv [ 1 ] - rtB . dbfquspqdj [ 3 ] ; rtB .
n1unafbpjc [ 1 ] = rtP . Ref_v1_Value_dovcbbjwsu [ 1 ] - rtB . dbfquspqdj [ 9
] ; rtB . fclztygbns [ 0 ] = rtX . noqzx53y4f [ 0 ] ; rtB . fclztygbns [ 1 ]
= rtX . noqzx53y4f [ 1 ] ; rtB . fclztygbns [ 2 ] = rtX . noqzx53y4f [ 2 ] ;
rtB . fclztygbns [ 3 ] = rtX . noqzx53y4f [ 3 ] ; rtB . ktrk2zt5rh [ 0 ] =
rtP . PIDController_D_e1feedjw5h * rtB . oqcs3qeeli [ 0 ] ; rtB . ktrk2zt5rh
[ 2 ] = rtP . PIDController_D_e1feedjw5h * rtB . n1unafbpjc [ 0 ] ; rtB .
ktrk2zt5rh [ 1 ] = rtP . PIDController_D_e1feedjw5h * rtB . oqcs3qeeli [ 1 ]
; rtB . ktrk2zt5rh [ 3 ] = rtP . PIDController_D_e1feedjw5h * rtB .
n1unafbpjc [ 1 ] ; rtB . jgom23aadi [ 0 ] = rtX . ocre3hnxix [ 0 ] ; rtB .
muzj5q2qkv [ 0 ] = rtB . ktrk2zt5rh [ 0 ] - rtB . jgom23aadi [ 0 ] ; rtB .
gc45mejfib [ 0 ] = rtP . PIDController_N_fjaeixuxyv * rtB . muzj5q2qkv [ 0 ]
; rtB . jgom23aadi [ 1 ] = rtX . ocre3hnxix [ 1 ] ; rtB . muzj5q2qkv [ 1 ] =
rtB . ktrk2zt5rh [ 1 ] - rtB . jgom23aadi [ 1 ] ; rtB . gc45mejfib [ 1 ] =
rtP . PIDController_N_fjaeixuxyv * rtB . muzj5q2qkv [ 1 ] ; rtB . jgom23aadi
[ 2 ] = rtX . ocre3hnxix [ 2 ] ; rtB . muzj5q2qkv [ 2 ] = rtB . ktrk2zt5rh [
2 ] - rtB . jgom23aadi [ 2 ] ; rtB . gc45mejfib [ 2 ] = rtP .
PIDController_N_fjaeixuxyv * rtB . muzj5q2qkv [ 2 ] ; rtB . jgom23aadi [ 3 ]
= rtX . ocre3hnxix [ 3 ] ; rtB . muzj5q2qkv [ 3 ] = rtB . ktrk2zt5rh [ 3 ] -
rtB . jgom23aadi [ 3 ] ; rtB . gc45mejfib [ 3 ] = rtP .
PIDController_N_fjaeixuxyv * rtB . muzj5q2qkv [ 3 ] ; rtB . nkbh0ad3dz [ 0 ]
= ( ( rtP . PIDController_P_ahca11nczu * rtB . oqcs3qeeli [ 0 ] + rtB .
fclztygbns [ 0 ] ) + rtB . gc45mejfib [ 0 ] ) + ( ( rtP .
PIDController_P_ahca11nczu * rtB . n1unafbpjc [ 0 ] + rtB . fclztygbns [ 2 ]
) + rtB . gc45mejfib [ 2 ] ) ; rtB . kgqxquypz3 [ 0 ] = rtP .
Ref_p1_Value_bmazuu21z2 [ 0 ] - rtB . dbfquspqdj [ 4 ] ; rtB . prrur2jflh [ 0
] = rtP . Ref_v1_Value_gcvb1oqdbs [ 0 ] - rtB . dbfquspqdj [ 10 ] ; rtB .
nkbh0ad3dz [ 1 ] = ( ( rtP . PIDController_P_ahca11nczu * rtB . oqcs3qeeli [
1 ] + rtB . fclztygbns [ 1 ] ) + rtB . gc45mejfib [ 1 ] ) + ( ( rtP .
PIDController_P_ahca11nczu * rtB . n1unafbpjc [ 1 ] + rtB . fclztygbns [ 3 ]
) + rtB . gc45mejfib [ 3 ] ) ; rtB . kgqxquypz3 [ 1 ] = rtP .
Ref_p1_Value_bmazuu21z2 [ 1 ] - rtB . dbfquspqdj [ 5 ] ; rtB . prrur2jflh [ 1
] = rtP . Ref_v1_Value_gcvb1oqdbs [ 1 ] - rtB . dbfquspqdj [ 11 ] ; rtB .
iqoi20gpai [ 0 ] = rtX . enmqgwm1ac [ 0 ] ; rtB . iqoi20gpai [ 1 ] = rtX .
enmqgwm1ac [ 1 ] ; rtB . iqoi20gpai [ 2 ] = rtX . enmqgwm1ac [ 2 ] ; rtB .
iqoi20gpai [ 3 ] = rtX . enmqgwm1ac [ 3 ] ; rtB . lfiv14p2kf [ 0 ] = rtP .
PIDController_D_pmnoqidxhh * rtB . kgqxquypz3 [ 0 ] ; rtB . lfiv14p2kf [ 2 ]
= rtP . PIDController_D_pmnoqidxhh * rtB . prrur2jflh [ 0 ] ; rtB .
lfiv14p2kf [ 1 ] = rtP . PIDController_D_pmnoqidxhh * rtB . kgqxquypz3 [ 1 ]
; rtB . lfiv14p2kf [ 3 ] = rtP . PIDController_D_pmnoqidxhh * rtB .
prrur2jflh [ 1 ] ; rtB . ae5dn11ynt [ 0 ] = rtX . bssjoyxvjz [ 0 ] ; rtB .
gni3bpus51 [ 0 ] = rtB . lfiv14p2kf [ 0 ] - rtB . ae5dn11ynt [ 0 ] ; rtB .
lmwzw5w0jv [ 0 ] = rtP . PIDController_N_by1f323fn4 * rtB . gni3bpus51 [ 0 ]
; rtB . ae5dn11ynt [ 1 ] = rtX . bssjoyxvjz [ 1 ] ; rtB . gni3bpus51 [ 1 ] =
rtB . lfiv14p2kf [ 1 ] - rtB . ae5dn11ynt [ 1 ] ; rtB . lmwzw5w0jv [ 1 ] =
rtP . PIDController_N_by1f323fn4 * rtB . gni3bpus51 [ 1 ] ; rtB . ae5dn11ynt
[ 2 ] = rtX . bssjoyxvjz [ 2 ] ; rtB . gni3bpus51 [ 2 ] = rtB . lfiv14p2kf [
2 ] - rtB . ae5dn11ynt [ 2 ] ; rtB . lmwzw5w0jv [ 2 ] = rtP .
PIDController_N_by1f323fn4 * rtB . gni3bpus51 [ 2 ] ; rtB . ae5dn11ynt [ 3 ]
= rtX . bssjoyxvjz [ 3 ] ; rtB . gni3bpus51 [ 3 ] = rtB . lfiv14p2kf [ 3 ] -
rtB . ae5dn11ynt [ 3 ] ; rtB . lmwzw5w0jv [ 3 ] = rtP .
PIDController_N_by1f323fn4 * rtB . gni3bpus51 [ 3 ] ; rtB . d3aalpgobu [ 0 ]
= ( ( rtP . PIDController_P_ksfq5ochcx * rtB . kgqxquypz3 [ 0 ] + rtB .
iqoi20gpai [ 0 ] ) + rtB . lmwzw5w0jv [ 0 ] ) + ( ( rtP .
PIDController_P_ksfq5ochcx * rtB . prrur2jflh [ 0 ] + rtB . iqoi20gpai [ 2 ]
) + rtB . lmwzw5w0jv [ 2 ] ) ; rtB . d3aalpgobu [ 1 ] = ( ( rtP .
PIDController_P_ksfq5ochcx * rtB . kgqxquypz3 [ 1 ] + rtB . iqoi20gpai [ 1 ]
) + rtB . lmwzw5w0jv [ 1 ] ) + ( ( rtP . PIDController_P_ksfq5ochcx * rtB .
prrur2jflh [ 1 ] + rtB . iqoi20gpai [ 3 ] ) + rtB . lmwzw5w0jv [ 3 ] ) ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . acfsurjur3 [ 0 ] = rtB . ksirtn35v4
[ 0 ] >= rtP . Saturation_UpperSat ? 1 : rtB . ksirtn35v4 [ 0 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; rtDW . acfsurjur3 [ 2 ] = rtB . nkbh0ad3dz [
0 ] >= rtP . Saturation_UpperSat ? 1 : rtB . nkbh0ad3dz [ 0 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; rtDW . acfsurjur3 [ 4 ] = rtB . d3aalpgobu [
0 ] >= rtP . Saturation_UpperSat ? 1 : rtB . d3aalpgobu [ 0 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; rtDW . acfsurjur3 [ 1 ] = rtB . ksirtn35v4 [
1 ] >= rtP . Saturation_UpperSat ? 1 : rtB . ksirtn35v4 [ 1 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; rtDW . acfsurjur3 [ 3 ] = rtB . nkbh0ad3dz [
1 ] >= rtP . Saturation_UpperSat ? 1 : rtB . nkbh0ad3dz [ 1 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; rtDW . acfsurjur3 [ 5 ] = rtB . d3aalpgobu [
1 ] >= rtP . Saturation_UpperSat ? 1 : rtB . d3aalpgobu [ 1 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; } rtB . b0agtsqbh3 [ 0 ] = rtDW . acfsurjur3
[ 0 ] == 1 ? rtP . Saturation_UpperSat : rtDW . acfsurjur3 [ 0 ] == - 1 ? rtP
. Saturation_LowerSat : rtB . ksirtn35v4 [ 0 ] ; rtB . b0agtsqbh3 [ 2 ] =
rtDW . acfsurjur3 [ 2 ] == 1 ? rtP . Saturation_UpperSat : rtDW . acfsurjur3
[ 2 ] == - 1 ? rtP . Saturation_LowerSat : rtB . nkbh0ad3dz [ 0 ] ; rtB .
b0agtsqbh3 [ 4 ] = rtDW . acfsurjur3 [ 4 ] == 1 ? rtP . Saturation_UpperSat :
rtDW . acfsurjur3 [ 4 ] == - 1 ? rtP . Saturation_LowerSat : rtB . d3aalpgobu
[ 0 ] ; rtB . b0agtsqbh3 [ 1 ] = rtDW . acfsurjur3 [ 1 ] == 1 ? rtP .
Saturation_UpperSat : rtDW . acfsurjur3 [ 1 ] == - 1 ? rtP .
Saturation_LowerSat : rtB . ksirtn35v4 [ 1 ] ; rtB . b0agtsqbh3 [ 3 ] = rtDW
. acfsurjur3 [ 3 ] == 1 ? rtP . Saturation_UpperSat : rtDW . acfsurjur3 [ 3 ]
== - 1 ? rtP . Saturation_LowerSat : rtB . nkbh0ad3dz [ 1 ] ; rtB .
b0agtsqbh3 [ 5 ] = rtDW . acfsurjur3 [ 5 ] == 1 ? rtP . Saturation_UpperSat :
rtDW . acfsurjur3 [ 5 ] == - 1 ? rtP . Saturation_LowerSat : rtB . d3aalpgobu
[ 1 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . kfai1qmqc5 [ 0 ] = - 5.0
; rtB . fu4mwqiown [ 0 ] = - 10.0 ; rtB . kfai1qmqc5 [ 1 ] = 0.0 ; rtB .
fu4mwqiown [ 1 ] = - 10.0 ; } for ( i = 0 ; i < 6 ; i ++ ) { rtB . g5pwfmgg0q
[ i ] = rtB . n1m2hbrqv1 [ i ] ; rtB . g5pwfmgg0q [ i + 6 ] = rtB .
hl0uuhzuvt [ i ] ; } rtB . fzf1y0c02y [ 0 ] = rtB . kfai1qmqc5 [ 0 ] ; rtB .
fzf1y0c02y [ 2 ] = rtB . fu4mwqiown [ 0 ] ; rtB . fzf1y0c02y [ 1 ] = rtB .
kfai1qmqc5 [ 1 ] ; rtB . fzf1y0c02y [ 3 ] = rtB . fu4mwqiown [ 1 ] ; t12 =
2.0 ; ole0bylgda ( & t12 ) ; t13 = rtB . fzf1y0c02y [ 0 ] + - rtB .
g5pwfmgg0q [ 0 ] ; t14 = rtB . fzf1y0c02y [ 0 ] + - rtB . g5pwfmgg0q [ 2 ] ;
t15 = rtB . fzf1y0c02y [ 1 ] + - rtB . g5pwfmgg0q [ 1 ] ; t16 = rtB .
fzf1y0c02y [ 2 ] + - rtB . g5pwfmgg0q [ 0 ] ; t17 = rtB . fzf1y0c02y [ 0 ] +
- rtB . g5pwfmgg0q [ 4 ] ; t18 = rtB . fzf1y0c02y [ 1 ] + - rtB . g5pwfmgg0q
[ 3 ] ; t19 = rtB . fzf1y0c02y [ 2 ] + - rtB . g5pwfmgg0q [ 2 ] ; t20 = rtB .
fzf1y0c02y [ 3 ] + - rtB . g5pwfmgg0q [ 1 ] ; t21 = rtB . fzf1y0c02y [ 1 ] +
- rtB . g5pwfmgg0q [ 5 ] ; t22 = rtB . fzf1y0c02y [ 2 ] + - rtB . g5pwfmgg0q
[ 4 ] ; t23 = rtB . fzf1y0c02y [ 3 ] + - rtB . g5pwfmgg0q [ 3 ] ; t24 = rtB .
fzf1y0c02y [ 3 ] + - rtB . g5pwfmgg0q [ 5 ] ; t25 = - rtB . g5pwfmgg0q [ 2 ]
+ rtB . g5pwfmgg0q [ 0 ] ; t26 = - rtB . g5pwfmgg0q [ 4 ] + rtB . g5pwfmgg0q
[ 0 ] ; t27 = - rtB . g5pwfmgg0q [ 3 ] + rtB . g5pwfmgg0q [ 1 ] ; t28 = - rtB
. g5pwfmgg0q [ 5 ] + rtB . g5pwfmgg0q [ 1 ] ; t29 = - rtB . g5pwfmgg0q [ 4 ]
+ rtB . g5pwfmgg0q [ 2 ] ; t30 = - rtB . g5pwfmgg0q [ 5 ] + rtB . g5pwfmgg0q
[ 3 ] ; t31 = - rtB . g5pwfmgg0q [ 8 ] + rtB . g5pwfmgg0q [ 6 ] ; t32 = - rtB
. g5pwfmgg0q [ 10 ] + rtB . g5pwfmgg0q [ 6 ] ; t33 = - rtB . g5pwfmgg0q [ 9 ]
+ rtB . g5pwfmgg0q [ 7 ] ; t34 = - rtB . g5pwfmgg0q [ 11 ] + rtB . g5pwfmgg0q
[ 7 ] ; t35 = - rtB . g5pwfmgg0q [ 10 ] + rtB . g5pwfmgg0q [ 8 ] ; t36 = -
rtB . g5pwfmgg0q [ 11 ] + rtB . g5pwfmgg0q [ 9 ] ; t37 = muDoubleScalarSign (
t13 ) ; t38 = muDoubleScalarSign ( t14 ) ; t39 = muDoubleScalarSign ( t15 ) ;
t40 = muDoubleScalarSign ( t16 ) ; t41 = muDoubleScalarSign ( t17 ) ; t42 =
muDoubleScalarSign ( t18 ) ; t43 = muDoubleScalarSign ( t19 ) ; t44 =
muDoubleScalarSign ( t20 ) ; t45 = muDoubleScalarSign ( t21 ) ; t46 =
muDoubleScalarSign ( t22 ) ; t47 = muDoubleScalarSign ( t23 ) ; t48 =
muDoubleScalarSign ( t24 ) ; t49 = muDoubleScalarAbs ( t25 ) ; t50 =
muDoubleScalarAbs ( t26 ) ; t51 = muDoubleScalarAbs ( t27 ) ; t52 =
muDoubleScalarAbs ( t28 ) ; t53 = muDoubleScalarAbs ( t29 ) ; t54 =
muDoubleScalarAbs ( t30 ) ; t55 = muDoubleScalarSign ( t25 ) ; t56 =
muDoubleScalarSign ( t26 ) ; t57 = muDoubleScalarSign ( t27 ) ; t58 =
muDoubleScalarSign ( t28 ) ; t59 = muDoubleScalarSign ( t29 ) ; t60 =
muDoubleScalarSign ( t30 ) ; t61 = muDoubleScalarAbs ( t13 ) ; t62 =
muDoubleScalarAbs ( t14 ) ; t63 = muDoubleScalarAbs ( t15 ) ; t64 =
muDoubleScalarAbs ( t16 ) ; t65 = muDoubleScalarAbs ( t17 ) ; t66 =
muDoubleScalarAbs ( t18 ) ; t67 = muDoubleScalarAbs ( t19 ) ; t68 =
muDoubleScalarAbs ( t20 ) ; t69 = muDoubleScalarAbs ( t21 ) ; t70 =
muDoubleScalarAbs ( t22 ) ; t71 = muDoubleScalarAbs ( t23 ) ; t72 =
muDoubleScalarAbs ( t24 ) ; t109 = t13 * rtB . g5pwfmgg0q [ 6 ] + t15 * rtB .
g5pwfmgg0q [ 7 ] ; t110 = t16 * rtB . g5pwfmgg0q [ 6 ] + t20 * rtB .
g5pwfmgg0q [ 7 ] ; t111 = t14 * rtB . g5pwfmgg0q [ 8 ] + t18 * rtB .
g5pwfmgg0q [ 9 ] ; t112 = t19 * rtB . g5pwfmgg0q [ 8 ] + t23 * rtB .
g5pwfmgg0q [ 9 ] ; t113 = t17 * rtB . g5pwfmgg0q [ 10 ] + t21 * rtB .
g5pwfmgg0q [ 11 ] ; t114 = t22 * rtB . g5pwfmgg0q [ 10 ] + t24 * rtB .
g5pwfmgg0q [ 11 ] ; t160 = t25 * t31 + t27 * t33 ; t161 = t26 * t32 + t28 *
t34 ; t162 = t29 * t35 + t30 * t36 ; t124 = t61 * t61 + t63 * t63 ;
ole0bylgda ( & t124 ) ; t125 = t62 * t62 + t66 * t66 ; ole0bylgda ( & t125 )
; t126 = t64 * t64 + t68 * t68 ; ole0bylgda ( & t126 ) ; t127 = t65 * t65 +
t69 * t69 ; ole0bylgda ( & t127 ) ; t128 = t67 * t67 + t71 * t71 ; ole0bylgda
( & t128 ) ; t129 = t70 * t70 + t72 * t72 ; ole0bylgda ( & t129 ) ; t130 =
t49 * t49 + t51 * t51 ; ole0bylgda ( & t130 ) ; t131 = t50 * t50 + t52 * t52
; ole0bylgda ( & t131 ) ; t132 = t53 * t53 + t54 * t54 ; ole0bylgda ( & t132
) ; t133 = 1.0 / t124 ; t135 = 1.0 / t125 ; t136 = 1.0 / t126 ; t139 = 1.0 /
t127 ; t140 = 1.0 / t128 ; t143 = 1.0 / t129 ; t145 = 1.0 / t130 ; t147 = 1.0
/ t131 ; t149 = 1.0 / t132 ; t134 = muDoubleScalarPower ( t133 , 3.0 ) ; t137
= muDoubleScalarPower ( t135 , 3.0 ) ; t138 = muDoubleScalarPower ( t136 ,
3.0 ) ; t141 = muDoubleScalarPower ( t139 , 3.0 ) ; t142 =
muDoubleScalarPower ( t140 , 3.0 ) ; t144 = muDoubleScalarPower ( t143 , 3.0
) ; t146 = muDoubleScalarPower ( t145 , 3.0 ) ; t148 = muDoubleScalarPower (
t147 , 3.0 ) ; t150 = muDoubleScalarPower ( t149 , 3.0 ) ; t25 *= t145 ; t27
*= t145 ; t26 *= t147 ; t28 *= t147 ; t31 *= t145 ; t29 *= t149 ; t33 *= t145
; t30 *= t149 ; t32 *= t147 ; t34 *= t147 ; t35 *= t149 ; t36 *= t149 ; t130
= t130 * 5.0 - 3.0 ; ole0bylgda ( & t130 ) ; t130 = 1.0 / t130 ; t131 = t131
* 5.0 - 3.0 ; ole0bylgda ( & t131 ) ; t131 = 1.0 / t131 ; t132 = t132 * 5.0 -
3.0 ; ole0bylgda ( & t132 ) ; t132 = 1.0 / t132 ; t124 = t124 * 10.0 - 23.0 ;
ole0bylgda ( & t124 ) ; t124 = 1.0 / t124 ; t125 = t125 * 10.0 - 23.0 ;
ole0bylgda ( & t125 ) ; t125 = 1.0 / t125 ; t126 = t126 * 10.0 - 23.0 ;
ole0bylgda ( & t126 ) ; t126 = 1.0 / t126 ; t127 = t127 * 10.0 - 23.0 ;
ole0bylgda ( & t127 ) ; t127 = 1.0 / t127 ; t128 = t128 * 10.0 - 23.0 ;
ole0bylgda ( & t128 ) ; t128 = 1.0 / t128 ; t129 = t129 * 10.0 - 23.0 ;
ole0bylgda ( & t129 ) ; t129 = 1.0 / t129 ; t193 = t49 * t55 * t146 * t160 ;
t146 = t51 * t57 * t146 * t160 ; t195 = t50 * t56 * t148 * t161 ; t148 = t52
* t58 * t148 * t161 ; t197 = t53 * t59 * t150 * t162 ; t150 = t54 * t60 *
t150 * t162 ; t49 = t12 * t49 * t55 * t145 * t130 * 5.0 ; t51 = t12 * t51 *
t57 * t145 * t130 * 5.0 ; t50 = t12 * t50 * t56 * t147 * t131 * 5.0 ; t52 =
t12 * t52 * t58 * t147 * t131 * 5.0 ; t53 = t12 * t53 * t59 * t149 * t132 *
5.0 ; t54 = t12 * t54 * t60 * t149 * t132 * 5.0 ; ny2lc1ygvf [ 0 ] = ( t31 -
t193 ) + t49 ; ny2lc1ygvf [ 1 ] = ( t32 - t195 ) + t50 ; ny2lc1ygvf [ 2 ] =
0.0 ; ny2lc1ygvf [ 3 ] = ( t133 * rtB . g5pwfmgg0q [ 6 ] - t37 * t61 * t109 *
t134 ) - t12 * t37 * t61 * t133 * t124 * 5.0 ; ny2lc1ygvf [ 4 ] = ( t136 *
rtB . g5pwfmgg0q [ 6 ] - t40 * t64 * t110 * t138 ) - t12 * t40 * t64 * t136 *
t126 * 5.0 ; ny2lc1ygvf [ 5 ] = 0.0 ; ny2lc1ygvf [ 6 ] = 0.0 ; ny2lc1ygvf [ 7
] = 0.0 ; ny2lc1ygvf [ 8 ] = 0.0 ; ny2lc1ygvf [ 9 ] = ( t33 - t146 ) + t51 ;
ny2lc1ygvf [ 10 ] = ( t34 - t148 ) + t52 ; ny2lc1ygvf [ 11 ] = 0.0 ;
ny2lc1ygvf [ 12 ] = ( t133 * rtB . g5pwfmgg0q [ 7 ] - t39 * t63 * t109 * t134
) - t12 * t39 * t63 * t133 * t124 * 5.0 ; ny2lc1ygvf [ 13 ] = ( t136 * rtB .
g5pwfmgg0q [ 7 ] - t44 * t68 * t110 * t138 ) - t12 * t44 * t68 * t136 * t126
* 5.0 ; ny2lc1ygvf [ 14 ] = 0.0 ; ny2lc1ygvf [ 15 ] = 0.0 ; ny2lc1ygvf [ 16 ]
= 0.0 ; ny2lc1ygvf [ 17 ] = 0.0 ; ny2lc1ygvf [ 18 ] = ( - t31 + t193 ) - t49
; ny2lc1ygvf [ 19 ] = 0.0 ; ny2lc1ygvf [ 20 ] = ( t35 - t197 ) + t53 ;
ny2lc1ygvf [ 21 ] = 0.0 ; ny2lc1ygvf [ 22 ] = 0.0 ; ny2lc1ygvf [ 23 ] = (
t135 * rtB . g5pwfmgg0q [ 8 ] - t38 * t62 * t111 * t137 ) - t12 * t38 * t62 *
t135 * t125 * 5.0 ; ny2lc1ygvf [ 24 ] = ( t140 * rtB . g5pwfmgg0q [ 8 ] - t43
* t67 * t112 * t142 ) - t12 * t43 * t67 * t140 * t128 * 5.0 ; ny2lc1ygvf [ 25
] = 0.0 ; ny2lc1ygvf [ 26 ] = 0.0 ; ny2lc1ygvf [ 27 ] = ( - t33 + t146 ) -
t51 ; ny2lc1ygvf [ 28 ] = 0.0 ; ny2lc1ygvf [ 29 ] = ( t36 - t150 ) + t54 ;
ny2lc1ygvf [ 30 ] = 0.0 ; ny2lc1ygvf [ 31 ] = 0.0 ; ny2lc1ygvf [ 32 ] = (
t135 * rtB . g5pwfmgg0q [ 9 ] - t42 * t66 * t111 * t137 ) - t12 * t42 * t66 *
t135 * t125 * 5.0 ; ny2lc1ygvf [ 33 ] = ( t140 * rtB . g5pwfmgg0q [ 9 ] - t47
* t71 * t112 * t142 ) - t12 * t47 * t71 * t140 * t128 * 5.0 ; ny2lc1ygvf [ 34
] = 0.0 ; ny2lc1ygvf [ 35 ] = 0.0 ; ny2lc1ygvf [ 36 ] = 0.0 ; ny2lc1ygvf [ 37
] = ( - t32 + t195 ) - t50 ; ny2lc1ygvf [ 38 ] = ( - t35 + t197 ) - t53 ;
ny2lc1ygvf [ 39 ] = 0.0 ; ny2lc1ygvf [ 40 ] = 0.0 ; ny2lc1ygvf [ 41 ] = 0.0 ;
ny2lc1ygvf [ 42 ] = 0.0 ; ny2lc1ygvf [ 43 ] = ( t139 * rtB . g5pwfmgg0q [ 10
] - t41 * t65 * t113 * t141 ) - t12 * t41 * t65 * t139 * t127 * 5.0 ;
ny2lc1ygvf [ 44 ] = ( t143 * rtB . g5pwfmgg0q [ 10 ] - t46 * t70 * t114 *
t144 ) - t12 * t46 * t70 * t143 * t129 * 5.0 ; ny2lc1ygvf [ 45 ] = 0.0 ;
ny2lc1ygvf [ 46 ] = ( - t34 + t148 ) - t52 ; ny2lc1ygvf [ 47 ] = ( - t36 +
t150 ) - t54 ; ny2lc1ygvf [ 48 ] = 0.0 ; ny2lc1ygvf [ 49 ] = 0.0 ; ny2lc1ygvf
[ 50 ] = 0.0 ; ny2lc1ygvf [ 51 ] = 0.0 ; ny2lc1ygvf [ 52 ] = ( t139 * rtB .
g5pwfmgg0q [ 11 ] - t45 * t69 * t113 * t141 ) - t12 * t45 * t69 * t139 * t127
* 5.0 ; ny2lc1ygvf [ 53 ] = ( t143 * rtB . g5pwfmgg0q [ 11 ] - t48 * t72 *
t114 * t144 ) - t12 * t48 * t72 * t143 * t129 * 5.0 ; ny2lc1ygvf [ 54 ] = t25
; ny2lc1ygvf [ 55 ] = t26 ; ny2lc1ygvf [ 56 ] = 0.0 ; ny2lc1ygvf [ 57 ] = -
t13 * t133 ; ny2lc1ygvf [ 58 ] = - t16 * t136 ; ny2lc1ygvf [ 59 ] = 0.0 ;
ny2lc1ygvf [ 60 ] = 0.0 ; ny2lc1ygvf [ 61 ] = 0.0 ; ny2lc1ygvf [ 62 ] = 0.0 ;
ny2lc1ygvf [ 63 ] = t27 ; ny2lc1ygvf [ 64 ] = t28 ; ny2lc1ygvf [ 65 ] = 0.0 ;
ny2lc1ygvf [ 66 ] = - t15 * t133 ; ny2lc1ygvf [ 67 ] = - t20 * t136 ;
ny2lc1ygvf [ 68 ] = 0.0 ; ny2lc1ygvf [ 69 ] = 0.0 ; ny2lc1ygvf [ 70 ] = 0.0 ;
ny2lc1ygvf [ 71 ] = 0.0 ; ny2lc1ygvf [ 72 ] = - t25 ; ny2lc1ygvf [ 73 ] = 0.0
; ny2lc1ygvf [ 74 ] = t29 ; ny2lc1ygvf [ 75 ] = 0.0 ; ny2lc1ygvf [ 76 ] = 0.0
; ny2lc1ygvf [ 77 ] = - t14 * t135 ; ny2lc1ygvf [ 78 ] = - t19 * t140 ;
ny2lc1ygvf [ 79 ] = 0.0 ; ny2lc1ygvf [ 80 ] = 0.0 ; ny2lc1ygvf [ 81 ] = - t27
; ny2lc1ygvf [ 82 ] = 0.0 ; ny2lc1ygvf [ 83 ] = t30 ; ny2lc1ygvf [ 84 ] = 0.0
; ny2lc1ygvf [ 85 ] = 0.0 ; ny2lc1ygvf [ 86 ] = - t18 * t135 ; ny2lc1ygvf [
87 ] = - t23 * t140 ; ny2lc1ygvf [ 88 ] = 0.0 ; ny2lc1ygvf [ 89 ] = 0.0 ;
ny2lc1ygvf [ 90 ] = 0.0 ; ny2lc1ygvf [ 91 ] = - t26 ; ny2lc1ygvf [ 92 ] = -
t29 ; ny2lc1ygvf [ 93 ] = 0.0 ; ny2lc1ygvf [ 94 ] = 0.0 ; ny2lc1ygvf [ 95 ] =
0.0 ; ny2lc1ygvf [ 96 ] = 0.0 ; ny2lc1ygvf [ 97 ] = - t17 * t139 ; ny2lc1ygvf
[ 98 ] = - t22 * t143 ; ny2lc1ygvf [ 99 ] = 0.0 ; ny2lc1ygvf [ 100 ] = - t28
; ny2lc1ygvf [ 101 ] = - t30 ; ny2lc1ygvf [ 102 ] = 0.0 ; ny2lc1ygvf [ 103 ]
= 0.0 ; ny2lc1ygvf [ 104 ] = 0.0 ; ny2lc1ygvf [ 105 ] = 0.0 ; ny2lc1ygvf [
106 ] = - t21 * t139 ; ny2lc1ygvf [ 107 ] = - t24 * t143 ; for ( i = 0 ; i <
6 ; i ++ ) { tmp [ i ] = rtB . n1m2hbrqv1 [ i ] ; tmp [ i + 6 ] = rtB .
hl0uuhzuvt [ i ] ; } for ( i = 0 ; i < 12 ; i ++ ) { tmp_p [ i ] = 0.0 ; for
( colPos = 0 ; colPos < 12 ; colPos ++ ) { tmp_p [ i ] += rtP . Gain_Gain [
12 * colPos + i ] * tmp [ colPos ] ; } } t145_p [ 0 ] = t12 * 2.0 / t130 +
t145 * t160 ; t145_p [ 1 ] = t12 * 2.0 / t131 + t147 * t161 ; t145_p [ 2 ] =
t12 * 2.0 / t132 + t149 * t162 ; t145_p [ 3 ] = - t109 * t133 + t12 / t124 ;
t145_p [ 4 ] = - t110 * t136 + t12 / t126 ; t145_p [ 5 ] = - t111 * t135 +
t12 / t125 ; t145_p [ 6 ] = - t112 * t140 + t12 / t128 ; t145_p [ 7 ] = -
t113 * t139 + t12 / t127 ; t145_p [ 8 ] = - t114 * t143 + t12 / t129 ; for (
i = 0 ; i < 9 ; i ++ ) { t12 = 0.0 ; for ( colPos = 0 ; colPos < 12 ; colPos
++ ) { t12 += ny2lc1ygvf [ 9 * colPos + i ] * tmp_p [ colPos ] ; } rtB .
fz1yjtueq2 [ i ] = ( rtP . Gain_Gain_kdekrvsba1 * muDoubleScalarPower (
t145_p [ i ] , rtP . Constant_Value ) + t12 ) * rtP . Gain1_Gain ; } TRANSA =
'N' ; TRANSB = 'N' ; M = 9LL ; N = 6LL ; K = 12LL ; t12 = 1.0 ; LDA = 9LL ;
LDB = 12LL ; t13 = 0.0 ; LDC = 9LL ; dgemm ( & TRANSA , & TRANSB , & M , & N
, & K , & t12 , & ny2lc1ygvf [ 0 ] , & LDA , & rtP .
Constant_Value_e5cors3m1f [ 0 ] , & LDB , & t13 , & cep3wejvm1 [ 0 ] , & LDC
) ; for ( i = 0 ; i < 54 ; i ++ ) { rtB . ob4rbqgfim [ i ] = rtP . Gain2_Gain
* cep3wejvm1 [ i ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i
< 6 ; i ++ ) { f [ i ] = - rtB . b0agtsqbh3 [ i ] ; } solution . fstar = 0.0
; solution . firstorderopt = 0.0 ; memset ( & solution . lambda [ 0 ] , 0 ,
10U * sizeof ( real_T ) ) ; solution . state = 0 ; solution . maxConstr = 0.0
; solution . iterations = 0 ; for ( i = 0 ; i < 7 ; i ++ ) { solution .
searchDir [ i ] = 0.0 ; } for ( i = 0 ; i < 6 ; i ++ ) { solution . xstar [ i
] = 0.0 ; } rtB . CholRegManager . ldm = 7 ; rtB . CholRegManager . ndims = 0
; rtB . CholRegManager . info = 0 ; rtB . CholRegManager . ConvexCheck = true
; rtB . CholRegManager . regTol_ = 0.0 ; rtB . CholRegManager . scaleFactor =
100.0 ; WorkingSet . mConstr = 0 ; WorkingSet . mConstrOrig = 0 ; WorkingSet
. mConstrMax = 10 ; WorkingSet . nVar = 6 ; WorkingSet . nVarOrig = 6 ;
WorkingSet . nVarMax = 7 ; WorkingSet . ldA = 7 ; memset ( & WorkingSet .
Aineq [ 0 ] , 0 , 63U * sizeof ( real_T ) ) ; memset ( & WorkingSet . bineq [
0 ] , 0 , 9U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 7 ; i ++ ) {
WorkingSet . lb [ i ] = 0.0 ; WorkingSet . ub [ i ] = 0.0 ; WorkingSet .
indexLB [ i ] = 0 ; WorkingSet . indexUB [ i ] = 0 ; WorkingSet . indexFixed
[ i ] = 0 ; } WorkingSet . mEqRemoved = 0 ; memset ( & WorkingSet . ATwset [
0 ] , 0 , 70U * sizeof ( real_T ) ) ; WorkingSet . nActiveConstr = 0 ; memset
( & WorkingSet . bwset [ 0 ] , 0 , 10U * sizeof ( real_T ) ) ; memset ( &
WorkingSet . maxConstrWorkspace [ 0 ] , 0 , 10U * sizeof ( real_T ) ) ; for (
i = 0 ; i < 5 ; i ++ ) { WorkingSet . sizes [ i ] = 0 ; WorkingSet .
sizesNormal [ i ] = 0 ; WorkingSet . sizesPhaseOne [ i ] = 0 ; WorkingSet .
sizesRegularized [ i ] = 0 ; WorkingSet . sizesRegPhaseOne [ i ] = 0 ; } for
( i = 0 ; i < 6 ; i ++ ) { WorkingSet . isActiveIdx [ i ] = 0 ; WorkingSet .
isActiveIdxNormal [ i ] = 0 ; WorkingSet . isActiveIdxPhaseOne [ i ] = 0 ;
WorkingSet . isActiveIdxRegularized [ i ] = 0 ; WorkingSet .
isActiveIdxRegPhaseOne [ i ] = 0 ; } for ( i = 0 ; i < 10 ; i ++ ) {
WorkingSet . isActiveConstr [ i ] = false ; WorkingSet . Wid [ i ] = 0 ;
WorkingSet . Wlocalidx [ i ] = 0 ; } for ( i = 0 ; i < 5 ; i ++ ) {
WorkingSet . nWConstr [ i ] = 0 ; } WorkingSet . probType = 3 ; WorkingSet .
SLACK0 = 1.0E-5 ; for ( i = 0 ; i < 9 ; i ++ ) { t145_p [ i ] = rtP .
ConstraintEnforcement_c [ i ] - rtB . fz1yjtueq2 [ i ] ; } lmd1nhzfzp ( &
WorkingSet , rtB . ob4rbqgfim , t145_p ) ; pj5iov1cpz ( & WorkingSet ) ;
WorkingSet . SLACK0 = 0.0 ; t12 = 1.0 ; for ( i = 0 ; i < WorkingSet . sizes
[ 2 ] ; i ++ ) { t13 = 0.0 ; colPos = WorkingSet . ldA * i ; for ( idx_row =
0 ; idx_row < WorkingSet . nVarOrig ; idx_row ++ ) { t13 += muDoubleScalarAbs
( WorkingSet . Aineq [ idx_row + colPos ] ) ; } t12 = muDoubleScalarMax ( t12
, t13 ) ; } t13 = 0.0 ; t14 = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { t15 = 0.0
; for ( colPos = 0 ; colPos < 6 ; colPos ++ ) { t15 += ( real_T ) H [ 6 * i +
colPos ] ; } t13 = muDoubleScalarMax ( t13 , t15 ) ; t14 = muDoubleScalarMax
( t14 , muDoubleScalarAbs ( f [ i ] ) ) ; } expl_temp . RemainFeasible =
false ; expl_temp . ProbRelTolFactor = muDoubleScalarMax ( muDoubleScalarMax
( t12 , t14 ) , t13 ) ; expl_temp . ConstrRelTolFactor = t12 ; expl_temp .
MaxIterations = 200 ; hftyudfsy5 ( f , & solution , & memspace , & WorkingSet
, & rtB . CholRegManager , expl_temp , & QRManager , & QPObjective ) ; for (
i = 0 ; i < 6 ; i ++ ) { rtB . iymit1x3xp [ i ] = solution . xstar [ i ] ; }
if ( solution . state <= 0 ) { l4otuy5m0u ( & QPObjective , memspace .
workspace_double , f , solution . xstar ) ; } switch ( solution . state ) {
case 2 : solution . state = - 3 ; break ; case - 3 : solution . state = - 2 ;
break ; case 4 : solution . state = - 2 ; break ; } rtB . iifrhx4cko =
solution . state ; } rtB . iooh3agbgu [ 0 ] = rtP . PIDController_I * rtB .
pyccux13oh [ 0 ] ; rtB . iooh3agbgu [ 2 ] = rtP . PIDController_I * rtB .
iclmzwxqs3 [ 0 ] ; rtB . lk0k5psk2m [ 0 ] = rtP . PIDController_I_mookvequop
* rtB . oqcs3qeeli [ 0 ] ; rtB . lk0k5psk2m [ 2 ] = rtP .
PIDController_I_mookvequop * rtB . n1unafbpjc [ 0 ] ; rtB . hnyu344m25 [ 0 ]
= rtP . PIDController_I_b1xhupkm44 * rtB . kgqxquypz3 [ 0 ] ; rtB .
hnyu344m25 [ 2 ] = rtP . PIDController_I_b1xhupkm44 * rtB . prrur2jflh [ 0 ]
; rtB . iooh3agbgu [ 1 ] = rtP . PIDController_I * rtB . pyccux13oh [ 1 ] ;
rtB . iooh3agbgu [ 3 ] = rtP . PIDController_I * rtB . iclmzwxqs3 [ 1 ] ; rtB
. lk0k5psk2m [ 1 ] = rtP . PIDController_I_mookvequop * rtB . oqcs3qeeli [ 1
] ; rtB . lk0k5psk2m [ 3 ] = rtP . PIDController_I_mookvequop * rtB .
n1unafbpjc [ 1 ] ; rtB . hnyu344m25 [ 1 ] = rtP . PIDController_I_b1xhupkm44
* rtB . kgqxquypz3 [ 1 ] ; rtB . hnyu344m25 [ 3 ] = rtP .
PIDController_I_b1xhupkm44 * rtB . prrur2jflh [ 1 ] ; UNUSED_PARAMETER ( tid
) ; } void MdlOutputsTID3 ( int_T tid ) { rtB . atzbhuadkh [ 0 ] = rtP .
initialconditions_Value [ 0 ] ; rtB . ofcujety0u [ 0 ] = rtP .
initialconditions_Value_eczelweelu [ 0 ] ; rtB . nwpwlpuzte [ 0 ] = rtP .
initialconditions_Value_mwviqzbxqh [ 0 ] ; rtB . atzbhuadkh [ 1 ] = rtP .
initialconditions_Value [ 1 ] ; rtB . ofcujety0u [ 1 ] = rtP .
initialconditions_Value_eczelweelu [ 1 ] ; rtB . nwpwlpuzte [ 1 ] = rtP .
initialconditions_Value_mwviqzbxqh [ 1 ] ; rtB . atzbhuadkh [ 2 ] = rtP .
initialconditions_Value [ 2 ] ; rtB . ofcujety0u [ 2 ] = rtP .
initialconditions_Value_eczelweelu [ 2 ] ; rtB . nwpwlpuzte [ 2 ] = rtP .
initialconditions_Value_mwviqzbxqh [ 2 ] ; rtB . atzbhuadkh [ 3 ] = rtP .
initialconditions_Value [ 3 ] ; rtB . ofcujety0u [ 3 ] = rtP .
initialconditions_Value_eczelweelu [ 3 ] ; rtB . nwpwlpuzte [ 3 ] = rtP .
initialconditions_Value_mwviqzbxqh [ 3 ] ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { XDis * _rtXdis ; _rtXdis = ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) ; rtDW . pywgroe530 = 0 ; rtDW . bp1r1xfrdc
= 0 ; switch ( rtDW . buyrvmnubo [ 0 ] ) { case 3 : if ( rtB . iymit1x3xp [ 0
] < 0.0 ) { rtDW . buyrvmnubo [ 0 ] = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . iymit1x3xp [ 0 ] > 0.0 ) { rtDW . buyrvmnubo [ 0 ] = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
ngdokjdgsy [ 0 ] = ( ( rtDW . buyrvmnubo [ 0 ] == 3 ) || ( rtDW . buyrvmnubo
[ 0 ] == 4 ) ) ; switch ( rtDW . buyrvmnubo [ 1 ] ) { case 3 : if ( rtB .
iymit1x3xp [ 1 ] < 0.0 ) { rtDW . buyrvmnubo [ 1 ] = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . iymit1x3xp [ 1 ] > 0.0 ) { rtDW . buyrvmnubo [ 1 ] = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
ngdokjdgsy [ 1 ] = ( ( rtDW . buyrvmnubo [ 1 ] == 3 ) || ( rtDW . buyrvmnubo
[ 1 ] == 4 ) ) ; rtDW . gc4n03nzfn = 0 ; rtDW . acg1flwbux = 0 ; switch (
rtDW . frkr0zsk1e [ 0 ] ) { case 3 : if ( rtB . iymit1x3xp [ 2 ] < 0.0 ) {
rtDW . frkr0zsk1e [ 0 ] = 1 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } break ; case 4 : if ( rtB . iymit1x3xp [ 2 ] > 0.0 ) { rtDW .
frkr0zsk1e [ 0 ] = 2 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; } _rtXdis -> ek3saalov4 [ 0 ] = ( ( rtDW . frkr0zsk1e [ 0 ] == 3 ) ||
( rtDW . frkr0zsk1e [ 0 ] == 4 ) ) ; switch ( rtDW . frkr0zsk1e [ 1 ] ) {
case 3 : if ( rtB . iymit1x3xp [ 3 ] < 0.0 ) { rtDW . frkr0zsk1e [ 1 ] = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . iymit1x3xp [ 3 ] > 0.0 ) { rtDW . frkr0zsk1e [ 1 ] = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
ek3saalov4 [ 1 ] = ( ( rtDW . frkr0zsk1e [ 1 ] == 3 ) || ( rtDW . frkr0zsk1e
[ 1 ] == 4 ) ) ; rtDW . fnx2sqboij = 0 ; rtDW . gvjxkecdgi = 0 ; switch (
rtDW . pfob24qucz [ 0 ] ) { case 3 : if ( rtB . iymit1x3xp [ 4 ] < 0.0 ) {
rtDW . pfob24qucz [ 0 ] = 1 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } break ; case 4 : if ( rtB . iymit1x3xp [ 4 ] > 0.0 ) { rtDW .
pfob24qucz [ 0 ] = 2 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
break ; } _rtXdis -> e0vh2jr0wr [ 0 ] = ( ( rtDW . pfob24qucz [ 0 ] == 3 ) ||
( rtDW . pfob24qucz [ 0 ] == 4 ) ) ; switch ( rtDW . pfob24qucz [ 1 ] ) {
case 3 : if ( rtB . iymit1x3xp [ 5 ] < 0.0 ) { rtDW . pfob24qucz [ 1 ] = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; case 4 : if (
rtB . iymit1x3xp [ 5 ] > 0.0 ) { rtDW . pfob24qucz [ 1 ] = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
e0vh2jr0wr [ 1 ] = ( ( rtDW . pfob24qucz [ 1 ] == 3 ) || ( rtDW . pfob24qucz
[ 1 ] == 4 ) ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDis *
_rtXdis ; XDot * _rtXdot ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled (
rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> k5eqbluoil [
0 ] = rtB . b1rs1wlrjx [ 0 ] ; if ( _rtXdis -> ngdokjdgsy [ 0 ] ) { _rtXdot
-> ngdokjdgsy [ 0 ] = 0.0 ; } else { _rtXdot -> ngdokjdgsy [ 0 ] = rtB .
iymit1x3xp [ 0 ] ; } _rtXdot -> iusxhffkpj [ 0 ] = rtB . f0qgskmy2i [ 0 ] ;
if ( _rtXdis -> ek3saalov4 [ 0 ] ) { _rtXdot -> ek3saalov4 [ 0 ] = 0.0 ; }
else { _rtXdot -> ek3saalov4 [ 0 ] = rtB . iymit1x3xp [ 2 ] ; } _rtXdot ->
g0kkdzau41 [ 0 ] = rtB . d22xigfax5 [ 0 ] ; if ( _rtXdis -> e0vh2jr0wr [ 0 ]
) { _rtXdot -> e0vh2jr0wr [ 0 ] = 0.0 ; } else { _rtXdot -> e0vh2jr0wr [ 0 ]
= rtB . iymit1x3xp [ 4 ] ; } _rtXdot -> k5eqbluoil [ 1 ] = rtB . b1rs1wlrjx [
1 ] ; if ( _rtXdis -> ngdokjdgsy [ 1 ] ) { _rtXdot -> ngdokjdgsy [ 1 ] = 0.0
; } else { _rtXdot -> ngdokjdgsy [ 1 ] = rtB . iymit1x3xp [ 1 ] ; } _rtXdot
-> iusxhffkpj [ 1 ] = rtB . f0qgskmy2i [ 1 ] ; if ( _rtXdis -> ek3saalov4 [ 1
] ) { _rtXdot -> ek3saalov4 [ 1 ] = 0.0 ; } else { _rtXdot -> ek3saalov4 [ 1
] = rtB . iymit1x3xp [ 3 ] ; } _rtXdot -> g0kkdzau41 [ 1 ] = rtB . d22xigfax5
[ 1 ] ; if ( _rtXdis -> e0vh2jr0wr [ 1 ] ) { _rtXdot -> e0vh2jr0wr [ 1 ] =
0.0 ; } else { _rtXdot -> e0vh2jr0wr [ 1 ] = rtB . iymit1x3xp [ 5 ] ; }
_rtXdot -> bnr04lpwtw [ 0 ] = rtB . iooh3agbgu [ 0 ] ; _rtXdot -> e32azti1sy
[ 0 ] = rtB . h1kv0ninpj [ 0 ] ; _rtXdot -> noqzx53y4f [ 0 ] = rtB .
lk0k5psk2m [ 0 ] ; _rtXdot -> ocre3hnxix [ 0 ] = rtB . gc45mejfib [ 0 ] ;
_rtXdot -> enmqgwm1ac [ 0 ] = rtB . hnyu344m25 [ 0 ] ; _rtXdot -> bssjoyxvjz
[ 0 ] = rtB . lmwzw5w0jv [ 0 ] ; _rtXdot -> bnr04lpwtw [ 1 ] = rtB .
iooh3agbgu [ 1 ] ; _rtXdot -> e32azti1sy [ 1 ] = rtB . h1kv0ninpj [ 1 ] ;
_rtXdot -> noqzx53y4f [ 1 ] = rtB . lk0k5psk2m [ 1 ] ; _rtXdot -> ocre3hnxix
[ 1 ] = rtB . gc45mejfib [ 1 ] ; _rtXdot -> enmqgwm1ac [ 1 ] = rtB .
hnyu344m25 [ 1 ] ; _rtXdot -> bssjoyxvjz [ 1 ] = rtB . lmwzw5w0jv [ 1 ] ;
_rtXdot -> bnr04lpwtw [ 2 ] = rtB . iooh3agbgu [ 2 ] ; _rtXdot -> e32azti1sy
[ 2 ] = rtB . h1kv0ninpj [ 2 ] ; _rtXdot -> noqzx53y4f [ 2 ] = rtB .
lk0k5psk2m [ 2 ] ; _rtXdot -> ocre3hnxix [ 2 ] = rtB . gc45mejfib [ 2 ] ;
_rtXdot -> enmqgwm1ac [ 2 ] = rtB . hnyu344m25 [ 2 ] ; _rtXdot -> bssjoyxvjz
[ 2 ] = rtB . lmwzw5w0jv [ 2 ] ; _rtXdot -> bnr04lpwtw [ 3 ] = rtB .
iooh3agbgu [ 3 ] ; _rtXdot -> e32azti1sy [ 3 ] = rtB . h1kv0ninpj [ 3 ] ;
_rtXdot -> noqzx53y4f [ 3 ] = rtB . lk0k5psk2m [ 3 ] ; _rtXdot -> ocre3hnxix
[ 3 ] = rtB . gc45mejfib [ 3 ] ; _rtXdot -> enmqgwm1ac [ 3 ] = rtB .
hnyu344m25 [ 3 ] ; _rtXdot -> bssjoyxvjz [ 3 ] = rtB . lmwzw5w0jv [ 3 ] ; }
void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { ZCV *
_rtZCSV ; real_T tmp [ 6 ] ; real_T tmp_p [ 6 ] ; int32_T i ; _rtZCSV = ( (
ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; switch ( rtDW . buyrvmnubo [ 0
] ) { case 1 : _rtZCSV -> fcipdsr1t0 [ 0 ] = 0.0 ; _rtZCSV -> hs4jtfjevw [ 0
] = rtP . Integrator_UpperSat - rtP . Integrator_LowerSat ; break ; case 2 :
_rtZCSV -> fcipdsr1t0 [ 0 ] = rtP . Integrator_LowerSat - rtP .
Integrator_UpperSat ; _rtZCSV -> hs4jtfjevw [ 0 ] = 0.0 ; break ; default :
_rtZCSV -> fcipdsr1t0 [ 0 ] = rtX . ngdokjdgsy [ 0 ] - rtP .
Integrator_UpperSat ; _rtZCSV -> hs4jtfjevw [ 0 ] = rtX . ngdokjdgsy [ 0 ] -
rtP . Integrator_LowerSat ; break ; } switch ( rtDW . frkr0zsk1e [ 0 ] ) {
case 1 : _rtZCSV -> p2rzuwna12 [ 0 ] = 0.0 ; _rtZCSV -> lbeis2w42p [ 0 ] =
rtP . Integrator_UpperSat_nzhvzzdcx2 - rtP . Integrator_LowerSat_li4gnjpeq5 ;
break ; case 2 : _rtZCSV -> p2rzuwna12 [ 0 ] = rtP .
Integrator_LowerSat_li4gnjpeq5 - rtP . Integrator_UpperSat_nzhvzzdcx2 ;
_rtZCSV -> lbeis2w42p [ 0 ] = 0.0 ; break ; default : _rtZCSV -> p2rzuwna12 [
0 ] = rtX . ek3saalov4 [ 0 ] - rtP . Integrator_UpperSat_nzhvzzdcx2 ; _rtZCSV
-> lbeis2w42p [ 0 ] = rtX . ek3saalov4 [ 0 ] - rtP .
Integrator_LowerSat_li4gnjpeq5 ; break ; } switch ( rtDW . pfob24qucz [ 0 ] )
{ case 1 : _rtZCSV -> gvfg3p11kr [ 0 ] = 0.0 ; _rtZCSV -> gnktmf3obg [ 0 ] =
rtP . Integrator_UpperSat_lonuxufgp5 - rtP . Integrator_LowerSat_np30azhqa2 ;
break ; case 2 : _rtZCSV -> gvfg3p11kr [ 0 ] = rtP .
Integrator_LowerSat_np30azhqa2 - rtP . Integrator_UpperSat_lonuxufgp5 ;
_rtZCSV -> gnktmf3obg [ 0 ] = 0.0 ; break ; default : _rtZCSV -> gvfg3p11kr [
0 ] = rtX . e0vh2jr0wr [ 0 ] - rtP . Integrator_UpperSat_lonuxufgp5 ; _rtZCSV
-> gnktmf3obg [ 0 ] = rtX . e0vh2jr0wr [ 0 ] - rtP .
Integrator_LowerSat_np30azhqa2 ; break ; } switch ( rtDW . buyrvmnubo [ 1 ] )
{ case 1 : _rtZCSV -> fcipdsr1t0 [ 1 ] = 0.0 ; _rtZCSV -> hs4jtfjevw [ 1 ] =
rtP . Integrator_UpperSat - rtP . Integrator_LowerSat ; break ; case 2 :
_rtZCSV -> fcipdsr1t0 [ 1 ] = rtP . Integrator_LowerSat - rtP .
Integrator_UpperSat ; _rtZCSV -> hs4jtfjevw [ 1 ] = 0.0 ; break ; default :
_rtZCSV -> fcipdsr1t0 [ 1 ] = rtX . ngdokjdgsy [ 1 ] - rtP .
Integrator_UpperSat ; _rtZCSV -> hs4jtfjevw [ 1 ] = rtX . ngdokjdgsy [ 1 ] -
rtP . Integrator_LowerSat ; break ; } switch ( rtDW . frkr0zsk1e [ 1 ] ) {
case 1 : _rtZCSV -> p2rzuwna12 [ 1 ] = 0.0 ; _rtZCSV -> lbeis2w42p [ 1 ] =
rtP . Integrator_UpperSat_nzhvzzdcx2 - rtP . Integrator_LowerSat_li4gnjpeq5 ;
break ; case 2 : _rtZCSV -> p2rzuwna12 [ 1 ] = rtP .
Integrator_LowerSat_li4gnjpeq5 - rtP . Integrator_UpperSat_nzhvzzdcx2 ;
_rtZCSV -> lbeis2w42p [ 1 ] = 0.0 ; break ; default : _rtZCSV -> p2rzuwna12 [
1 ] = rtX . ek3saalov4 [ 1 ] - rtP . Integrator_UpperSat_nzhvzzdcx2 ; _rtZCSV
-> lbeis2w42p [ 1 ] = rtX . ek3saalov4 [ 1 ] - rtP .
Integrator_LowerSat_li4gnjpeq5 ; break ; } switch ( rtDW . pfob24qucz [ 1 ] )
{ case 1 : _rtZCSV -> gvfg3p11kr [ 1 ] = 0.0 ; _rtZCSV -> gnktmf3obg [ 1 ] =
rtP . Integrator_UpperSat_lonuxufgp5 - rtP . Integrator_LowerSat_np30azhqa2 ;
break ; case 2 : _rtZCSV -> gvfg3p11kr [ 1 ] = rtP .
Integrator_LowerSat_np30azhqa2 - rtP . Integrator_UpperSat_lonuxufgp5 ;
_rtZCSV -> gnktmf3obg [ 1 ] = 0.0 ; break ; default : _rtZCSV -> gvfg3p11kr [
1 ] = rtX . e0vh2jr0wr [ 1 ] - rtP . Integrator_UpperSat_lonuxufgp5 ; _rtZCSV
-> gnktmf3obg [ 1 ] = rtX . e0vh2jr0wr [ 1 ] - rtP .
Integrator_LowerSat_np30azhqa2 ; break ; } tmp [ 0 ] = rtB . ksirtn35v4 [ 0 ]
; tmp [ 2 ] = rtB . nkbh0ad3dz [ 0 ] ; tmp [ 4 ] = rtB . d3aalpgobu [ 0 ] ;
tmp [ 1 ] = rtB . ksirtn35v4 [ 1 ] ; tmp [ 3 ] = rtB . nkbh0ad3dz [ 1 ] ; tmp
[ 5 ] = rtB . d3aalpgobu [ 1 ] ; tmp_p [ 0 ] = rtB . ksirtn35v4 [ 0 ] ; tmp_p
[ 2 ] = rtB . nkbh0ad3dz [ 0 ] ; tmp_p [ 4 ] = rtB . d3aalpgobu [ 0 ] ; tmp_p
[ 1 ] = rtB . ksirtn35v4 [ 1 ] ; tmp_p [ 3 ] = rtB . nkbh0ad3dz [ 1 ] ; tmp_p
[ 5 ] = rtB . d3aalpgobu [ 1 ] ; for ( i = 0 ; i < 6 ; i ++ ) { _rtZCSV ->
ntqgn34xfa [ i ] = tmp [ i ] - rtP . Saturation_UpperSat ; _rtZCSV ->
jvsj55mahb [ i ] = tmp_p [ i ] - rtP . Saturation_LowerSat ; } } void
MdlTerminate ( void ) { } static void
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_Copy_of_exp2_obstavoid_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Copy_of_exp2_obstavoid_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Copy_of_exp2_obstavoid_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Copy_of_exp2_obstavoid_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Copy_of_exp2_obstavoid_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_Copy_of_exp2_obstavoid_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Copy_of_exp2_obstavoid_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Copy_of_exp2_obstavoid_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Copy_of_exp2_obstavoid_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Copy_of_exp2_obstavoid_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_Copy_of_exp2_obstavoid_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Copy_of_exp2_obstavoid_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void *
) & ( rtB ) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [
10 ] = { "rtDW.pywgroe530" , "rtDW.bp1r1xfrdc" , "rtDW.gc4n03nzfn" ,
"rtDW.acg1flwbux" , "rtDW.fnx2sqboij" , "rtDW.gvjxkecdgi" , "rtDW.buyrvmnubo"
, "rtDW.frkr0zsk1e" , "rtDW.pfob24qucz" , "rtDW.acfsurjur3" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 10 , rtdwDataFieldNames ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( rtDW . pywgroe530 ) , sizeof ( rtDW . pywgroe530 ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( rtDW . bp1r1xfrdc ) , sizeof ( rtDW . bp1r1xfrdc ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . gc4n03nzfn ) , sizeof ( rtDW . gc4n03nzfn ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . acg1flwbux ) , sizeof ( rtDW . acg1flwbux ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . fnx2sqboij ) , sizeof ( rtDW . fnx2sqboij ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . gvjxkecdgi ) , sizeof ( rtDW . gvjxkecdgi ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . buyrvmnubo ) , sizeof ( rtDW . buyrvmnubo ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . frkr0zsk1e ) , sizeof ( rtDW . frkr0zsk1e ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . pfob24qucz ) , sizeof ( rtDW . pfob24qucz ) ) ;
mr_Copy_of_exp2_obstavoid_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . acfsurjur3 ) , sizeof ( rtDW . acfsurjur3 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Copy_of_exp2_obstavoid_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtB ) ,
ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pywgroe530 ) , rtdwData , 0 , 0 , sizeof ( rtDW . pywgroe530 ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bp1r1xfrdc ) , rtdwData , 0 , 1 , sizeof ( rtDW . bp1r1xfrdc ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gc4n03nzfn ) , rtdwData , 0 , 2 , sizeof ( rtDW . gc4n03nzfn ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
acg1flwbux ) , rtdwData , 0 , 3 , sizeof ( rtDW . acg1flwbux ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fnx2sqboij ) , rtdwData , 0 , 4 , sizeof ( rtDW . fnx2sqboij ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gvjxkecdgi ) , rtdwData , 0 , 5 , sizeof ( rtDW . gvjxkecdgi ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
buyrvmnubo ) , rtdwData , 0 , 6 , sizeof ( rtDW . buyrvmnubo ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
frkr0zsk1e ) , rtdwData , 0 , 7 , sizeof ( rtDW . frkr0zsk1e ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pfob24qucz ) , rtdwData , 0 , 8 , sizeof ( rtDW . pfob24qucz ) ) ;
mr_Copy_of_exp2_obstavoid_restoreDataFromMxArray ( ( void * ) & ( rtDW .
acfsurjur3 ) , rtdwData , 0 , 9 , sizeof ( rtDW . acfsurjur3 ) ) ; } }
mxArray * mr_Copy_of_exp2_obstavoid_GetSimStateDisallowedBlocks ( ) { mxArray
* data = mxCreateCellMatrix ( 6 , 3 ) ; mwIndex subs [ 2 ] , offset ; {
static const char * blockType [ 6 ] = { "Scope" , "Scope" , "Scope" , "Scope"
, "Scope" , "Scope" , } ; static const char * blockPath [ 6 ] = {
"Copy_of_exp2_obstavoid/CBF/Scope" , "Copy_of_exp2_obstavoid/CBF/ustar" ,
"Copy_of_exp2_obstavoid/Controller/controller robot1/Scope" ,
"Copy_of_exp2_obstavoid/Controller/controller robot1/Scope1" ,
"Copy_of_exp2_obstavoid/environment/Scope" ,
"Copy_of_exp2_obstavoid/environment/Scope1" , } ; static const int reason [ 6
] = { 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 6 ; ++
( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0
] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 36 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 84 ) ;
ssSetNumBlockIO ( rtS , 48 ) ; ssSetNumBlockParams ( rtS , 291 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3056357310U ) ; ssSetChecksumVal ( rtS , 1 ,
1959472067U ) ; ssSetChecksumVal ( rtS , 2 , 1379717648U ) ; ssSetChecksumVal
( rtS , 3 , 1374270084U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
Copy_of_exp2_obstavoid_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Copy_of_exp2_obstavoid" ) ; ssSetPath ( rtS , "Copy_of_exp2_obstavoid" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 10.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 2 , 2 , 2 , 2 , 2 , 2 , 4 , 4 , 4 , 4 , 4 , 4 }
; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 2 , 2 ,
2 , 2 , 2 , 2 , 4 , 4 , 4 , 4 , 4 , 4 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
} ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 } ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [
] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] =
{ "Copy_of_exp2_obstavoid/environment/robots/Robot1/Integrator1" ,
"Copy_of_exp2_obstavoid/environment/robots/Robot1/Integrator" ,
"Copy_of_exp2_obstavoid/environment/robots/Robot2/Integrator1" ,
"Copy_of_exp2_obstavoid/environment/robots/Robot2/Integrator" ,
"Copy_of_exp2_obstavoid/environment/robots/Robot3/Integrator1" ,
"Copy_of_exp2_obstavoid/environment/robots/Robot3/Integrator" ,
 "Copy_of_exp2_obstavoid/Controller/controller\nrobot1/PID Controller/Integrator/Continuous/Integrator"
,
 "Copy_of_exp2_obstavoid/Controller/controller\nrobot1/PID Controller/Filter/Cont. Filter/Filter"
,
 "Copy_of_exp2_obstavoid/Controller/controller\nrobot2/PID Controller/Integrator/Continuous/Integrator"
,
 "Copy_of_exp2_obstavoid/Controller/controller\nrobot2/PID Controller/Filter/Cont. Filter/Filter"
,
 "Copy_of_exp2_obstavoid/Controller/controller\nrobot3/PID Controller/Integrator/Continuous/Integrator"
,
 "Copy_of_exp2_obstavoid/Controller/controller\nrobot3/PID Controller/Filter/Cont. Filter/Filter"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
} ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 12 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 12 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . k5eqbluoil [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . ngdokjdgsy [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . iusxhffkpj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ek3saalov4 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . g0kkdzau41 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . e0vh2jr0wr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . bnr04lpwtw [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . e32azti1sy [ 0 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . noqzx53y4f [ 0 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . ocre3hnxix [ 0 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . enmqgwm1ac [ 0 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . bssjoyxvjz [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 36 ] ;
static real_T absTol [ 36 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 36 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 36 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 36 ] ; static uint8_T zcAttributes [ 24 ] =
{ ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ;
static ssNonContDerivSigInfo nonContDerivSigInfo [ 1 ] = { { 6 * sizeof (
real_T ) , ( char * ) ( & rtB . iymit1x3xp [ 0 ] ) , ( NULL ) } } ; { int i ;
for ( i = 0 ; i < 36 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.1 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
1 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 24 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 24 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3056357310U ) ; ssSetChecksumVal ( rtS , 1 ,
1959472067U ) ; ssSetChecksumVal ( rtS , 2 , 1379717648U ) ; ssSetChecksumVal
( rtS , 3 , 1374270084U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 7 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Copy_of_exp2_obstavoid_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Copy_of_exp2_obstavoid_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Copy_of_exp2_obstavoid_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
