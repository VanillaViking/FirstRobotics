/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/pneumaticsCommand.h"

#include "Robot.h"

pneumaticsCommand::pneumaticsCommand() {
  // Use Requires() here to declare subsystem dependencies
  Requires(pneumatics);
}

// Called just before this Command runs the first time
void pneumaticsCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void pneumaticsCommand::Execute() {
    if (oi->logiStick->GetRawButton(11)) {
        pneumatics->Forward();
    } else if (oi->logiStick->GetRawButton(12)) {
        pneumatics->Reverse();
    } else {
        pneumatics->Off();
    }
}

// Make this return true when this Command no longer needs to run execute()
bool pneumaticsCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void pneumaticsCommand::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void pneumaticsCommand::Interrupted() {}
