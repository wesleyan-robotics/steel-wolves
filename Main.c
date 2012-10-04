#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S3,     magnetic,            sensorHiTechnicMagnetic)
#pragma config(Motor,  motorA,          leftArm,       tmotorNormal, openLoop, encoder)
#pragma config(Motor,  motorB,          rightArm,      tmotorNormal, openLoop, encoder)
#pragma config(Motor,  motorC,          ,              tmotorNormal, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorNormal, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motorF,        tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorG,        tmotorNormal, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.
//#include "HTMAG-driver.h"


void initializeRobot()
{
  // Place code here to initialize servos to starting positions.
  // Sensors are automatically configured and setup by ROBOTC. They may need a brief time to stabilize.

  return;
}


task main()
{
  initializeRobot();

  waitForStart();   // wait for start of tele-op phase

  while(true)
  {
    getJoystickSettings(joystick);
    motor[motorD] = joystick.joy1_y1 - joystick.joy1_x1;
    motor[motorE] = joystick.joy1_y2 - joystick.joy1_x2;
  }
}