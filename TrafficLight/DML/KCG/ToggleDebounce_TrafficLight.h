/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/TrafficLight/DML/KCG/config.txt
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */
#ifndef _ToggleDebounce_TrafficLight_H_
#define _ToggleDebounce_TrafficLight_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TrafficLight::ToggleDebounce::y */ y;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* TrafficLight::ToggleDebounce::SM1::InhibitInput::_L5 */ _L5_SM1_InhibitInput;
  SSM_ST_SM1 /* TrafficLight::ToggleDebounce::SM1 */ SM1_state_nxt;
  kcg_bool /* TrafficLight::ToggleDebounce::SM1 */ SM1_reset_nxt;
  kcg_bool /* TrafficLight::ToggleDebounce::x */ rem_x;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ToggleDebounce_TrafficLight;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLight::ToggleDebounce */
extern void ToggleDebounce_TrafficLight(
  /* TrafficLight::ToggleDebounce::x */ kcg_bool x,
  /* TrafficLight::ToggleDebounce::time */ kcg_int time,
  outC_ToggleDebounce_TrafficLight *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToggleDebounce_reset_TrafficLight(
  outC_ToggleDebounce_TrafficLight *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToggleDebounce_init_TrafficLight(
  outC_ToggleDebounce_TrafficLight *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ToggleDebounce_TrafficLight_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ToggleDebounce_TrafficLight.h
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */

