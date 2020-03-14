/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeCommand.h"

IntakeCommand::IntakeCommand(Motor6Subsystem* subsystem, std::function<bool()> btn)
    : m_subsystem{subsystem}, full_btn(btn) {
    AddRequirements({subsystem});
    }


void IntakeCommand::Execute() {

    if (full_btn() == true) {
        m_subsystem->SetSpeed(1.0);
    } else {
        m_subsystem->SetSpeed(0.5);
    }
}

bool IntakeCommand::IsFinished() {return false;}

