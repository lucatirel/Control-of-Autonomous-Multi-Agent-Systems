#ifndef RTW_HEADER_Copy_of_exp2_obstavoid_types_h_
#define RTW_HEADER_Copy_of_exp2_obstavoid_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_Vd5mZWsRWPKJNAE15vOYfC_
#define DEFINED_TYPEDEF_FOR_struct_Vd5mZWsRWPKJNAE15vOYfC_
typedef struct { real_T ConstraintTolerance ; real_T MaxIterations ; }
struct_Vd5mZWsRWPKJNAE15vOYfC ;
#endif
#ifndef struct_tag_s1y2iM5eMezSnDs1wcJ6s1E
#define struct_tag_s1y2iM5eMezSnDs1wcJ6s1E
struct tag_s1y2iM5eMezSnDs1wcJ6s1E { real_T xstar [ 7 ] ; real_T fstar ;
real_T firstorderopt ; real_T lambda [ 10 ] ; int32_T state ; real_T
maxConstr ; int32_T iterations ; real_T searchDir [ 7 ] ; } ;
#endif
#ifndef typedef_hzxbyztu40
#define typedef_hzxbyztu40
typedef struct tag_s1y2iM5eMezSnDs1wcJ6s1E hzxbyztu40 ;
#endif
#ifndef struct_tag_slzZ8M58FXlZqTD433BZJUH
#define struct_tag_slzZ8M58FXlZqTD433BZJUH
struct tag_slzZ8M58FXlZqTD433BZJUH { real_T grad [ 7 ] ; real_T Hx [ 6 ] ;
boolean_T hasLinear ; int32_T nvar ; int32_T maxVar ; real_T beta ; real_T
rho ; int32_T objtype ; int32_T prev_objtype ; int32_T prev_nvar ; boolean_T
prev_hasLinear ; real_T gammaScalar ; } ;
#endif
#ifndef typedef_nvpjvsx3xp
#define typedef_nvpjvsx3xp
typedef struct tag_slzZ8M58FXlZqTD433BZJUH nvpjvsx3xp ;
#endif
#ifndef struct_tag_s8VdrbiRqBTaOPdh3e5fO1B
#define struct_tag_s8VdrbiRqBTaOPdh3e5fO1B
struct tag_s8VdrbiRqBTaOPdh3e5fO1B { real_T FMat [ 49 ] ; int32_T ldm ;
int32_T ndims ; int32_T info ; real_T scaleFactor ; boolean_T ConvexCheck ;
real_T regTol_ ; real_T workspace_ [ 336 ] ; real_T workspace2_ [ 336 ] ; } ;
#endif
#ifndef typedef_ljxdlfkika
#define typedef_ljxdlfkika
typedef struct tag_s8VdrbiRqBTaOPdh3e5fO1B ljxdlfkika ;
#endif
#ifndef struct_tag_sL9bDKomAYkxZSVrG9w6En
#define struct_tag_sL9bDKomAYkxZSVrG9w6En
struct tag_sL9bDKomAYkxZSVrG9w6En { int32_T MaxIterations ; real_T
ConstrRelTolFactor ; real_T ProbRelTolFactor ; boolean_T RemainFeasible ; } ;
#endif
#ifndef typedef_f22haufkvl
#define typedef_f22haufkvl
typedef struct tag_sL9bDKomAYkxZSVrG9w6En f22haufkvl ;
#endif
#ifndef struct_tag_sh05DVo42Cw42eXDFqcVsYF
#define struct_tag_sh05DVo42Cw42eXDFqcVsYF
struct tag_sh05DVo42Cw42eXDFqcVsYF { int32_T ldq ; real_T QR [ 70 ] ; real_T
Q [ 49 ] ; int32_T jpvt [ 10 ] ; int32_T mrows ; int32_T ncols ; real_T tau [
7 ] ; int32_T minRowCol ; boolean_T usedPivoting ; } ;
#endif
#ifndef typedef_p4p24nnrhp
#define typedef_p4p24nnrhp
typedef struct tag_sh05DVo42Cw42eXDFqcVsYF p4p24nnrhp ;
#endif
#ifndef struct_tag_sF2UvwOD13dvdNkiYAVXIdC
#define struct_tag_sF2UvwOD13dvdNkiYAVXIdC
struct tag_sF2UvwOD13dvdNkiYAVXIdC { real_T workspace_double [ 70 ] ; int32_T
workspace_int [ 10 ] ; int32_T workspace_sort [ 10 ] ; } ;
#endif
#ifndef typedef_eeqls2hdjr
#define typedef_eeqls2hdjr
typedef struct tag_sF2UvwOD13dvdNkiYAVXIdC eeqls2hdjr ;
#endif
#ifndef struct_tag_seo6tOlosskyKE5dQZ8LPaB
#define struct_tag_seo6tOlosskyKE5dQZ8LPaB
struct tag_seo6tOlosskyKE5dQZ8LPaB { int32_T mConstr ; int32_T mConstrOrig ;
int32_T mConstrMax ; int32_T nVar ; int32_T nVarOrig ; int32_T nVarMax ;
int32_T ldA ; real_T Aineq [ 63 ] ; real_T bineq [ 9 ] ; real_T lb [ 7 ] ;
real_T ub [ 7 ] ; int32_T indexLB [ 7 ] ; int32_T indexUB [ 7 ] ; int32_T
indexFixed [ 7 ] ; int32_T mEqRemoved ; real_T ATwset [ 70 ] ; real_T bwset [
10 ] ; int32_T nActiveConstr ; real_T maxConstrWorkspace [ 10 ] ; int32_T
sizes [ 5 ] ; int32_T sizesNormal [ 5 ] ; int32_T sizesPhaseOne [ 5 ] ;
int32_T sizesRegularized [ 5 ] ; int32_T sizesRegPhaseOne [ 5 ] ; int32_T
isActiveIdx [ 6 ] ; int32_T isActiveIdxNormal [ 6 ] ; int32_T
isActiveIdxPhaseOne [ 6 ] ; int32_T isActiveIdxRegularized [ 6 ] ; int32_T
isActiveIdxRegPhaseOne [ 6 ] ; boolean_T isActiveConstr [ 10 ] ; int32_T Wid
[ 10 ] ; int32_T Wlocalidx [ 10 ] ; int32_T nWConstr [ 5 ] ; int32_T probType
; real_T SLACK0 ; } ;
#endif
#ifndef typedef_i5yhexr3qk
#define typedef_i5yhexr3qk
typedef struct tag_seo6tOlosskyKE5dQZ8LPaB i5yhexr3qk ;
#endif
#ifndef struct_tag_sSOeZ9WO10chPn9Si6PKiCB
#define struct_tag_sSOeZ9WO10chPn9Si6PKiCB
struct tag_sSOeZ9WO10chPn9Si6PKiCB { real_T InitDamping ; char_T
FiniteDifferenceType [ 7 ] ; boolean_T SpecifyObjectiveGradient ; boolean_T
ScaleProblem ; boolean_T SpecifyConstraintGradient ; boolean_T
NonFiniteSupport ; boolean_T IterDisplaySQP ; real_T FiniteDifferenceStepSize
; real_T MaxFunctionEvaluations ; boolean_T IterDisplayQP ; real_T
PricingTolerance ; char_T Algorithm [ 10 ] ; real_T ObjectiveLimit ; real_T
ConstraintTolerance ; real_T OptimalityTolerance ; real_T StepTolerance ;
real_T MaxIterations ; real_T FunctionTolerance ; char_T SolverName [ 8 ] ;
boolean_T CheckGradients ; char_T Diagnostics [ 3 ] ; real_T DiffMaxChange ;
real_T DiffMinChange ; char_T Display [ 5 ] ; char_T FunValCheck [ 3 ] ;
boolean_T UseParallel ; char_T LinearSolver [ 4 ] ; char_T
SubproblemAlgorithm [ 2 ] ; } ;
#endif
#ifndef typedef_epfislbnrs
#define typedef_epfislbnrs
typedef struct tag_sSOeZ9WO10chPn9Si6PKiCB epfislbnrs ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 18
#endif
#ifndef SS_INT64
#define SS_INT64 19
#endif
typedef struct P_ P ;
#endif
