#include "commands/RollerDefault.h"

RollerDefault::RollerDefault(RollerSubsystem* subsystem) 
    : m_subsystem{subsystem} {
    
    AddRequirements({subsystem});

}

void RollerDefault::Execute() {
    m_subsystem->SetSpeed();
}
