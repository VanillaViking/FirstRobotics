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

  // Tank driving.
  if (oi->mainStick->GetRawButton(6)) {
    multiplier = -0.5f;
  } else if (oi->mainStick->GetRawButton(5)){
    multiplier = -0.75f;
  } else {
    multiplier = -1.0f;
  }
  speed = speed * (-0.5f) + (0.5f);
  if (limitSwitch.Get()){
    //speed = 0;
    //driveSystem->m_robotDrive.StopMotor();
    // -1
    driveSystem->ArcadeDrive(speed * oi->logiStick->GetY(), speed * oi->logiStick->GetZ(), true);
  }else {
    //driveSystem->ArcadeDrive(-1 * speed * oi->logiStick->GetY(), speed * oi->logiStick->GetZ(), true);
    if (oi->logiStick->GetY() > 0) {
      driveSystem->m_robotDrive.StopMotor();
    } else {
      driveSystem->ArcadeDrive(-1 * speed * oi->logiStick->GetY(), speed * oi->logiStick->GetZ(), true);
    }
  }
// UP button 8
// Down button 7
// Open Button 1
// Close Button 2
  float armSpeed = 0.04f;
  float elevatorSpeed = 0.1f;
  bool halfSpeedButton = false;
  armSpeed = prefs->GetDouble("armSpeed", 0.04f);
  elevatorSpeed =prefs->GetDouble("elevatorSpeed", 0.1f);
  halfSpeedButton = oi->logiStick->GetRawButton(11);
  if (halfSpeedButton) {
    armSpeed*=0.5;
    elevatorSpeed*=0.5;
  } else{
    armSpeed = prefs->GetDouble("armSpeed", 0.04f);
    elevatorSpeed = prefs->GetDouble("elevatorSpeed", 0.1f);
  }
  //if (limitSwitch.Get()) {
  //   if (oi->logiStick->GetRawButton(1) || oi->mainStick->GetRawButton(1)) {
  //     driveSystem->moveArms(armSpeed);
  //   } else if (oi->logiStick->GetRawButton(2) || oi->mainStick->GetRawButton(2)){
  //     driveSystem->moveArms(armSpeed * -1);
  //   } else {
  //     driveSystem->stopArms();
  //   }
  // } else {
  //   if (oi->logiStick->GetRawButton(2) || oi->mainStick->GetRawButton(2)) {
  //     driveSystem->moveArms(armSpeed);
  //   } else {
  //     driveSystem->stopArms();
  //   }
  
    if (oi->logiStick->GetRawButton(3)) {
      driveSystem->moveArms(armSpeed);
    } else if (oi->logiStick->GetRawButton(5)){
      driveSystem->moveArms(armSpeed*-1);
    } else if (oi->logiStick->GetRawButton(4)){
      driveSystem->moveArms(armSpeed * 0.5);
    } else if (oi->logiStick->GetRawButton(6)) {
      driveSystem->moveArms(armSpeed * -0.5);
    } else {
      driveSystem->stopArms();
    }
  if (oi->logiStick->GetRawButton(8)) {
    driveSystem->moveElevator(elevatorSpeed);
  } else if (oi->logiStick->GetRawButton(7)) {
    driveSystem->moveElevator(elevatorSpeed * -1);
  } else if (oi->logiStick->GetRawButton(10)) {
    driveSystem->moveElevator(elevatorSpeed*0.5);
  } else if (oi->logiStick->GetRawButton(9)) {
    driveSystem->moveElevator(elevatorSpeed * -0.5);
  } else {
    driveSystem->stopElevator();
  }
  // if (oi->logiStick->GetRawButton(8) || oi->mainStick->GetRawButton(3)) {
  //   driveSystem->moveElevator(elevatorSpeed);
  // } else if (oi->logiStick->GetRawButton(7) || oi->mainStick->GetRawButton(4)) {
  //   driveSystem->moveElevator(-1 * elevatorSpeed);
  // } else {
  //   driveSystem->stopElevator();
  // }
  // if (oi->mainStick->GetRawButton(4)) {
  //   //driveSystem->
  // }
  //driveSystem->Drive(multiplier * this->getLeftStick(), multiplier * this->getRightStick(), true);
  //driveSystem->ArcadeDrive(limitSwitch.Get() * -1 * speed * oi->logiStick->GetY(), speed * oi->logiStick->GetZ(), true);
}

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

double driveCommand::getRightStick() {
  return oi->mainStick->GetY();
}

double driveCommand::getLeftStick() {
  return oi->mainStick->GetX();
}
