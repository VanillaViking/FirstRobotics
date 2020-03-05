#include "subsystems/DriveSubsystem.h"
#include "Constants.h"


DriveSubsystem::DriveSubsystem(): 
    m_frontLeft{L_TOP_MOTOR}, 
    m_rearLeft{L_REAR_MOTOR},
    m_frontRight{R_TOP_MOTOR},
    m_rearRight{R_REAR_MOTOR}
{
}


void DriveSubsystem::Drive(double x, double zRot, bool sqInputs){
    m_robotDrive.ArcadeDrive(x, zRot, sqInputs);
}

void DriveSubsystem::Stop() {
    m_robotDrive.StopMotor();
}
