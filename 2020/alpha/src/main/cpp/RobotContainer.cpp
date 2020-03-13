/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RobotContainer.h"

#include <frc2/command/button/JoystickButton.h>
#include "commands/DriveCommand.h"
#include "commands/IntakeCommand.h"
#include "commands/RollerDefault.h"


RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here
    m_drive.SetDefaultCommand(DriveCommand(&m_drive, [this] {return logiStick.GetY();}, [this] {return logiStick.GetZ();}, [this] {return logiStick.GetRawAxis(3);}, true ));
    
    m_rollersystem.SetDefaultCommand(RollerDefault(&m_rollersystem, [this] {return logiStick.GetPOV();}));

  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
    
    //Intake Mapping 
    frc2::JoystickButton(&logiStick, 1).WhileHeld(new IntakeCommand(&m_intakesystem, [this] {return logiStick.GetRawButtonPressed(2);}));
    
    //Roller speeds 
    //frc2::POVButton(&logiStick, 90, 0).WhenPressed(&RollerInc);
    //frc2::POVButton(&logiStick, 270, 0).WhenPressed(&RollerDec);


}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  //return &m_autonomousCommand;
}
