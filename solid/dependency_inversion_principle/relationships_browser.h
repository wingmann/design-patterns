#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RELATIONSHIPS_BROWSER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RELATIONSHIPS_BROWSER_H

#include "person.h"

#include <vector>
#include <memory>

class RelationshipsBrowser {
public:
    virtual std::vector<std::shared_ptr<Person>> find_all_children_of(const std::string& name) = 0;
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RELATIONSHIPS_BROWSER_H
