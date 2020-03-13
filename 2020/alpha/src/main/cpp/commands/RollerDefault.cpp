#include "commands/RollerDefault.h"

RollerDefault::RollerDefault(RollerSubsystem* subsystem, std::function<int()> pov) : 
    m_subsystem{subsystem},
    m_pov{pov} {
    
    AddRequirements({subsystem});

}

void RollerDefault::Execute() {
    m_subsystem->SetSpeed();

    if (m_pov() == 0) {
        m_subsystem->IncSpeed();
    } else if (m_pov() == 180) {
        m_subsystem->DecSpeed(); 
    }
}
