/*
 * DemodulacionAmp2019.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "DemodulacionAmp2019".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Thu Jan 28 15:10:21 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DemodulacionAmp2019_h_
#define RTW_HEADER_DemodulacionAmp2019_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#include <math.h>
#ifndef DemodulacionAmp2019_COMMON_INCLUDES_
# define DemodulacionAmp2019_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "nesl_rtw.h"
#include "DemodulacionAmp2019_43e6ab1_1_gateway.h"
#endif                                /* DemodulacionAmp2019_COMMON_INCLUDES_ */

#include "DemodulacionAmp2019_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "math.h"
#include "rt_matrixlib.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMassMatrixIr
# define rtmGetMassMatrixIr(rtm)       ((rtm)->massMatrixIr)
#endif

#ifndef rtmSetMassMatrixIr
# define rtmSetMassMatrixIr(rtm, val)  ((rtm)->massMatrixIr = (val))
#endif

#ifndef rtmGetMassMatrixJc
# define rtmGetMassMatrixJc(rtm)       ((rtm)->massMatrixJc)
#endif

#ifndef rtmSetMassMatrixJc
# define rtmSetMassMatrixJc(rtm, val)  ((rtm)->massMatrixJc = (val))
#endif

#ifndef rtmGetMassMatrixNzMax
# define rtmGetMassMatrixNzMax(rtm)    ((rtm)->massMatrixNzMax)
#endif

#ifndef rtmSetMassMatrixNzMax
# define rtmSetMassMatrixNzMax(rtm, val) ((rtm)->massMatrixNzMax = (val))
#endif

#ifndef rtmGetMassMatrixPr
# define rtmGetMassMatrixPr(rtm)       ((rtm)->massMatrixPr)
#endif

#ifndef rtmSetMassMatrixPr
# define rtmSetMassMatrixPr(rtm, val)  ((rtm)->massMatrixPr = (val))
#endif

#ifndef rtmGetMassMatrixType
# define rtmGetMassMatrixType(rtm)     ((rtm)->massMatrixType)
#endif

#ifndef rtmSetMassMatrixType
# define rtmSetMassMatrixType(rtm, val) ((rtm)->massMatrixType = (val))
#endif

#ifndef rtmGetOdeDELTA
# define rtmGetOdeDELTA(rtm)           ((rtm)->odeDELTA)
#endif

#ifndef rtmSetOdeDELTA
# define rtmSetOdeDELTA(rtm, val)      ((rtm)->odeDELTA = (val))
#endif

#ifndef rtmGetOdeDFDX
# define rtmGetOdeDFDX(rtm)            ((rtm)->odeDFDX)
#endif

#ifndef rtmSetOdeDFDX
# define rtmSetOdeDFDX(rtm, val)       ((rtm)->odeDFDX = (val))
#endif

#ifndef rtmGetOdeE
# define rtmGetOdeE(rtm)               ((rtm)->odeE)
#endif

#ifndef rtmSetOdeE
# define rtmSetOdeE(rtm, val)          ((rtm)->odeE = (val))
#endif

#ifndef rtmGetOdeF0
# define rtmGetOdeF0(rtm)              ((rtm)->odeF0)
#endif

#ifndef rtmSetOdeF0
# define rtmSetOdeF0(rtm, val)         ((rtm)->odeF0 = (val))
#endif

#ifndef rtmGetOdeF1
# define rtmGetOdeF1(rtm)              ((rtm)->odeF1)
#endif

#ifndef rtmSetOdeF1
# define rtmSetOdeF1(rtm, val)         ((rtm)->odeF1 = (val))
#endif

#ifndef rtmGetOdeFAC
# define rtmGetOdeFAC(rtm)             ((rtm)->odeFAC)
#endif

#ifndef rtmSetOdeFAC
# define rtmSetOdeFAC(rtm, val)        ((rtm)->odeFAC = (val))
#endif

#ifndef rtmGetOdeMASSMATRIX_M
# define rtmGetOdeMASSMATRIX_M(rtm)    ((rtm)->odeMASSMATRIX_M)
#endif

#ifndef rtmSetOdeMASSMATRIX_M
# define rtmSetOdeMASSMATRIX_M(rtm, val) ((rtm)->odeMASSMATRIX_M = (val))
#endif

#ifndef rtmGetOdePIVOTS
# define rtmGetOdePIVOTS(rtm)          ((rtm)->odePIVOTS)
#endif

#ifndef rtmSetOdePIVOTS
# define rtmSetOdePIVOTS(rtm, val)     ((rtm)->odePIVOTS = (val))
#endif

#ifndef rtmGetOdeW
# define rtmGetOdeW(rtm)               ((rtm)->odeW)
#endif

