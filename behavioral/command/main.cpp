/**
 * Command pattern encapsulates a request as an object, thereby letting you parameterize clients
 * with different requests, queue or log requests, and supports undoable operations.
 * The pattern has a behavioral purpose and deals with relationships between objects.
 *
 * When to use:
 * - Want to parameterize objects by an action to perform.
 * - Want to specify, queue, and execute requests at different times.
 * - Support undo.
 * - Support logging changes so that they can be reapplied in case of a system crash.
 * - Structure a system around high-level operations built on primitives operations.
 */

#include "concrete_command.h"
#include "invoker.h"
#include "receiver.h"

int main()
{
    auto command = std::make_shared<ConcreteCommand>(std::make_shared<Receiver>());

    auto invoker = std::make_shared<Invoker>();
    invoker->set(command);
    invoker->confirm();

    return 0;
}
