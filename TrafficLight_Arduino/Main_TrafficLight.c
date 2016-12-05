/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/TrafficLight/DML/KCG/config.txt
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main_TrafficLight.h"

#ifndef KCG_USER_DEFINED_INIT
void Main_init_TrafficLight(outC_Main_TrafficLight *outC)
{
  outC->light_cmd = 0;
  /* 1 */ ToggleDebounce_init_TrafficLight(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Main_reset_TrafficLight(outC_Main_TrafficLight *outC)
{
  /* 1 */ ToggleDebounce_reset_TrafficLight(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TrafficLight::Main */
void Main_TrafficLight(inC_Main_TrafficLight *inC, outC_Main_TrafficLight *outC)
{
  /* 1 */
  ToggleDebounce_TrafficLight(
    inC->push_button,
    DEBOUNCE_CYCLES_TrafficLight,
    &outC->Context_1);
  /* 1 */ if (outC->Context_1.y) {
    outC->light_cmd = LIGHT2_ID1_TrafficLight;
  }
  else {
    outC->light_cmd = LIGHT1_ID1_TrafficLight;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Main_TrafficLight.c
** Generation date: 2016-12-05T10:47:32
*************************************************************$ */

