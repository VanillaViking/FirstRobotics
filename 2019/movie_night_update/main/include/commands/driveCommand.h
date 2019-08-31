/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Command.h>
#include "../CommandBase.h"
#include <frc/Preferences.h>
class driveCommand : public CommandBase {
 public:
  driveCommand();
  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End() override;
  void Interrupted() override;
  double getRightStick();
  double getLeftStick();
  frc::DigitalInput limitSwitch{0};
  frc::Preferences *prefs;
  float turn_speed = 0.5;
  //limitSwitch= new frc::DigitalInput(0);
};
