/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
#include <frc/IterativeRobot.h>
#include <frc/Joystick.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/PWMVictorSPX.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/GenericHID.h>

#include <frc/smartdashboard/SendableChooser.h>

class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;
  // Left motors setup
  frc::PWMVictorSPX m_frontLeft{0};
  frc::PWMVictorSPX m_rearLeft{1};
  frc::SpeedControllerGroup m_left{m_frontLeft, m_rearLeft};
  // Right Motors setup
  frc::PWMVictorSPX m_frontRight{2};
  frc::PWMVictorSPX m_rearRight{3};
  frc::SpeedControllerGroup m_right{m_frontRight, m_rearRight};

  frc::DifferentialDrive m_robotDrive{m_left, m_right};
  // Single Joystick setup to USB port 0. 
  frc::Joystick stick{0};


 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
};
