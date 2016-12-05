/* 
 *  Integration of SCADE auto-generated code on Arduino platform 
 *  
 * Copyright 2016 Tommaso Falchi Delitala <tommaso.falchi@dibris.unige.it>
 * 
 * The program is distributed under the terms of the GNU General Public License v3.
 */

typedef unsigned long time_t;

/* Include SCADE generated code */
extern "C"
{
#include "Main_TrafficLight.h"
}

#define BUTTON_PIN 12
#define LIGHT_GREEN 2
#define LIGHT_RED 8

/* Allocate model I/O structures */
inC_Main_TrafficLight in_struct;
outC_Main_TrafficLight out_struct;

void setup() {
  /* Arduino hw setup */
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LIGHT_GREEN, OUTPUT);
  pinMode(LIGHT_RED, OUTPUT);
  
  /* Init I/O memory structures */
  memset(&in_struct, 0, sizeof(inC_Main_TrafficLight));
  memset(&out_struct, 0, sizeof(outC_Main_TrafficLight));
  
  /* Reset model internal state */
  Main_reset_TrafficLight(&out_struct);
}

/* Simulate low-level driver handling lights */
void led_driver(int led_on)
{
  digitalWrite(LIGHT_GREEN, false);
  digitalWrite(LIGHT_RED, false);
  digitalWrite(led_on, true);
}

void loop() {

  time_t timestart = millis();

  /***** Partition TrafficLight *******************/

  /* Read model inputs from HW */
  in_struct.push_button = digitalRead(BUTTON_PIN);
  
  /* Call model main fuction */
  Main_TrafficLight(&in_struct, &out_struct);
 
  /* Write model outputs to HW */
  led_driver(out_struct.light_cmd);
  
  /************************************************/

  /* Scheduler at 20 Hz = 50 ms */
  delay(50);

}
