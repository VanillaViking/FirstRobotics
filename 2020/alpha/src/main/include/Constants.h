/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

constexpr int LOGI_JOYSTICK_PORT = 0;

constexpr int L_TOP_MOTOR = 0;
constexpr int L_REAR_MOTOR = 1;

constexpr int R_TOP_MOTOR = 2;
constexpr int R_REAR_MOTOR = 3;


namespace ElevatorConstants {
    constexpr int ELEVATOR_PORT = 8;
    constexpr int MOTOR9_PORT = 9;
    constexpr int MOTOR6_PORT = 6;

}
