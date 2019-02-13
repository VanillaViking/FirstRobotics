/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/driveSubsystem.h"

driveSubsystem::driveSubsystem() : Subsystem("ExampleSubsystem") {}

void driveSubsystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  
}

void driveSubsystem::Drive(double leftStick, double rightStick, bool sqInputs) {
  m_robotDrive.TankDrive(leftStick, rightStick, sqInputs);
}

void driveSubsystem::ArcadeDrive(double x, double zRot, bool sqInputs) {
  m_robotDrive.ArcadeDrive(x, zRot, sqInputs);
}
void driveSubsystem::Stop() {
  m_robotDrive.StopMotor();
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
