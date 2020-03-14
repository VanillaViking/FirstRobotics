#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/PWMVictorSPX.h>

class EjectSubsystem : public frc2::SubsystemBase {
public:
    EjectSubsystem();

    void Periodic() override;

    void SetSpeed(double speed);

    void StopMotor();

private:
    frc::PWMVictorSPX m_eject_motor;
};

