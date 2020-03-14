#include "subsystems/EjectSubsystem.h"
#include "Constants.h"

EjectSubsystem::EjectSubsystem() : m_eject_motor{EJECT_MOTOR_PORT}{}

void EjectSubsystem::SetSpeed(double speed){
    m_eject_motor.SetSpeed(speed);
}

void EjectSubsystem::StopMotor(){
    m_eject_motor.StopMotor();
}

void EjectSubsystem::Periodic(){}
