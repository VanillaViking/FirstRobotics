/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Motor6Subsystem.h"
#include "Constants.h"

using namespace ElevatorConstants;

Motor6Subsystem::Motor6Subsystem() : m_motor6{MOTOR6_PORT}{
  // Implementation of subsystem constructor goes here.
}

void Motor6Subsystem::SetSpeed(double speed) {
    m_motor6.SetSpeed(speed);
}

void Motor6Subsystem::StopMotor() {
    m_motor6.StopMotor();
}

void Motor6Subsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.
}
