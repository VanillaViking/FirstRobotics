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
#include <frc/PWMVictorSPX.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
class driveSubsystem : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  frc::PWMVictorSPX m_frontLeft{L_TOP_MOTOR};
  frc::PWMVictorSPX m_rearLeft{L_REAR_MOTOR};
  frc::SpeedControllerGroup m_left{m_frontLeft, m_rearLeft};

  frc::PWMVictorSPX m_frontRight{R_TOP_MOTOR};
  frc::PWMVictorSPX m_rearRight{R_REAR_MOTOR};
  frc::SpeedControllerGroup m_right{m_frontRight, m_rearRight};

  frc::PWMVictorSPX elevator_motor{ELEVATOR_PORT};


 public:
  frc::DifferentialDrive m_robotDrive{m_left, m_right};

  driveSubsystem();
  void moveElevator(double speed);
  void stopElevator();
  void Drive(double leftStick, double rightStick, bool sqInputs);
  void ArcadeDrive(double x, double zRot, bool sqInputs);
  void InitDefaultCommand() override;
  void Stop();
};
