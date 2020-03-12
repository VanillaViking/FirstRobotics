/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RobotContainer.h"

#include <frc2/command/button/JoystickButton.h>
#include "commands/DriveCommand.h"
#include "commands/ElevatorSetSpeed.h"
#include "commands/IntakeCommand.h"


RobotContainer::RobotContainer() : m_autonomousCommand(&m_subsystem) {
  // Initialize all of your commands and subsystems here
    m_drive.SetDefaultCommand(DriveCommand(&m_drive, [this] {return logiStick.GetY();}, [this] {return logiStick.GetZ();}, [this] {return logiStick.GetRawAxis(3);}, true ));

  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
 
    frc2::JoystickButton(&logiStick, 1).WhileHeld(new IntakeCommand(&m_intakesystem, [this] {return logiStick.GetRawButtonPressed(2);}));
  
    frc2::JoystickButton(&logiStick , 11).WhileHeld(new ElevatorSetSpeed(&m_elevatorsystem, 0.5));


}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return &m_autonomousCommand;
}
