#ifndef WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_RECEIVER_H
#define WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_RECEIVER_H

#include <iostream>

/**
 * Receiver knows how to perform the operations associated with carrying out a request.
 */
class Receiver {
public:
    static void action() { std::cout << "Receiver: execute action\n"; }
};

#endif // WINGMANN_DESIGN_PATTERNS_BEHAVIORAL_COMMAND_RECEIVER_H
