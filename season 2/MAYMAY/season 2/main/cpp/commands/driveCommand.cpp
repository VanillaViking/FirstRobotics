/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/driveCommand.h"
#include "Robot.h"
driveCommand::driveCommand() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  
  Requires(driveSystem);
}

// Called just before this Command runs the first time
void driveCommand::Initialize() {
  prefs = frc::Preferences::GetInstance();
}

// Called repeatedly when this Command is scheduled to run
void driveCommand::Execute() {
  double multiplier = -1.0f;
  double speed = oi->logiStick->GetRawAxis(3);
  float turn_speed = 0.5f;
  float elevator_speed = 0.25f;

  // Tank driving.
  /*
  if (oi->mainStick->GetRawButton(6)) {
    multiplier = -0.5f;
  } else if (oi->mainStick->GetRawButton(5)){
    multiplier = -0.75f;
  } else {
    multiplier = -1.0f;
  }
  speed = speed * (-0.5f) + (0.5f);
  */ 
    //speed = 0;
    //driveSystem->m_robotDrive.StopMotor();

    // Arcade Drive
driveSystem->ArcadeDrive(-1 * speed * oi->logiStick->GetY(),turn_speed * oi->logiStick->GetZ(), true);


  
// UP button 8
// Down button 7
// Open Button 1
// Close Button 2
if (oi->logiStick->GetRawButton(8)){
  driveSystem->moveElevator(elevator_speed);
} 
if (oi->logiStick->GetRawButton(7)){
  driveSystem->moveElevator(elevator_speed*(-1));
}
if (oi->logiStick->GetRawButton(10)){
  elevator_speed = 0.5f;
}
    //driveSystem->
  }
  //driveSystem->Drive(multiplier * this->getLeftStick(), multiplier * this->getRightStick(), true);
  //driveSystem->ArcadeDrive(limitSwitch.Get() * -1 * speed * oi->logiStick->GetY(), speed * oi->logiStick->GetZ(), true);

// Make this return true when this Command no longer needs to run execute()
// Returns false since it must always run. 
bool driveCommand::IsFinished() { return false;}//return limitSwitch->Get(); }

// Called once after isFinished returns true
void driveCommand::End() {
  //driveSystem->Stop();
  driveSystem->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void driveCommand::Interrupted() {
  driveSystem->Stop();
}
