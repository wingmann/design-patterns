/**
 * Dependency inversion principle.
 * High level modules should not depend on low level modules; both should depend on abstractions.
 * Abstractions should not depend on details. Details should depend upon abstractions.
 */

#include "person.h"
#include "relationships.h"
#include "research.h"

int main()
{
    Person parent{"John"};
    Person first_child{"Mark"};
    Person second_child{"Alice"};

    Relationships rs{};
    rs.add_parent_and_child(parent, first_child);
    rs.add_parent_and_child(parent, second_child);

    Research{rs};

    return 0;
}
