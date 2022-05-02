#ifndef WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_INVOKER_H
#define WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_INVOKER_H

#include "command.h"

#include <memory>
#include <utility>

class invoker {
    std::shared_ptr<command> command_;

public:
    void set(std::shared_ptr<command> command)
    {
        command_ = std::move(command);
    }

    void confirm()
    {
        if (command_) command_->execute();
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_INVOKER_H
