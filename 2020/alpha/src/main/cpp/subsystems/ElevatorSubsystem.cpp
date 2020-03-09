/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/ElevatorSubsystem.h"
#include "Constants.h"

using namespace ElevatorConstants;

ElevatorSubsystem::ElevatorSubsystem() : m_elevator{ELEVATOR_PORT}{
  // Implementation of subsystem constructor goes here.
}

void ElevatorSubsystem::SetSpeed(double speed) {
    m_elevator.SetSpeed(speed);
}

void ElevatorSubsystem::StopMotor() {
    m_elevator.StopMotor();
}

void ElevatorSubsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.
}
