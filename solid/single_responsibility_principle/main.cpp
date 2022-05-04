#include "journal.h"
#include "persistence_manager.h"

/**
 * Single responsibility principle.
 * Module, class, or function should have responsibility over a single part of the functionality.
 */

int main()
{
    Journal journal{"My journal"};
    journal.add_entry("First note");
    journal.add_entry("Second note");

    PersistenceManager::save(journal);

    return 0;
}
