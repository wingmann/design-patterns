#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_SINGLE_RESPONSIBILITY_PRINCIPLE_PERSISTENCE_MANAGER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_SINGLE_RESPONSIBILITY_PRINCIPLE_PERSISTENCE_MANAGER_H

#include "journal.h"

#include <iostream>

class PersistenceManager {
public:
    PersistenceManager() = delete;

public:
    static void save(Journal& journal)
    {
        auto entries = journal.get_entries();

        std::cout << "Saved:\n";
        for (auto& e : entries) std::cout << "  " << e << '\n';
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_SINGLE_RESPONSIBILITY_PRINCIPLE_PERSISTENCE_MANAGER_H
