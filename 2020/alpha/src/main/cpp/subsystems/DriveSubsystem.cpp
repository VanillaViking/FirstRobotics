#include "subsystems/DriveSubsystem.h"


DriveSubsystem::DriveSubsystem() {
}


void DriveSubsystem::Drive(double x, double zRot, bool sqInputs){
    m_robotDrive.ArcadeDrive(x, zRot, sqInputs);
}

void DriveSubsystem::Stop() {
    m_robotDrive.StopMotor();
}
