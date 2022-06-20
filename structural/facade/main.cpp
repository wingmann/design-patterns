/**
 * Facade.
 * Provide a unified interface to a set of interfaces in a subsystem.
 * Facade defines a higher-level interface that makes the subsystem easier to use.
 * The pattern has structural purpose and applies to objects.
 *
 * When to use:
 * - You want to provide a simple interface to a complex subsystem.
 * - There are many dependencies between clients and the implementation classes of an abstraction.
 * - You want to layer your subsystems, use a Facade to define an entry point to each
 *   subsystem level.
 */

#include "facade.h"

int main()
{
    Facade facade{};
    facade.operation_one();
    facade.operation_two();

    return 0;
}
