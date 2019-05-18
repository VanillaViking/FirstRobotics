/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/pneumaticsSubsystem.h"
#include <frc/DoubleSolenoid.h>
#include "RobotMap.h"

pneumaticsSubsystem::pneumaticsSubsystem() : frc::Subsystem("ExampleSubsystem") {}

void pneumaticsSubsystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  m_doubleSolenoid.Set(frc::DoubleSolenoid::kOff);
}

void pneumaticsSubsystem::Forward() {
    m_doubleSolenoid.Set(frc::DoubleSolenoid::kForward);   
}
void pneumaticsSubsystem::Reverse() {
    m_doubleSolenoid.Set(frc::DoubleSolenoid::kReverse);   
}
void pneumaticsSubsystem::Off() {
    m_doubleSolenoid.Set(frc::DoubleSolenoid::kOff);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
