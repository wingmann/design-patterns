#ifndef WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_COMMAND_H
#define WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_COMMAND_H

/**
 * Command declares an interface for all commands.
 */
class Command {
public:
    virtual ~Command() = default;

protected:
    Command() = default;

public:
    virtual void execute() = 0;
};

#endif // WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_COMMAND_H
