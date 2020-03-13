#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/RollerSubsystem.h"


class RollerDefault : public frc2::CommandHelper<frc2::CommandBase, RollerDefault> {
    public:
        explicit RollerDefault(RollerSubsystem* subsystem, std::function<int()> pov);
        void Execute() override;

    private:
        RollerSubsystem* m_subsystem;
        std::function<int()> m_pov;

};