#ifndef rtmSetOdeW
# define rtmSetOdeW(rtm, val)          ((rtm)->odeW = (val))
#endif

#ifndef rtmGetOdeX0
# define rtmGetOdeX0(rtm)              ((rtm)->odeX0)
#endif

#ifndef rtmSetOdeX0
# define rtmSetOdeX0(rtm, val)         ((rtm)->odeX0 = (val))
#endif

#ifndef rtmGetOdeX1START
# define rtmGetOdeX1START(rtm)         ((rtm)->odeX1START)
#endif

#ifndef rtmSetOdeX1START
# define rtmSetOdeX1START(rtm, val)    ((rtm)->odeX1START = (val))
#endif

#ifndef rtmGetOdeXTMP
# define rtmGetOdeXTMP(rtm)            ((rtm)->odeXTMP)
#endif

#ifndef rtmSetOdeXTMP
# define rtmSetOdeXTMP(rtm, val)       ((rtm)->odeXTMP = (val))
#endif

#ifndef rtmGetOdeZTMP
# define rtmGetOdeZTMP(rtm)            ((rtm)->odeZTMP)
#endif

#ifndef rtmSetOdeZTMP
# define rtmSetOdeZTMP(rtm, val)       ((rtm)->odeZTMP = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Product;                      /* '<Root>/Product' */
  real_T STATE_1[3];                   /* '<S8>/STATE_1' */
  real_T OUTPUT_1_0[2];                /* '<S8>/OUTPUT_1_0' */
  real_T Constant2;                    /* '<Root>/Constant2' */
  real_T SFunction;                    /* '<S2>/S-Function' */
  real_T Product1;                     /* '<Root>/Product1' */
  real_T Filtropasabajas1;             /* '<Root>/Filtro pasabajas1' */
  real_T Filtropasabajas;              /* '<Root>/Filtro pasabajas' */
} B_DemodulacionAmp2019_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T STATE_1_Discrete;             /* '<S8>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S8>/OUTPUT_1_0' */
  real_T SFunction_RWORK;              /* '<S2>/S-Function' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  void* STATE_1_Simulator;             /* '<S8>/STATE_1' */
  void* STATE_1_SimData;               /* '<S8>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S8>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S8>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S8>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S8>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S8>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S8>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S8>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S8>/OUTPUT_1_0' */
  void *SFunction_PWORK;               /* '<S2>/S-Function' */
  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData[2];
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData[2];
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData[2];
  } Voltajecuadratura_PWORK;           /* '<Root>/Voltaje cuadratura' */

  struct {
    void *LoggedData[2];
  } Voltajefase_PWORK;                 /* '<Root>/Voltaje fase' */

  int_T STATE_1_Modes;                 /* '<S8>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S8>/OUTPUT_1_0' */
  int_T SFunction_IWORK;               /* '<S2>/S-Function' */
  int32_T STATE_1_MASS_MATRIX_PR;      /* '<S8>/STATE_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S8>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S8>/OUTPUT_1_0' */
} DW_DemodulacionAmp2019_T;

/* Continuous states (default storage) */
typedef struct {
  real_T DemodulacionAmp2019C1vc[3];   /* '<S8>/STATE_1' */
  real_T Filtropasabajas1_CSTATE;      /* '<Root>/Filtro pasabajas1' */
  real_T Filtropasabajas_CSTATE;       /* '<Root>/Filtro pasabajas' */
} X_DemodulacionAmp2019_T;

/* State derivatives (default storage) */
typedef struct {
  real_T DemodulacionAmp2019C1vc[3];   /* '<S8>/STATE_1' */
  real_T Filtropasabajas1_CSTATE;      /* '<Root>/Filtro pasabajas1' */
  real_T Filtropasabajas_CSTATE;       /* '<Root>/Filtro pasabajas' */
} XDot_DemodulacionAmp2019_T;

/* State disabled  */
typedef struct {
  boolean_T DemodulacionAmp2019C1vc[3];/* '<S8>/STATE_1' */
  boolean_T Filtropasabajas1_CSTATE;   /* '<Root>/Filtro pasabajas1' */
  boolean_T Filtropasabajas_CSTATE;    /* '<Root>/Filtro pasabajas' */
} XDis_DemodulacionAmp2019_T;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[3];
  int_T jc[6];
  real_T pr[3];
} MassMatrix_DemodulacionAmp2019_T;

#ifndef ODE14X_INTG
#define ODE14X_INTG

/* ODE14X Integration Data */
typedef struct {
  real_T *x0;
  real_T *f0;
  real_T *x1start;
  real_T *f1;
  real_T *Delta;
  real_T *E;
  real_T *fac;
  real_T *DFDX;
  real_T *W;
  int_T *pivots;
  real_T *xtmp;
  real_T *ztmp;
  real_T *M;
  real_T *M1;
  real_T *Edot;
  real_T *xdot;
  real_T *fminusMxdot;
  boolean_T isFirstStep;
} ODE14X_IntgData;

