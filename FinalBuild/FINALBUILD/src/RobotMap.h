// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static SpeedController* drivetrainLeftRear;
	static SpeedController* drivetrainLeftFront;
	static SpeedController* drivetrainRightRear;
	static SpeedController* drivetrainRightFront;
	static RobotDrive* drivetrainDrivetrain;
	static Encoder* drivetrainLeftFrontEncoder;
	static Encoder* drivetrainLeftRearEncoder;
	static Encoder* drivetrainRightFrontEncoder;
	static Encoder* drivetrainRightRearEncoder;
	static SpeedController* elevatorPIDLifter;
	static Encoder* elevatorPIDLiftEncoder;
	static Relay* elevatorPIDLiftBrake;
	static DigitalInput* elevatorPIDBotSwitch;
	static DigitalInput* elevatorPIDTopSwitch;
	static SpeedController* claw0PIDClaw0Motor;
	static Relay* claw0PIDClaw0Brake;
	static AnalogPotentiometer* claw0PIDClaw0Pot;
	static Encoder* claw0PIDClaw0Encoder;
	static DigitalInput* claw0PIDClosedSwitch;
	static DigitalInput* claw0PIDOpenedSwitch;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
