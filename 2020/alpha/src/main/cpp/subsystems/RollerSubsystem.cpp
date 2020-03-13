#include "subsystems/RollerSubsystem.h"
#include "Constants.h"


RollerSubsystem::RollerSubsystem() : m_motor1{P_MOTOR1_PORT}, m_motor2{P_MOTOR2_PORT}{
    m_speed = R_SPEED_INC;
}

void RollerSubsystem::IncSpeed() {
    if (m_speed < 1.0) {
        m_speed = m_speed + R_SPEED_INC;
   } 
}

void RollerSubsystem::DecSpeed() {
    if (m_speed > -1.0) {
        m_speed = m_speed - R_SPEED_INC;
    }
}

void RollerSubsystem::SetSpeed() {
    m_motor1.SetSpeed(m_speed);
    m_motor2.SetSpeed(m_speed);
}

void RollerSubsystem::StopMotors() {
    m_motor1.StopMotor();
    m_motor2.StopMotor();
}

void RollerSubsystem::Periodic() {}
