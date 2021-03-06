#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/PWMVictorSPX.h>

#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>


class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();


  void Drive(double x, double zRot, bool sqInputs);
  void Stop();

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

    frc::PWMVictorSPX m_frontLeft;
    frc::PWMVictorSPX m_rearLeft;
    frc::SpeedControllerGroup m_left{m_frontLeft, m_rearLeft};

    frc::PWMVictorSPX m_frontRight;
    frc::PWMVictorSPX m_rearRight;
    frc::SpeedControllerGroup m_right{m_frontRight, m_rearRight};

    frc::DifferentialDrive m_robotDrive{m_left, m_right};
};
