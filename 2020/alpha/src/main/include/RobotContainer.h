/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/Command.h>
#include <frc2/command/InstantCommand.h>

#include "subsystems/DriveSubsystem.h"
#include "subsystems/IntakeSubsystem.h"
#include "subsystems/RollerSubsystem.h"
#include "frc/Joystick.h"
#include "Constants.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

 private:
  // The robot's subsystems and commands are defined here...

  DriveSubsystem m_drive;
  IntakeSubsystem m_intakesystem;
  RollerSubsystem m_rollersystem;

  frc::Joystick logiStick{LOGI_JOYSTICK_PORT};

  //commands to increase/decrease roller speeds
  //frc2::InstantCommand RollerInc{[this] {m_rollersystem.IncSpeed();}, {}};
  //frc2::InstantCommand RollerDec{[this] {m_rollersystem.DecSpeed();}, {}};

  void ConfigureButtonBindings();
};
