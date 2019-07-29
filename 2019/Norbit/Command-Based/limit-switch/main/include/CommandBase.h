#ifndef COMMANDBASE_H
#define COMMANDBASE_H
#include "OI.h"
#include "frc/commands/Command.h"
#include <frc/WPILib.h>
#include "subsystems/driveSubsystem.h"


class CommandBase : public frc::Command {
    public:
        static void init();
        CommandBase(char const *name);
        CommandBase();
        static OI *oi;
        static driveSubsystem *driveSystem;
        
};




#endif