/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "RobotMap.h"
#include <frc/Joystick.h>
class OI {
  public:
    OI();
    frc::Joystick *mainStick; 
    frc::Joystick *logiStick;
  private:
};
