/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DemodulacionAmp2019/Sensor Vin/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_log.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_sys_struct.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_externals.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DemodulacionAmp2019_43e6ab1_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T C1_p_v;
  real_T Op_Amp_out_v;
  real_T t1;
  real_T t2;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_0;
  X_idx_0 = t4->mX.mX[0];
  X_idx_1 = t4->mX.mX[1];
  X_idx_2 = t4->mX.mX[2];
  out = t5->mLOG;
  C1_p_v = X_idx_1 * 1.0E-6 + X_idx_0;
  Op_Amp_out_v = X_idx_1 * 10000.0 / -1.0;
  t1 = -X_idx_2 / -1.0;
  t2 = -Op_Amp_out_v / -1.0;
  out.mX[0] = -X_idx_1;
  out.mX[1] = 0.0;
  out.mX[2] = X_idx_2;
  out.mX[3] = X_idx_2;
  out.mX[4] = X_idx_1;
  out.mX[5] = 0.0;
  out.mX[6] = C1_p_v;
  out.mX[7] = C1_p_v;
  out.mX[8] = X_idx_0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = Op_Amp_out_v;
  out.mX[13] = X_idx_1;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = X_idx_1;
  out.mX[17] = C1_p_v;
  out.mX[18] = X_idx_2;
  out.mX[19] = X_idx_1 * 5600.0;
  out.mX[20] = X_idx_1;
  out.mX[21] = Op_Amp_out_v;
  out.mX[22] = 0.0;
  out.mX[23] = X_idx_1 * 10000.0;
  out.mX[24] = 0.0;
  out.mX[25] = t1;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = X_idx_2;
  out.mX[29] = t1;
  out.mX[30] = X_idx_2;
  out.mX[31] = 0.0;
  out.mX[32] = t2;
  out.mX[33] = 0.0;
  out.mX[34] = 0.0;
  out.mX[35] = Op_Amp_out_v;
  out.mX[36] = t2;
  out.mX[37] = Op_Amp_out_v;
  (void)sys;
  (void)t5;
  return 0;
}
