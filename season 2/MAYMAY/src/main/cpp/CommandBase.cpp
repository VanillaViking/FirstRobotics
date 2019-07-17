#include "CommandBase.h"
#include "frc/commands/Scheduler.h"

OI * CommandBase::oi = NULL;
driveSubsystem * CommandBase::driveSystem = NULL;
CommandBase::CommandBase(char const *name) : Command(name) {};
CommandBase::CommandBase() : Command() {};

void CommandBase::init() {
    oi = new OI();
    driveSystem = new driveSubsystem();
}