#pragma config(Sensor, in1,    potentiometer,  sensorPotentiometer)
#pragma config(Motor,  port1,           motor1,        tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           motor2,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           motor3,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          motor10,       tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................

	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
	// User control code here, inside the loop

	int foo;
	clearDebugStream;
	ClearTimer(T1);

	while (true)
	{
	  // This is the main execution loop for the user control program. Each time through the loop
	  // your program should update motor + servo values based on feedback from the joysticks.

	  // .....................................................................................
	  // Insert user code here. This is where you use the joystick values to update your motors, etc.
	  // .....................................................................................

	  int ch2 = vexRT[Ch2];

	  //motor[motor1] = motor[motor2] = motor[motor3] = motor[motor10] = ch2;
	  motor[motor1] = ch2;
	  motor[motor2] = ch2;
	  motor[motor3] = ch2;
	  motor[motor10] = ch2;

	 int pot = SensorValue[potentiometer];
	 foo = time100[T1]/10;
	 writeDebugStreamLine("The potentiometer is reading %d", SensorValue[potentiometer]);
	 int shoot vexRT[Btn8D];





	}
}
