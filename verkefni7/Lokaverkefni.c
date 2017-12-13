#pragma config(Sensor, in1,    lightSensor,    sensorReflection) //Light sensor
#pragma config(Sensor, in6,    lineFollowerLEFT, sensorLineFollower) //Line Follower Left
#pragma config(Sensor, in3,    lineFollowerRIGHT, sensorLineFollower) //Line Follower Right
#pragma config(Sensor, in7,    lineFollowerCENTER, sensorLineFollower) //Line Follower Center
#pragma config(Sensor, dgtl6,  RightEncoder,   sensorQuadEncoder) //Right encoder
#pragma config(Sensor, dgtl8,  LeftEncoder,    sensorQuadEncoder) //Left encoder
#pragma config(Sensor, dgtl10, sonarSensor,    sensorSONAR_cm) //Sonar Sensor
#pragma config(Motor,  port2,           rightMotor,    tmotorServoContinuousRotation, openLoop) //Right Motor
#pragma config(Motor,  port3,           leftMotor,     tmotorServoContinuousRotation, openLoop, reversed) //Left Motor
#pragma config(Motor,  port4,           clawMotor,     tmotorVex269, openLoop, reversed) //Claw Motor
#pragma config(Motor,  port8,           armMotor,      tmotorVex393, openLoop, reversed) //Arm Motor

//oll Verkefnin
#include "verk2.c"
#include "verk3.c"
#include "verk4.c"
#include "verk4_foll.c"
#include "verk5.c"
//oll Verkefnin

task main()
{
	while(1==1){
		if (vexRT[Btn7U] == 1) {
			break;
		}
		if (vexRT[Btn7L] == 1) {
		  StartTask(Verkefni2);
		}
		if (vexRT[Btn7D] == 1) {
			StartTask(Verkefni3);
		}
		if (vexRT[Btn7R] == 1) {
			StartTask(Verkefni4);
		}
		if (vexRT[Btn6D] == 1) {
			StartTask(Verkefni5):
		}
	}
}