#endif

/* Parameters (default storage) */
struct P_DemodulacionAmp2019_T_ {
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: MaxDelay
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P2;                 /* Expression: Ts
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P3;                 /* Expression: InitialValue
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T SFunction_P4;                 /* Expression: DFT
                                        * Referenced by: '<S2>/S-Function'
                                        */
  real_T Filtropasabajas1_A;           /* Computed Parameter: Filtropasabajas1_A
                                        * Referenced by: '<Root>/Filtro pasabajas1'
                                        */
  real_T Filtropasabajas1_B;           /* Computed Parameter: Filtropasabajas1_B
                                        * Referenced by: '<Root>/Filtro pasabajas1'
                                        */
  real_T Filtropasabajas1_C;           /* Computed Parameter: Filtropasabajas1_C
                                        * Referenced by: '<Root>/Filtro pasabajas1'
                                        */
  real_T Filtropasabajas1_InitialConditi;/* Expression: 0
                                          * Referenced by: '<Root>/Filtro pasabajas1'
                                          */
  real_T Filtropasabajas_A;            /* Computed Parameter: Filtropasabajas_A
                                        * Referenced by: '<Root>/Filtro pasabajas'
                                        */
  real_T Filtropasabajas_B;            /* Computed Parameter: Filtropasabajas_B
                                        * Referenced by: '<Root>/Filtro pasabajas'
                                        */
  real_T Filtropasabajas_C;            /* Computed Parameter: Filtropasabajas_C
                                        * Referenced by: '<Root>/Filtro pasabajas'
                                        */
  real_T Filtropasabajas_InitialConditio;/* Expression: 0
                                          * Referenced by: '<Root>/Filtro pasabajas'
                                          */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<Root>/Manual Switch'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_DemodulacionAmp2019_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct _ssPortInfo2 inputOutputPortInfo2[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;
  } NonInlinedSFcns;

  X_DemodulacionAmp2019_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  int_T massMatrixType;
  int_T massMatrixNzMax;
  int_T *massMatrixIr;
  int_T *massMatrixJc;
  real_T *massMatrixPr;
  real_T odeX0[5];
  real_T odeF0[5];
  real_T odeX1START[5];
  real_T odeF1[5];
  real_T odeDELTA[5];
  real_T odeE[4*5];
  real_T odeFAC[5];
  real_T odeDFDX[5*5];
  real_T odeW[5*5];
  int_T odePIVOTS[5];
  real_T odeXTMP[5];
  real_T odeZTMP[5];
  real_T odeMASSMATRIX_M[3];
  ODE14X_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_DemodulacionAmp2019_T DemodulacionAmp2019_P;

/* Block signals (default storage) */
extern B_DemodulacionAmp2019_T DemodulacionAmp2019_B;

/* Continuous states (default storage) */
extern X_DemodulacionAmp2019_T DemodulacionAmp2019_X;

/* global MassMatrix */
extern MassMatrix_DemodulacionAmp2019_T DemodulacionAmp2019_MassMatrix;

/* Block states (default storage) */
extern DW_DemodulacionAmp2019_T DemodulacionAmp2019_DW;

/* Model entry point functions */
extern void DemodulacionAmp2019_initialize(void);
extern void DemodulacionAmp2019_step(void);
extern void DemodulacionAmp2019_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DemodulacionAmp2019_T *const DemodulacionAmp2019_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DemodulacionAmp2019'
 * '<S1>'   : 'DemodulacionAmp2019/Circuit Gain Inverting Op-Amp'
 * '<S2>'   : 'DemodulacionAmp2019/Control de fase'
 * '<S3>'   : 'DemodulacionAmp2019/Sensor Vin'
 * '<S4>'   : 'DemodulacionAmp2019/Sensor Vout'
 * '<S5>'   : 'DemodulacionAmp2019/Sensor Vin/PS-Simulink Converter'
 * '<S6>'   : 'DemodulacionAmp2019/Sensor Vin/Solver Configuration'
 * '<S7>'   : 'DemodulacionAmp2019/Sensor Vin/PS-Simulink Converter/EVAL_KEY'
 * '<S8>'   : 'DemodulacionAmp2019/Sensor Vin/Solver Configuration/EVAL_KEY'
 * '<S9>'   : 'DemodulacionAmp2019/Sensor Vout/PS-Simulink Converter'
 * '<S10>'  : 'DemodulacionAmp2019/Sensor Vout/PS-Simulink Converter/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_DemodulacionAmp2019_h_ */
