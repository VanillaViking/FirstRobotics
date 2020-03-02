#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/PWMVictorSPX.h>

#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>

#include "Constants.h"

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();

  frc::DifferentialDrive m_robotDrive{m_left, m_right};

  void Drive(double x, double zRot, bool sqInputs);
  void Stop();

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

    frc::PWMVictorSPX m_frontLeft{L_TOP_MOTOR};
    frc::PWMVictorSPX m_rearLeft{L_REAR_MOTOR};
    frc::SpeedControllerGroup m_left{m_frontLeft, m_rearLeft};

    frc::PWMVictorSPX m_frontRight{R_TOP_MOTOR};
    frc::PWMVictorSPX m_rearRight{R_REAR_MOTOR};
    frc::SpeedControllerGroup m_right{m_frontRight, m_rearRight};

};
