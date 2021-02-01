/*
 * DemodulacionAmp2019.c
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

#include "DemodulacionAmp2019.h"
#include "DemodulacionAmp2019_private.h"

/* Block signals (default storage) */
B_DemodulacionAmp2019_T DemodulacionAmp2019_B;

/* Continuous states */
X_DemodulacionAmp2019_T DemodulacionAmp2019_X;

/* Mass Matrices */
MassMatrix_DemodulacionAmp2019_T DemodulacionAmp2019_MassMatrix;

/* Block states (default storage) */
DW_DemodulacionAmp2019_T DemodulacionAmp2019_DW;

/* Real-time model */
RT_MODEL_DemodulacionAmp2019_T DemodulacionAmp2019_M_;
RT_MODEL_DemodulacionAmp2019_T *const DemodulacionAmp2019_M =
  &DemodulacionAmp2019_M_;

/* ForcingFunction for root system: '<Root>' */
void DemodulacionAmp2019_forcingfunction(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  int_T tmp_0;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  int_T is;
  XDot_DemodulacionAmp2019_T *_rtXdot;
  _rtXdot = ((XDot_DemodulacionAmp2019_T *) DemodulacionAmp2019_M->derivs);

  /* ForcingFunction for SimscapeExecutionBlock: '<S8>/STATE_1' */
  simulationData = (NeslSimulationData *)DemodulacionAmp2019_DW.STATE_1_SimData;
  time = DemodulacionAmp2019_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 3;
  simulationData->mData->mContStates.mX =
    &DemodulacionAmp2019_X.DemodulacionAmp2019C1vc[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &DemodulacionAmp2019_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &DemodulacionAmp2019_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (DemodulacionAmp2019_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&DemodulacionAmp2019_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0 = 0;
  simulationData->mData->mInputValues.mN = 0;
  simulationData->mData->mInputOffsets.mN = 1;
  simulationData->mData->mInputOffsets.mX = &tmp_0;
  simulationData->mData->mDx.mN = 3;
  simulationData->mData->mDx.mX = &_rtXdot->DemodulacionAmp2019C1vc[0];
  diagnosticManager = (NeuDiagnosticManager *)
    DemodulacionAmp2019_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method((NeslSimulator *)
    DemodulacionAmp2019_DW.STATE_1_Simulator, NESL_SIM_FORCINGFUNCTION,
    simulationData, diagnosticManager);
  if (is != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
    }
  }

  /* End of ForcingFunction for SimscapeExecutionBlock: '<S8>/STATE_1' */

  /* ForcingFunction for StateSpace: '<Root>/Filtro pasabajas1' */
  _rtXdot->Filtropasabajas1_CSTATE = 0.0;
  _rtXdot->Filtropasabajas1_CSTATE += DemodulacionAmp2019_P.Filtropasabajas1_A *
    DemodulacionAmp2019_X.Filtropasabajas1_CSTATE;
  _rtXdot->Filtropasabajas1_CSTATE += DemodulacionAmp2019_P.Filtropasabajas1_B *
    DemodulacionAmp2019_B.Product1;

  /* ForcingFunction for StateSpace: '<Root>/Filtro pasabajas' */
  _rtXdot->Filtropasabajas_CSTATE = 0.0;
  _rtXdot->Filtropasabajas_CSTATE += DemodulacionAmp2019_P.Filtropasabajas_A *
    DemodulacionAmp2019_X.Filtropasabajas_CSTATE;
  _rtXdot->Filtropasabajas_CSTATE += DemodulacionAmp2019_P.Filtropasabajas_B *
    DemodulacionAmp2019_B.Product;
}

/* MassMatrix for root system: '<Root>' */
void DemodulacionAmp2019_massmatrix(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  int_T tmp_0;
  real_T *tmp_1;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;

  /* MassMatrix for SimscapeExecutionBlock: '<S8>/STATE_1' */
  simulationData = (NeslSimulationData *)DemodulacionAmp2019_DW.STATE_1_SimData;
  time = DemodulacionAmp2019_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 3;
  simulationData->mData->mContStates.mX =
    &DemodulacionAmp2019_X.DemodulacionAmp2019C1vc[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &DemodulacionAmp2019_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &DemodulacionAmp2019_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (DemodulacionAmp2019_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&DemodulacionAmp2019_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0 = 0;
  simulationData->mData->mInputValues.mN = 0;
  simulationData->mData->mInputOffsets.mN = 1;
  simulationData->mData->mInputOffsets.mX = &tmp_0;
  tmp_1 = DemodulacionAmp2019_MassMatrix.pr;
  tmp_1 = double_pointer_shift(tmp_1,
    DemodulacionAmp2019_DW.STATE_1_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 1;
  simulationData->mData->mMassMatrixPr.mX = tmp_1;
  diagnosticManager = (NeuDiagnosticManager *)
    DemodulacionAmp2019_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    DemodulacionAmp2019_DW.STATE_1_Simulator, NESL_SIM_MASSMATRIX,
    simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
    }
  }

  /* End of MassMatrix for SimscapeExecutionBlock: '<S8>/STATE_1' */
}

void local_evaluateMassMatrix(RTWSolverInfo *si, real_T *Mdest )
{
  /* Refresh global mass matrix */
  DemodulacionAmp2019_massmatrix();

  /* Copy the mass matrix from system to the destination, if needed. */
  if (Mdest != rtsiGetSolverMassMatrixPr(si)) {
    real_T *Msrc = rtsiGetSolverMassMatrixPr(si);
    int_T nzmax = rtsiGetSolverMassMatrixNzMax(si);
    (void) memcpy(Mdest, Msrc,
                  (uint_T)nzmax*sizeof(real_T));
  }
}

/* Simplified version of numjac.cpp, for use with RTW. */
void local_numjac( RTWSolverInfo *si, real_T *y, const real_T *Fty, real_T *fac,
                  real_T *dFdy )
{
  /* constants */
  real_T THRESH = 1e-6;
  real_T EPS = 2.2e-16;                /* utGetEps(); */
  real_T BL = pow(EPS, 0.75);
  real_T BU = pow(EPS, 0.25);
  real_T FACMIN = pow(EPS, 0.78);
  real_T FACMAX = 0.1;
  int_T nx = 5;
  real_T *x = rtsiGetContStates(si);
  real_T del;
  real_T difmax;
  real_T FdelRowmax;
  real_T temp;
  real_T Fdiff;
  real_T maybe;
  real_T xscale;
  real_T fscale;
  real_T *p;
  int_T rowmax;
  int_T i,j;
  if (x != y)
    (void) memcpy(x, y,
                  (uint_T)nx*sizeof(real_T));
  rtsiSetSolverComputingJacobian(si,true);
  for (p = dFdy, j = 0; j < nx; j++, p += nx) {
    /* Select an increment del for a difference approximation to
       column j of dFdy.  The vector fac accounts for experience
       gained in previous calls to numjac. */
    xscale = fabs(x[j]);
    if (xscale < THRESH)
      xscale = THRESH;
    temp = (x[j] + fac[j]*xscale);
    del = temp - y[j];
    while (del == 0.0) {
      if (fac[j] < FACMAX) {
        fac[j] *= 100.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
        temp = (x[j] + fac[j]*xscale);
        del = temp - x[j];
      } else {
        del = THRESH;                  /* thresh is nonzero */
        break;
      }
    }

    /* Keep del pointing into region. */
    if (Fty[j] >= 0.0)
      del = fabs(del);
    else
      del = -fabs(del);

    /* Form a difference approximation to column j of dFdy. */
    temp = x[j];
    x[j] += del;
    DemodulacionAmp2019_step();
    rtsiSetdX(si,p);
    DemodulacionAmp2019_forcingfunction();
    x[j] = temp;
    difmax = 0.0;
    rowmax = 0;
    FdelRowmax = p[0];
    temp = 1.0 / del;
    for (i = 0; i < nx; i++) {
      Fdiff = p[i] - Fty[i];
      maybe = fabs(Fdiff);
      if (maybe > difmax) {
        difmax = maybe;
        rowmax = i;
        FdelRowmax = p[i];
      }

      p[i] = temp * Fdiff;
    }

    /* Adjust fac for next call to numjac. */
    if (((FdelRowmax != 0.0) && (Fty[rowmax] != 0.0)) || (difmax == 0.0)) {
      fscale = fabs(FdelRowmax);
      if (fscale < fabs(Fty[rowmax]))
        fscale = fabs(Fty[rowmax]);
      if (difmax <= BL*fscale) {
        /* The difference is small, so increase the increment. */
        fac[j] *= 10.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
      } else if (difmax > BU*fscale) {
        /* The difference is large, so reduce the increment. */
        fac[j] *= 0.1;
        if (fac[j] < FACMIN)
          fac[j] = FACMIN;
      }
    }
  }

  rtsiSetSolverComputingJacobian(si,false);
}                                      /* end local_numjac */

/*
 * This function updates continuous states using the ODE14x fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static int_T rt_ODE14x_N[4] = { 12, 8, 6, 4 };

  time_T t0 = rtsiGetT(si);
  time_T t1 = t0;
  time_T h = rtsiGetStepSize(si);
  real_T *x1 = rtsiGetContStates(si);
  int_T order = rtsiGetSolverExtrapolationOrder(si);
  int_T numIter = rtsiGetSolverNumberNewtonIterations(si);
  ODE14X_IntgData *id = (ODE14X_IntgData *)rtsiGetSolverData(si);
  real_T *x0 = id->x0;
  real_T *f0 = id->f0;
  real_T *x1start = id->x1start;
  real_T *f1 = id->f1;
  real_T *Delta = id->Delta;
  real_T *E = id->E;
  real_T *fac = id->fac;
  real_T *dfdx = id->DFDX;
  real_T *W = id->W;
  int_T *pivots = id->pivots;
  real_T *xtmp = id->xtmp;
  real_T *ztmp = id->ztmp;
  int_T *Mpattern_ir = rtsiGetSolverMassMatrixIr(si);
  int_T *Mpattern_jc = rtsiGetSolverMassMatrixJc(si);
  real_T *M = id->M;
  int_T col,row,rowidx;
  int_T *N = &(rt_ODE14x_N[0]);
  int_T i,j,k,iter;
  int_T nx = 5;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(x0, x1,
                (uint_T)nx*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  if (id->isFirstStep) {
    local_evaluateMassMatrix(si,M );
    id->isFirstStep = false;
  }

  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  DemodulacionAmp2019_forcingfunction();
  local_numjac(si,x0,f0,fac,dfdx );
  for (j = 0; j < order; j++) {
    real_T *p;
    real_T hN = h/N[j];

    /* Get the iteration matrix and solution at t0 */

    /* [L,U] = lu(M - hN*J) */
    (void) memcpy(W, dfdx,
                  (uint_T)nx*nx*sizeof(real_T));
    for (p = W, i = 0; i < nx*nx; i++, p++) {
      *p *= (-hN);
    }

    for (col = 0, p = W; col < nx; col++, p += nx) {
      for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
        real_T m_row_col = M[rowidx];
        row = Mpattern_ir[rowidx];
        p[row] += m_row_col;
      }
    }

    rt_lu_real(W, nx,
               pivots);

    /* First Newton's iteration at t0. */
    /* rhs = hN*f0 */
    for (i = 0; i < nx; i++) {
      Delta[i] = hN*f0[i];
    }

    /* Delta = (U \ (L \ rhs)) */
    rt_ForwardSubstitutionRR_Dbl(W, Delta,
      f1, nx,
      1, pivots,
      1);
    rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
      Delta, nx,
      1, 0);

    /* ytmp = y0 + Delta
       ztmp = (ytmp-y0)/h
     */
    (void) memcpy(x1, x0,
                  (uint_T)nx*sizeof(real_T));
    for (i = 0; i < nx; i++) {
      x1[i] += Delta[i];
      ztmp[i] = Delta[i]/hN;
    }

    /* Additional Newton's iterations, if desired.
       for iter = 2:NewtIter
       rhs = hN*feval(odefun,tn,ytmp,extraArgs{:}) - M*(ytmp - yn);
       if statedepM   % only for state dep. Mdel ~= 0
       Mdel = M - feval(massfun,tn,ytmp);
       rhs = rhs + Mdel*ztmp*h;
       end
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       ztmp = (ytmp - yn)/h
       end
     */
    rtsiSetT(si, t0);
    rtsiSetdX(si, f1);
    for (iter = 1; iter < numIter; iter++) {
      DemodulacionAmp2019_step();
      DemodulacionAmp2019_forcingfunction();
      for (i = 0; i < nx; i++) {
        Delta[i] = hN*f1[i];
        xtmp[i] = x1[i] - x0[i];
      }

      /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
      for (col = 0; col < nx; col++) {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M[rowidx];
          row = Mpattern_ir[rowidx];
          Delta[row] -= m_row_col*xtmp[col];
        }
      }

      rt_ForwardSubstitutionRR_Dbl(W, Delta,
        f1, nx,
        1, pivots,
        1);
      rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
        Delta, nx,
        1, 0);

      /* ytmp = ytmp + delta
         ztmp = (ytmp - yn)/h
       */
      for (i = 0; i < nx; i++) {
        x1[i] += Delta[i];
        ztmp[i] = (x1[i] - x0[i])/hN;
      }
    }

    /* Steps from t0+hN to t1 -- subintegration of N(j) steps for extrapolation
       ttmp = t0;
       for i = 2:N(j)
       ttmp = ttmp + hN
       ytmp0 = ytmp;
       for iter = 1:NewtIter
       rhs = (ytmp0 - ytmp) + hN*feval(odefun,ttmp,ytmp,extraArgs{:});
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       end
       end
     */
    for (k = 1; k < N[j]; k++) {
      t1 = t0 + k*hN;
      (void) memcpy(x1start, x1,
                    (uint_T)nx*sizeof(real_T));
      rtsiSetT(si, t1);
      rtsiSetdX(si, f1);
      for (iter = 0; iter < numIter; iter++) {
        DemodulacionAmp2019_step();
        DemodulacionAmp2019_forcingfunction();
        if (iter == 0) {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
          }
        } else {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
            xtmp[i] = (x1[i]-x1start[i]);
          }

          /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
          for (col = 0; col < nx; col++) {
            for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx
                 ++) {
              real_T m_row_col = M[rowidx];
              row = Mpattern_ir[rowidx];
              Delta[row] -= m_row_col*xtmp[col];
            }
          }
        }

        rt_ForwardSubstitutionRR_Dbl(W, Delta,
          f1, nx,
          1, pivots,
          1);
        rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
          Delta, nx,
          1, 0);

        /* ytmp = ytmp + Delta
           ztmp = (ytmp - ytmp0)/h
         */
        for (i = 0; i < nx; i++) {
          x1[i] += Delta[i];
          ztmp[i] = (x1[i] - x1start[i])/hN;
        }
      }
    }

    /* Extrapolate to order j
       E(:,j) = ytmp
       for k = j:-1:2
       coef = N(k-1)/(N(j) - N(k-1))
       E(:,k-1) = E(:,k) + coef*( E(:,k) - E(:,k-1) )
       end
     */
    (void) memcpy(&(E[nx*j]), x1,
                  (uint_T)nx*sizeof(real_T));
    for (k = j; k > 0; k--) {
      real_T coef = (real_T)(N[k-1]) / (N[j]-N[k-1]);
      for (i = 0; i < nx; i++) {
        x1[i] = E[nx*k+i] + coef*(E[nx*k+i] - E[nx*(k-1)+i]);
      }

      (void) memcpy(&(E[nx*(k-1)]), x1,
                    (uint_T)nx*sizeof(real_T));
    }
  }

  /* x1 = E(:,1); */
  (void) memcpy(x1, E,
                (uint_T)nx*sizeof(real_T));

  /* t1 = t0 + h; */
  rtsiSetT(si,rtsiGetSolverStopTime(si));
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void DemodulacionAmp2019_step(void)
{
  /* local block i/o variables */
  real_T rtb_ManualSwitch;
  if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
    /* set solver stop time */
    if (!(DemodulacionAmp2019_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&DemodulacionAmp2019_M->solverInfo,
                            ((DemodulacionAmp2019_M->Timing.clockTickH0 + 1) *
        DemodulacionAmp2019_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&DemodulacionAmp2019_M->solverInfo,
                            ((DemodulacionAmp2019_M->Timing.clockTick0 + 1) *
        DemodulacionAmp2019_M->Timing.stepSize0 +
        DemodulacionAmp2019_M->Timing.clockTickH0 *
        DemodulacionAmp2019_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(DemodulacionAmp2019_M)) {
    DemodulacionAmp2019_M->Timing.t[0] = rtsiGetT
      (&DemodulacionAmp2019_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    boolean_T tmp_0;
    int_T tmp_1;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T time_0;
    real_T tmp_2[3];
    int_T tmp_3[2];
    int_T iy;
    real_T time_tmp;
    if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
      /* ManualSwitch: '<Root>/Manual Switch' incorporates:
       *  Gain: '<Root>/Gain'
       *  Gain: '<Root>/Gain1'
       */
      if (DemodulacionAmp2019_P.ManualSwitch_CurrentSetting == 1) {
        rtb_ManualSwitch = DemodulacionAmp2019_P.Gain_Gain * 0.0;
      } else {
        rtb_ManualSwitch = DemodulacionAmp2019_P.Gain1_Gain * 0.0;
      }

      /* End of ManualSwitch: '<Root>/Manual Switch' */
      /* Product: '<Root>/Product' */
      DemodulacionAmp2019_B.Product = rtb_ManualSwitch * 0.0;
    }

    /* SimscapeExecutionBlock: '<S8>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S8>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)
      DemodulacionAmp2019_DW.STATE_1_SimData;
    time_tmp = DemodulacionAmp2019_M->Timing.t[0];
    time = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 3;
    simulationData->mData->mContStates.mX =
      &DemodulacionAmp2019_X.DemodulacionAmp2019C1vc[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &DemodulacionAmp2019_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &DemodulacionAmp2019_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    tmp = rtmIsMajorTimeStep(DemodulacionAmp2019_M);
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&DemodulacionAmp2019_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_1 = 0;
    simulationData->mData->mInputValues.mN = 0;
    simulationData->mData->mInputOffsets.mN = 1;
    simulationData->mData->mInputOffsets.mX = &tmp_1;
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &DemodulacionAmp2019_B.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      DemodulacionAmp2019_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    iy = ne_simulator_method((NeslSimulator *)
      DemodulacionAmp2019_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (iy != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S8>/STATE_1' */

    /* SimscapeExecutionBlock: '<S8>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_SimData;
    time_0 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &DemodulacionAmp2019_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &DemodulacionAmp2019_DW.OUTPUT_1_0_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_3[0] = 0;
    tmp_2[0] = DemodulacionAmp2019_B.STATE_1[0];
    tmp_2[1] = DemodulacionAmp2019_B.STATE_1[1];
    tmp_2[2] = DemodulacionAmp2019_B.STATE_1[2];
    tmp_3[1] = 3;
    simulationData->mData->mInputValues.mN = 3;
    simulationData->mData->mInputValues.mX = &tmp_2[0];
    simulationData->mData->mInputOffsets.mN = 2;
    simulationData->mData->mInputOffsets.mX = &tmp_3[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &DemodulacionAmp2019_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    iy = ne_simulator_method((NeslSimulator *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (iy != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
      }
    }

    if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
      /* Constant: '<Root>/Constant2' */
      DemodulacionAmp2019_B.Constant2 = DemodulacionAmp2019_P.Constant2_Value;

      /* S-Function (sfun_discreteVariableDelay): '<S2>/S-Function' */

      /* Level2 S-Function Block: '<S2>/S-Function' (sfun_discreteVariableDelay) */
      {
        SimStruct *rts = DemodulacionAmp2019_M->childSfunctions[0];
        sfcnOutputs(rts,1);
      }

      /* Product: '<Root>/Product1' */
      DemodulacionAmp2019_B.Product1 = 0.0 * DemodulacionAmp2019_B.SFunction;
    }

    /* StateSpace: '<Root>/Filtro pasabajas1' */
    DemodulacionAmp2019_B.Filtropasabajas1 = 0.0;
    DemodulacionAmp2019_B.Filtropasabajas1 +=
      DemodulacionAmp2019_P.Filtropasabajas1_C *
      DemodulacionAmp2019_X.Filtropasabajas1_CSTATE;
    if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
    }

    /* StateSpace: '<Root>/Filtro pasabajas' */
    DemodulacionAmp2019_B.Filtropasabajas = 0.0;
    DemodulacionAmp2019_B.Filtropasabajas +=
      DemodulacionAmp2019_P.Filtropasabajas_C *
      DemodulacionAmp2019_X.Filtropasabajas_CSTATE;
    if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
    }
  }

  if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
    /* Matfile logging */
    rt_UpdateTXYLogVars(DemodulacionAmp2019_M->rtwLogInfo,
                        (DemodulacionAmp2019_M->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    int_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_1;
    char *msg;

    /* Update for SimscapeExecutionBlock: '<S8>/STATE_1' */
    simulationData = (NeslSimulationData *)
      DemodulacionAmp2019_DW.STATE_1_SimData;
    time = DemodulacionAmp2019_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 3;
    simulationData->mData->mContStates.mX =
      &DemodulacionAmp2019_X.DemodulacionAmp2019C1vc[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &DemodulacionAmp2019_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &DemodulacionAmp2019_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
      (DemodulacionAmp2019_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&DemodulacionAmp2019_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_0 = 0;
    simulationData->mData->mInputValues.mN = 0;
    simulationData->mData->mInputOffsets.mN = 1;
    simulationData->mData->mInputOffsets.mX = &tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      DemodulacionAmp2019_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)
      DemodulacionAmp2019_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_1 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S8>/STATE_1' */
    if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
      /* Update for S-Function (sfun_discreteVariableDelay): '<S2>/S-Function' */
      /* Level2 S-Function Block: '<S2>/S-Function' (sfun_discreteVariableDelay) */
      {
        SimStruct *rts = DemodulacionAmp2019_M->childSfunctions[0];
        sfcnUpdate(rts,1);
        if (ssGetErrorStatus(rts) != (NULL))
          return;
      }
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(DemodulacionAmp2019_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(DemodulacionAmp2019_M)!=-1) &&
          !((rtmGetTFinal(DemodulacionAmp2019_M)-DemodulacionAmp2019_M->
             Timing.t[1]) > DemodulacionAmp2019_M->Timing.t[1] * (DBL_EPSILON)))
      {
        rtmSetErrorStatus(DemodulacionAmp2019_M, "Simulation finished");
      }

      if (rtmGetStopRequested(DemodulacionAmp2019_M)) {
        rtmSetErrorStatus(DemodulacionAmp2019_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&DemodulacionAmp2019_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++DemodulacionAmp2019_M->Timing.clockTick0)) {
      ++DemodulacionAmp2019_M->Timing.clockTickH0;
    }

    DemodulacionAmp2019_M->Timing.t[0] = rtsiGetSolverStopTime
      (&DemodulacionAmp2019_M->solverInfo);

    {
      /* Update absolute timer for sample time: [1.0E-6s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The absolute time is the multiplication of "clockTick1"
       * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
       * overflow during the application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      if (!(++DemodulacionAmp2019_M->Timing.clockTick1)) {
        ++DemodulacionAmp2019_M->Timing.clockTickH1;
      }

      DemodulacionAmp2019_M->Timing.t[1] =
        DemodulacionAmp2019_M->Timing.clockTick1 *
        DemodulacionAmp2019_M->Timing.stepSize1 +
        DemodulacionAmp2019_M->Timing.clockTickH1 *
        DemodulacionAmp2019_M->Timing.stepSize1 * 4294967296.0;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void DemodulacionAmp2019_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  int_T tmp_0;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  int_T is;
  XDot_DemodulacionAmp2019_T *_rtXdot;
  _rtXdot = ((XDot_DemodulacionAmp2019_T *) DemodulacionAmp2019_M->derivs);

  /* Derivatives for SimscapeExecutionBlock: '<S8>/STATE_1' */
  simulationData = (NeslSimulationData *)DemodulacionAmp2019_DW.STATE_1_SimData;
  time = DemodulacionAmp2019_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 3;
  simulationData->mData->mContStates.mX =
    &DemodulacionAmp2019_X.DemodulacionAmp2019C1vc[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &DemodulacionAmp2019_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &DemodulacionAmp2019_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (DemodulacionAmp2019_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&DemodulacionAmp2019_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0 = 0;
  simulationData->mData->mInputValues.mN = 0;
  simulationData->mData->mInputOffsets.mN = 1;
  simulationData->mData->mInputOffsets.mX = &tmp_0;
  simulationData->mData->mDx.mN = 3;
  simulationData->mData->mDx.mX = &_rtXdot->DemodulacionAmp2019C1vc[0];
  diagnosticManager = (NeuDiagnosticManager *)
    DemodulacionAmp2019_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method((NeslSimulator *)
    DemodulacionAmp2019_DW.STATE_1_Simulator, NESL_SIM_DERIVATIVES,
    simulationData, diagnosticManager);
  if (is != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S8>/STATE_1' */

  /* Derivatives for StateSpace: '<Root>/Filtro pasabajas1' */
  _rtXdot->Filtropasabajas1_CSTATE = 0.0;
  _rtXdot->Filtropasabajas1_CSTATE += DemodulacionAmp2019_P.Filtropasabajas1_A *
    DemodulacionAmp2019_X.Filtropasabajas1_CSTATE;
  _rtXdot->Filtropasabajas1_CSTATE += DemodulacionAmp2019_P.Filtropasabajas1_B *
    DemodulacionAmp2019_B.Product1;

  /* Derivatives for StateSpace: '<Root>/Filtro pasabajas' */
  _rtXdot->Filtropasabajas_CSTATE = 0.0;
  _rtXdot->Filtropasabajas_CSTATE += DemodulacionAmp2019_P.Filtropasabajas_A *
    DemodulacionAmp2019_X.Filtropasabajas_CSTATE;
  _rtXdot->Filtropasabajas_CSTATE += DemodulacionAmp2019_P.Filtropasabajas_B *
    DemodulacionAmp2019_B.Product;
}

/* Model initialize function */
void DemodulacionAmp2019_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)DemodulacionAmp2019_M, 0,
                sizeof(RT_MODEL_DemodulacionAmp2019_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&DemodulacionAmp2019_M->solverInfo,
                          &DemodulacionAmp2019_M->Timing.simTimeStep);
    rtsiSetTPtr(&DemodulacionAmp2019_M->solverInfo, &rtmGetTPtr
                (DemodulacionAmp2019_M));
    rtsiSetStepSizePtr(&DemodulacionAmp2019_M->solverInfo,
                       &DemodulacionAmp2019_M->Timing.stepSize0);
    rtsiSetdXPtr(&DemodulacionAmp2019_M->solverInfo,
                 &DemodulacionAmp2019_M->derivs);
    rtsiSetContStatesPtr(&DemodulacionAmp2019_M->solverInfo, (real_T **)
                         &DemodulacionAmp2019_M->contStates);
    rtsiSetNumContStatesPtr(&DemodulacionAmp2019_M->solverInfo,
      &DemodulacionAmp2019_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&DemodulacionAmp2019_M->solverInfo,
      &DemodulacionAmp2019_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&DemodulacionAmp2019_M->solverInfo,
      &DemodulacionAmp2019_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&DemodulacionAmp2019_M->solverInfo,
      &DemodulacionAmp2019_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&DemodulacionAmp2019_M->solverInfo,
                          (&rtmGetErrorStatus(DemodulacionAmp2019_M)));
    rtsiSetSolverMassMatrixIr(&DemodulacionAmp2019_M->solverInfo,
      DemodulacionAmp2019_MassMatrix.ir);
    rtsiSetSolverMassMatrixJc(&DemodulacionAmp2019_M->solverInfo,
      DemodulacionAmp2019_MassMatrix.jc);
    rtsiSetSolverMassMatrixPr(&DemodulacionAmp2019_M->solverInfo,
      DemodulacionAmp2019_MassMatrix.pr);
    rtsiSetRTModelPtr(&DemodulacionAmp2019_M->solverInfo, DemodulacionAmp2019_M);
  }

  rtsiSetSimTimeStep(&DemodulacionAmp2019_M->solverInfo, MAJOR_TIME_STEP);
  DemodulacionAmp2019_M->intgData.x0 = DemodulacionAmp2019_M->odeX0;
  DemodulacionAmp2019_M->intgData.f0 = DemodulacionAmp2019_M->odeF0;
  DemodulacionAmp2019_M->intgData.x1start = DemodulacionAmp2019_M->odeX1START;
  DemodulacionAmp2019_M->intgData.f1 = DemodulacionAmp2019_M->odeF1;
  DemodulacionAmp2019_M->intgData.Delta = DemodulacionAmp2019_M->odeDELTA;
  DemodulacionAmp2019_M->intgData.E = DemodulacionAmp2019_M->odeE;
  DemodulacionAmp2019_M->intgData.fac = DemodulacionAmp2019_M->odeFAC;

  /* initialize */
  {
    int_T i;
    real_T *f = DemodulacionAmp2019_M->intgData.fac;
    for (i = 0; i < (int_T)(sizeof(DemodulacionAmp2019_M->odeFAC)/sizeof(real_T));
         i++) {
      f[i] = 1.5e-8;
    }
  }

  DemodulacionAmp2019_M->intgData.DFDX = DemodulacionAmp2019_M->odeDFDX;
  DemodulacionAmp2019_M->intgData.W = DemodulacionAmp2019_M->odeW;
  DemodulacionAmp2019_M->intgData.pivots = DemodulacionAmp2019_M->odePIVOTS;
  DemodulacionAmp2019_M->intgData.xtmp = DemodulacionAmp2019_M->odeXTMP;
  DemodulacionAmp2019_M->intgData.ztmp = DemodulacionAmp2019_M->odeZTMP;
  DemodulacionAmp2019_M->intgData.M = DemodulacionAmp2019_M->odeMASSMATRIX_M;
  DemodulacionAmp2019_M->intgData.isFirstStep = true;
  rtsiSetSolverExtrapolationOrder(&DemodulacionAmp2019_M->solverInfo, 4);
  rtsiSetSolverNumberNewtonIterations(&DemodulacionAmp2019_M->solverInfo, 1);
  DemodulacionAmp2019_M->contStates = ((X_DemodulacionAmp2019_T *)
    &DemodulacionAmp2019_X);
  DemodulacionAmp2019_M->massMatrixType = ((ssMatrixType)1);
  DemodulacionAmp2019_M->massMatrixNzMax = (3);
  DemodulacionAmp2019_M->massMatrixIr = (DemodulacionAmp2019_MassMatrix.ir);
  DemodulacionAmp2019_M->massMatrixJc = (DemodulacionAmp2019_MassMatrix.jc);
  DemodulacionAmp2019_M->massMatrixPr = (DemodulacionAmp2019_MassMatrix.pr);
  rtsiSetSolverMassMatrixType(&DemodulacionAmp2019_M->solverInfo, (ssMatrixType)
    1);
  rtsiSetSolverMassMatrixNzMax(&DemodulacionAmp2019_M->solverInfo, 3);
  rtsiSetSolverData(&DemodulacionAmp2019_M->solverInfo, (void *)
                    &DemodulacionAmp2019_M->intgData);
  rtsiSetSolverName(&DemodulacionAmp2019_M->solverInfo,"ode14x");
  DemodulacionAmp2019_M->solverInfoPtr = (&DemodulacionAmp2019_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = DemodulacionAmp2019_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    DemodulacionAmp2019_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    DemodulacionAmp2019_M->Timing.sampleTimes =
      (&DemodulacionAmp2019_M->Timing.sampleTimesArray[0]);
    DemodulacionAmp2019_M->Timing.offsetTimes =
      (&DemodulacionAmp2019_M->Timing.offsetTimesArray[0]);

    /* task periods */
    DemodulacionAmp2019_M->Timing.sampleTimes[0] = (0.0);
    DemodulacionAmp2019_M->Timing.sampleTimes[1] = (1.0E-6);

    /* task offsets */
    DemodulacionAmp2019_M->Timing.offsetTimes[0] = (0.0);
    DemodulacionAmp2019_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(DemodulacionAmp2019_M, &DemodulacionAmp2019_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = DemodulacionAmp2019_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    DemodulacionAmp2019_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(DemodulacionAmp2019_M, 0.099999999999999992);
  DemodulacionAmp2019_M->Timing.stepSize0 = 1.0E-6;
  DemodulacionAmp2019_M->Timing.stepSize1 = 1.0E-6;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    DemodulacionAmp2019_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(DemodulacionAmp2019_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(DemodulacionAmp2019_M->rtwLogInfo, (NULL));
    rtliSetLogT(DemodulacionAmp2019_M->rtwLogInfo, "tout");
    rtliSetLogX(DemodulacionAmp2019_M->rtwLogInfo, "");
    rtliSetLogXFinal(DemodulacionAmp2019_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(DemodulacionAmp2019_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(DemodulacionAmp2019_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(DemodulacionAmp2019_M->rtwLogInfo, 0);
    rtliSetLogDecimation(DemodulacionAmp2019_M->rtwLogInfo, 1);
    rtliSetLogY(DemodulacionAmp2019_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(DemodulacionAmp2019_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(DemodulacionAmp2019_M->rtwLogInfo, (NULL));
  }

  DemodulacionAmp2019_M->solverInfoPtr = (&DemodulacionAmp2019_M->solverInfo);
  DemodulacionAmp2019_M->Timing.stepSize = (1.0E-6);
  rtsiSetFixedStepSize(&DemodulacionAmp2019_M->solverInfo, 1.0E-6);
  rtsiSetSolverMode(&DemodulacionAmp2019_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &DemodulacionAmp2019_B), 0,
                sizeof(B_DemodulacionAmp2019_T));

  /* states (continuous) */
  {
    (void) memset((void *)&DemodulacionAmp2019_X, 0,
                  sizeof(X_DemodulacionAmp2019_T));
  }

  /* global mass matrix */
  {
    int_T *ir = DemodulacionAmp2019_MassMatrix.ir;
    int_T *jc = DemodulacionAmp2019_MassMatrix.jc;
    real_T *pr = DemodulacionAmp2019_MassMatrix.pr;
    (void) memset((void *)ir, 0,
                  3*sizeof(int_T));
    (void) memset((void *)jc, 0,
                  (5+1)*sizeof(int_T));
    (void) memset((void *)pr, 0,
                  3*sizeof(real_T));
  }

  /* states (dwork) */
  (void) memset((void *)&DemodulacionAmp2019_DW, 0,
                sizeof(DW_DemodulacionAmp2019_T));

  /* Root-level init GlobalMassMatrixPr offset */
  {
    DemodulacionAmp2019_DW.STATE_1_MASS_MATRIX_PR = 0;/* '<S8>/STATE_1' */
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &DemodulacionAmp2019_M->NonInlinedSFcns.sfcnInfo;
    DemodulacionAmp2019_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(DemodulacionAmp2019_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &DemodulacionAmp2019_M->Sizes.numSampTimes);
    DemodulacionAmp2019_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (DemodulacionAmp2019_M)[0]);
    DemodulacionAmp2019_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (DemodulacionAmp2019_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,DemodulacionAmp2019_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(DemodulacionAmp2019_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(DemodulacionAmp2019_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (DemodulacionAmp2019_M));
    rtssSetStepSizePtr(sfcnInfo, &DemodulacionAmp2019_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(DemodulacionAmp2019_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &DemodulacionAmp2019_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &DemodulacionAmp2019_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &DemodulacionAmp2019_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &DemodulacionAmp2019_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &DemodulacionAmp2019_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &DemodulacionAmp2019_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &DemodulacionAmp2019_M->solverInfoPtr);
  }

  DemodulacionAmp2019_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)
                  &DemodulacionAmp2019_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    DemodulacionAmp2019_M->childSfunctions =
      (&DemodulacionAmp2019_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    DemodulacionAmp2019_M->childSfunctions[0] =
      (&DemodulacionAmp2019_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: DemodulacionAmp2019/<S2>/S-Function (sfun_discreteVariableDelay) */
    {
      SimStruct *rts = DemodulacionAmp2019_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &DemodulacionAmp2019_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &DemodulacionAmp2019_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, DemodulacionAmp2019_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &DemodulacionAmp2019_M->
                           NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &DemodulacionAmp2019_M->
                           NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &DemodulacionAmp2019_M->
                           NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &DemodulacionAmp2019_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &DemodulacionAmp2019_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 1);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &DemodulacionAmp2019_B.OUTPUT_1_0[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &DemodulacionAmp2019_B.Constant2;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &DemodulacionAmp2019_M->
          NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &DemodulacionAmp2019_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "DemodulacionAmp2019/Control de fase/S-Function");
      ssSetRTModel(rts,DemodulacionAmp2019_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)DemodulacionAmp2019_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)DemodulacionAmp2019_P.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)DemodulacionAmp2019_P.SFunction_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)DemodulacionAmp2019_P.SFunction_P4_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &DemodulacionAmp2019_DW.SFunction_RWORK);
      ssSetIWork(rts, (int_T *) &DemodulacionAmp2019_DW.SFunction_IWORK);
      ssSetPWork(rts, (void **) &DemodulacionAmp2019_DW.SFunction_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &DemodulacionAmp2019_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 3);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &DemodulacionAmp2019_DW.SFunction_RWORK);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &DemodulacionAmp2019_DW.SFunction_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2, &DemodulacionAmp2019_DW.SFunction_PWORK);
      }

      /* registration */
      sfun_discreteVariableDelay(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0E-6);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 1);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidth(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetOutputPortWidth(rts, 0, 1);
      ssSetOutputPortDataType(rts, 0, SS_DOUBLE);
      ssSetOutputPortComplexSignal(rts, 0, 0);
      ssSetOutputPortFrameData(rts, 0, 0);
      ssSetOutputPortUnit(rts, 0, 0);
      ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumIWork(rts, 1);
      ssSetNumPWork(rts, 1);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(DemodulacionAmp2019_M->rtwLogInfo, 0.0,
    rtmGetTFinal(DemodulacionAmp2019_M), DemodulacionAmp2019_M->Timing.stepSize0,
    (&rtmGetErrorStatus(DemodulacionAmp2019_M)));

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeModelParameters modelParameters;
    real_T tmp_1;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp_3;
    NeModelParameters modelParameters_0;
    real_T time_0;
    NeParameterBundle expl_temp;
    real_T time_tmp;

    /* Start for SimscapeExecutionBlock: '<S8>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S8>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator(
      "DemodulacionAmp2019/Sensor Vin/Solver Configuration_1", 0, 0);
    DemodulacionAmp2019_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(DemodulacionAmp2019_DW.STATE_1_Simulator);
    if (tmp_0) {
      DemodulacionAmp2019_43e6ab1_1_gateway();
      tmp = nesl_lease_simulator(
        "DemodulacionAmp2019/Sensor Vin/Solver Configuration_1", 0, 0);
      DemodulacionAmp2019_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    DemodulacionAmp2019_DW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    DemodulacionAmp2019_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mFixedStepSize = 1.0E-6;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 5.33744674E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 1.0E-6;
    modelParameters.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      DemodulacionAmp2019_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      DemodulacionAmp2019_DW.STATE_1_Simulator, &modelParameters,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
      }
    }

    expl_temp.mRealParameters.mN = 0;
    expl_temp.mRealParameters.mX = NULL;
    expl_temp.mLogicalParameters.mN = 0;
    expl_temp.mLogicalParameters.mX = NULL;
    expl_temp.mIntegerParameters.mN = 0;
    expl_temp.mIntegerParameters.mX = NULL;
    expl_temp.mIndexParameters.mN = 0;
    expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)
      DemodulacionAmp2019_DW.STATE_1_Simulator, expl_temp);
    simulationData = (NeslSimulationData *)
      DemodulacionAmp2019_DW.STATE_1_SimData;
    time_tmp = DemodulacionAmp2019_M->Timing.t[0];
    time = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 3;
    simulationData->mData->mContStates.mX =
      &DemodulacionAmp2019_X.DemodulacionAmp2019C1vc[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &DemodulacionAmp2019_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &DemodulacionAmp2019_DW.STATE_1_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    tmp_0 = rtmIsMajorTimeStep(DemodulacionAmp2019_M);
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_3 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_3;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_3 = rtsiIsSolverComputingJacobian(&DemodulacionAmp2019_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_3;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      DemodulacionAmp2019_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      DemodulacionAmp2019_DW.STATE_1_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_3 = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
      if (tmp_3) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S8>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S8>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator(
      "DemodulacionAmp2019/Sensor Vin/Solver Configuration_1", 1, 0);
    DemodulacionAmp2019_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_3 = pointer_is_null(DemodulacionAmp2019_DW.OUTPUT_1_0_Simulator);
    if (tmp_3) {
      DemodulacionAmp2019_43e6ab1_1_gateway();
      tmp = nesl_lease_simulator(
        "DemodulacionAmp2019/Sensor Vin/Solver Configuration_1", 1, 0);
      DemodulacionAmp2019_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    DemodulacionAmp2019_DW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    DemodulacionAmp2019_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mFixedStepSize = 1.0E-6;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 5.33744674E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 1.0E-6;
    modelParameters_0.mFixedStepSize = tmp_1;
    tmp_3 = false;
    modelParameters_0.mVariableStepSolver = tmp_3;
    diagnosticManager = (NeuDiagnosticManager *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_3 = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
      if (tmp_3) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_SimData;
    time_0 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &DemodulacionAmp2019_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &DemodulacionAmp2019_DW.OUTPUT_1_0_Modes;
    tmp_3 = false;
    simulationData->mData->mFoundZcEvents = tmp_3;
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      DemodulacionAmp2019_DW.OUTPUT_1_0_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(DemodulacionAmp2019_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DemodulacionAmp2019_M, msg);
      }
    }

    /* Start for Constant: '<Root>/Constant2' */
    DemodulacionAmp2019_B.Constant2 = DemodulacionAmp2019_P.Constant2_Value;

    /* Start for S-Function (sfun_discreteVariableDelay): '<S2>/S-Function' */
    /* Level2 S-Function Block: '<S2>/S-Function' (sfun_discreteVariableDelay) */
    {
      SimStruct *rts = DemodulacionAmp2019_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  {
    boolean_T tmp;
    char *tmp_0;
    int_T is;

    /* InitializeConditions for SimscapeExecutionBlock: '<S8>/STATE_1' */
    tmp = false;
    if (tmp) {
      is = strcmp("ode14x", rtsiGetSolverName(&DemodulacionAmp2019_M->solverInfo));
      if (is != 0) {
        tmp_0 = solver_mismatch_message("ode14x", rtsiGetSolverName
          (&DemodulacionAmp2019_M->solverInfo));
        rtmSetErrorStatus(DemodulacionAmp2019_M, tmp_0);
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S8>/STATE_1' */

    /* InitializeConditions for S-Function (sfun_discreteVariableDelay): '<S2>/S-Function' */
    /* Level2 S-Function Block: '<S2>/S-Function' (sfun_discreteVariableDelay) */
    {
      SimStruct *rts = DemodulacionAmp2019_M->childSfunctions[0];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for StateSpace: '<Root>/Filtro pasabajas1' */
    DemodulacionAmp2019_X.Filtropasabajas1_CSTATE =
      DemodulacionAmp2019_P.Filtropasabajas1_InitialConditi;

    /* InitializeConditions for StateSpace: '<Root>/Filtro pasabajas' */
    DemodulacionAmp2019_X.Filtropasabajas_CSTATE =
      DemodulacionAmp2019_P.Filtropasabajas_InitialConditio;

    /* Root-level InitSystemMatrices */
    {
      static int_T modelMassMatrixIr[3] = { 0, 3, 4 };

      static int_T modelMassMatrixJc[6] = { 0, 1, 1, 1, 2, 3 };

      static real_T modelMassMatrixPr[3] = { 1.0, 1.0, 1.0 };

      (void) memcpy(DemodulacionAmp2019_MassMatrix.ir, modelMassMatrixIr,
                    3*sizeof(int_T));
      (void) memcpy(DemodulacionAmp2019_MassMatrix.jc, modelMassMatrixJc,
                    6*sizeof(int_T));
      (void) memcpy(DemodulacionAmp2019_MassMatrix.pr, modelMassMatrixPr,
                    3*sizeof(real_T));
    }
  }
}

/* Model terminate function */
void DemodulacionAmp2019_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S8>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    DemodulacionAmp2019_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    DemodulacionAmp2019_DW.STATE_1_SimData);
  nesl_erase_simulator("DemodulacionAmp2019/Sensor Vin/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S8>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    DemodulacionAmp2019_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    DemodulacionAmp2019_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("DemodulacionAmp2019/Sensor Vin/Solver Configuration_1");

  /* Terminate for S-Function (sfun_discreteVariableDelay): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (sfun_discreteVariableDelay) */
  {
    SimStruct *rts = DemodulacionAmp2019_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}
