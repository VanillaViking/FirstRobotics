/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ElevatorSetSpeed.h"

ElevatorSetSpeed::ElevatorSetSpeed(ElevatorSubsystem* subsystem, std::function<double()> speed)
    : m_subsystem{subsystem}, m_speed(speed) {
    AddRequirements({subsystem});
    }


void ElevatorSetSpeed::Execute() {m_subsystem->SetSpeed((m_speed() *-0.5) + 0.5);}

bool ElevatorSetSpeed::IsFinished() {return false;}

