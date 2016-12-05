/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/TrafficLight/DML/KCG/config.txt
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */
#ifndef _Main_TrafficLight_H_
#define _Main_TrafficLight_H_

#include "kcg_types.h"
#include "ToggleDebounce_TrafficLight.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* TrafficLight::Main::push_button */ push_button;
} inC_Main_TrafficLight;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TrafficLight::Main::light_cmd */ light_cmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ToggleDebounce_TrafficLight /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Main_TrafficLight;

/* ===========  node initialization and cycle functions  =========== */
/* TrafficLight::Main */
extern void Main_TrafficLight(
  inC_Main_TrafficLight *inC,
  outC_Main_TrafficLight *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Main_reset_TrafficLight(outC_Main_TrafficLight *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Main_init_TrafficLight(outC_Main_TrafficLight *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Main_TrafficLight_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Main_TrafficLight.h
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */

