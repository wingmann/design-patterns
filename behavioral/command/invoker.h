#ifndef WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_INVOKER_H
#define WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_INVOKER_H

#include "command.h"

#include <memory>
#include <utility>

class Invoker {
    std::shared_ptr<Command> command_;

public:
    void set(std::shared_ptr<Command> command) {
        command_ = std::move(command);
    }

    void confirm() {
        if (command_) command_->execute();
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_INVOKER_H
