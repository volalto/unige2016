/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/TrafficLight/DML/KCG/config.txt
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToggleDebounce_TrafficLight.h"

#ifndef KCG_USER_DEFINED_INIT
void ToggleDebounce_init_TrafficLight(outC_ToggleDebounce_TrafficLight *outC)
{
  outC->y = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->rem_x = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_state_nxt = SSM_st_Normal_SM1;
  outC->_L5_SM1_InhibitInput = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToggleDebounce_reset_TrafficLight(outC_ToggleDebounce_TrafficLight *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TrafficLight::ToggleDebounce */
void ToggleDebounce_TrafficLight(
  /* TrafficLight::ToggleDebounce::x */ kcg_bool x,
  /* TrafficLight::ToggleDebounce::time */ kcg_int time,
  outC_ToggleDebounce_TrafficLight *outC)
{
  /* TrafficLight::ToggleDebounce */ kcg_bool tmp;
  /* TrafficLight::ToggleDebounce::y */ kcg_bool last_y;
  /* TrafficLight::ToggleDebounce::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* TrafficLight::ToggleDebounce::SM1 */ kcg_bool SM1_reset_sel;
  /* TrafficLight::ToggleDebounce::rising_edge */ kcg_bool rising_edge;
  
  /* fby_1_init_1 */ if (outC->init1) {
    outC->init1 = kcg_false;
    tmp = kcg_true;
    last_y = kcg_false;
    SM1_reset_sel = kcg_false;
    SM1_state_act = SSM_st_Normal_SM1;
  }
  else {
    SM1_state_act = outC->SM1_state_nxt;
    SM1_reset_sel = outC->SM1_reset_nxt;
    last_y = outC->y;
    tmp = !outC->rem_x;
  }
  rising_edge = tmp & x;
  outC->rem_x = x;
  /* act_SM1 */ switch (SM1_state_act) {
    case SSM_st_InhibitInput_SM1 :
      outC->y = last_y;
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      /* fby_1_init_2 */ if (outC->init) {
        outC->_L5_SM1_InhibitInput = 0 + 1;
      }
      else {
        outC->_L5_SM1_InhibitInput = outC->_L5_SM1_InhibitInput + 1;
      }
      outC->SM1_reset_nxt = outC->_L5_SM1_InhibitInput > time;
      if (outC->SM1_reset_nxt) {
        outC->SM1_state_nxt = SSM_st_Normal_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_InhibitInput_SM1;
      }
      outC->init = kcg_false;
      break;
    case SSM_st_Normal_SM1 :
      outC->y = last_y ^ rising_edge;
      if (rising_edge) {
        outC->SM1_state_nxt = SSM_st_InhibitInput_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Normal_SM1;
      }
      outC->SM1_reset_nxt = rising_edge;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToggleDebounce_TrafficLight.c
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */

