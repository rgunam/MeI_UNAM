/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DemodulacionAmp2019/Sensor Vin/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_obs_exp.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_sys_struct.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_externals.h"
#include "DemodulacionAmp2019_43e6ab1_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DemodulacionAmp2019_43e6ab1_1_ds_obs_exp(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mOBS_EXP;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  out.mX[31] = 0.0;
  out.mX[32] = 0.0;
  out.mX[33] = 0.0;
  out.mX[34] = 0.0;
  out.mX[35] = 0.0;
  out.mX[36] = 0.0;
  out.mX[37] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}
