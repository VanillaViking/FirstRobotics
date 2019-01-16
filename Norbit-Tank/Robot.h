/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
// Remember to add frc for testing.
#include <IterativeRobot.h>
#include <SmartDashboard/SendableChooser.h>
#include <Drive/DifferentialDrive.h>
#include <Joystick.h>
#include <PWMVictorSPX.h>
#include <SpeedControllerGroup.h>
class Robot : public frc::IterativeRobot {
public:
	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
	frc::PWMVictorSPX m_frontLeft{0};
	frc::PWMVictorSPX m_rearLeft{1};
	frc::SpeedControllerGroup m_left{m_frontLeft, m_rearLeft};

	frc::PWMVictorSPX m_frontRight{2};
	frc::PWMVictorSPX m_rearRight{3};
	frc::SpeedControllerGroup m_right{m_frontRight, m_rearRight};

	frc::DifferentialDrive m_robotDrive{m_left, m_right};
	frc::Joystick left_stick{0};
	frc::Joystick right_stick{1};


private:
	frc::SendableChooser<std::string> m_chooser;
	const std::string kAutoNameDefault = "Default";
	const std::string kAutoNameCustom = "My Auto";
	std::string m_autoSelected;
};
