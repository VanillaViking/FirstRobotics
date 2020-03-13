/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/PWMVictorSPX.h>

class RollerSubsystem : public frc2::SubsystemBase {
 public:
  RollerSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void IncSpeed();

  void DecSpeed();

  void SetSpeed();

  void StopMotors();
 

 private:
    frc::PWMVictorSPX m_motor1;
    frc::PWMVictorSPX m_motor2;

    double m_speed;
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
