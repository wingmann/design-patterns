#ifndef WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_CONCRETE_COMMAND_H
#define WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_CONCRETE_COMMAND_H

#include "command.h"
#include "receiver.h"

#include <memory>

/**
 * Concrete command implements execute by invoking the corresponding operation(s) on receiver.
 */
class concrete_command : public command {
    std::shared_ptr<receiver> receiver_;

public:
    explicit concrete_command(std::shared_ptr<receiver> receiver) : receiver_{std::move(receiver)}
    {
    }

    ~concrete_command() override = default;

public:
    void execute() override
    {
        receiver_->action();
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_CONCRETE_COMMAND_H
