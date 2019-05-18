/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include "../RobotMap.h"
#include <OI.h>
#include <frc/DoubleSolenoid.h>
class pneumaticsSubsystem : public frc::Subsystem {
 public:
  frc::DoubleSolenoid m_doubleSolenoid{DOUBLESOLENOID_PORT_1, DOUBLESOLENOID_PORT_2};
  pneumaticsSubsystem();
  

  void Forward();
  void Reverse();
  void Off();
  void InitDefaultCommand() override;

 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
};
