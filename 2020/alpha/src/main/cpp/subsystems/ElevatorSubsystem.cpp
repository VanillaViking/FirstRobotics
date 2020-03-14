/*----------------------------------------------------------------------------*/
/* copyright (c) 2019 first. all rights reserved.                             */
/* open source software - may be modified and shared by frc teams. the code   */
/* must be accompanied by the first bsd license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/ElevatorSubsystem.h"
#include "Constants.h"

using namespace ElevatorConstants;

ElevatorSubsystem::ElevatorSubsystem() : m_elevator{ELEVATOR_PORT}{
  // implementation of subsystem constructor goes here.
}

void ElevatorSubsystem::SetSpeed(double speed) {
    m_elevator.SetSpeed(speed);
}

void ElevatorSubsystem::StopMotor() {
    m_elevator.StopMotor();
}

void ElevatorSubsystem::Periodic() {
  // implementation of subsystem periodic method goes here.
}
