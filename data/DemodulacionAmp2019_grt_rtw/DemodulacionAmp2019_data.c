/*
 * DemodulacionAmp2019_data.c
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

/* Block parameters (default storage) */
P_DemodulacionAmp2019_T DemodulacionAmp2019_P = {
  /* Expression: 1
   * Referenced by: '<Root>/Gain1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<Root>/Gain'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant2'
   */
  1.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: MaxDelay
   * Referenced by: '<S2>/S-Function'
   */
  0.00025,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: Ts
   * Referenced by: '<S2>/S-Function'
   */
  1.0E-6,

  /* Computed Parameter: SFunction_P3_Size
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: InitialValue
   * Referenced by: '<S2>/S-Function'
   */
  1.0,

  /* Computed Parameter: SFunction_P4_Size
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: DFT
   * Referenced by: '<S2>/S-Function'
   */
  1.0,

  /* Computed Parameter: Filtropasabajas1_A
   * Referenced by: '<Root>/Filtro pasabajas1'
   */
  -68.83,

  /* Computed Parameter: Filtropasabajas1_B
   * Referenced by: '<Root>/Filtro pasabajas1'
   */
  68.83,

  /* Computed Parameter: Filtropasabajas1_C
   * Referenced by: '<Root>/Filtro pasabajas1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Filtro pasabajas1'
   */
  0.0,

  /* Computed Parameter: Filtropasabajas_A
   * Referenced by: '<Root>/Filtro pasabajas'
   */
  -68.83,

  /* Computed Parameter: Filtropasabajas_B
   * Referenced by: '<Root>/Filtro pasabajas'
   */
  68.83,

  /* Computed Parameter: Filtropasabajas_C
   * Referenced by: '<Root>/Filtro pasabajas'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Filtro pasabajas'
   */
  0.0,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  0U
};
