#ifndef WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_CONCRETE_COMMAND_H
#define WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_CONCRETE_COMMAND_H

#include "command.h"
#include "receiver.h"

#include <memory>
#include <utility>

/**
 * Concrete Command implements execute by invoking the corresponding operation(s) on Receiver.
 */
class ConcreteCommand : public Command {
    std::shared_ptr<Receiver> receiver_;

public:
    ConcreteCommand() = delete;
    explicit ConcreteCommand(std::shared_ptr<Receiver> receiver) : receiver_{std::move(receiver)}
    {
    }
    ~ConcreteCommand() override = default;

public:
    void execute() override { receiver_->action(); }
};

#endif // WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_CONCRETE_COMMAND_H
