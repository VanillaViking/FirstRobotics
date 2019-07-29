/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/PIDSubsystem.h>
//#include "AHRS.h"
class NavX : public frc::PIDSubsystem {
 public:
  NavX();
  /*
  const static double kP = 0.03f;
  const static double kI = 0.00f;
  const static double kD = 0.00f;
  const static double kF = 0.00f;
  */
  double ReturnPIDInput() override;
  void UsePIDOutput(double output) override;
  void InitDefaultCommand() override;
  frc::PIDController *turnController;
  //AHRS *ahrs;
  
};
