#include "ApplicationFunctionSet_xxx0.h"
#include <avr/wdt.h>
#include <hardwareSerial.h>

void setup() {
  // put your setup code here, to run once:
  Application_FunctionSet.ApplicationFunctionSet_Init();
  Application_FunctionSet.ApplicationFunctionSet_Bootup();

  // Wait 5 seconds to give the user time to place the robot on the floor
  delay(5000);

  wdt_enable(WDTO_2S);
}

void loop() {
  // put your main code here, to run repeatedly:
  wdt_reset();
  Application_FunctionSet.ApplicationFunctionSet_SensorDataUpdate();
  Application_FunctionSet.ApplicationFunctionSet_KeyCommand();
  Application_FunctionSet.ApplicationFunctionSet_RGB();
  Application_FunctionSet.ApplicationFunctionSet_Rocker();
  Application_FunctionSet.ApplicationFunctionSet_Tracking();
  Application_FunctionSet.ApplicationFunctionSet_Exploration();
  Application_FunctionSet.ApplicationFunctionSet_Obstacle();
  Application_FunctionSet.ApplicationFunctionSet_Standby();
  Application_FunctionSet.ApplicationFunctionSet_Expression();
  Application_FunctionSet.ApplicationFunctionSet_SerialPortDataAnalysis();
  Application_FunctionSet.ApplicationFunctionSet_ServoUpdate();

  Application_FunctionSet.CMD_MotorControl_xxx0();
  Application_FunctionSet.CMD_CarControlTimeLimit_xxx0();
  Application_FunctionSet.CMD_CarControlNoTimeLimit_xxx0();
  Application_FunctionSet.CMD_MotorControlSpeed_xxx0();
  Application_FunctionSet.CMD_VoiceControl_xxx0();
  Application_FunctionSet.CMD_LightingControlTimeLimit_xxx0();
  Application_FunctionSet.CMD_LightingControlNoTimeLimit_xxx0();
  Application_FunctionSet.CMD_LEDCustomExpressionControl_xxx0();
  Application_FunctionSet.CMD_LEDNumberDisplayControl_xxx0();
  Application_FunctionSet.CMD_TrajectoryControl_xxx0();
  Application_FunctionSet.CMD_ClearAllFunctions_xxx0();
}
