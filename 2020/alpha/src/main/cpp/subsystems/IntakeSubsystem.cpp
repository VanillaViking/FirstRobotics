/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/IntakeSubsystem.h"
#include "Constants.h"

IntakeSubsystem::IntakeSubsystem() : m_intake_motor{INTAKE_MOTOR_PORT}{
  // Implementation of subsystem constructor goes here.
}

void IntakeSubsystem::SetSpeed(double speed) {
    m_intake_motor.SetSpeed(speed);
}

void IntakeSubsystem::StopMotor() {
    m_intake_motor.StopMotor();
}

void IntakeSubsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.
}
