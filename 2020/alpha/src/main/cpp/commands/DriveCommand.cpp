/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DriveCommand.h"

DriveCommand::DriveCommand(DriveSubsystem* subsystem, std::function<double()> x, std::function<double()> zRot, bool sqInputs)
    : m_subsystem{subsystem}, m_x(x), m_zRot(zRot), m_sqInputs(sqInputs)  {
    AddRequirements(subsystem); 
    }

void DriveCommand::Execute() {
    m_subsystem->Drive(m_x(), m_zRot(), m_sqInputs);
}
