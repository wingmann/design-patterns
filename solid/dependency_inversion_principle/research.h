#ifndef DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RESEARCH_H
#define DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RESEARCH_H

#include "relationships_browser.h"

#include <iostream>

class Research {
public:
    Research(RelationshipsBrowser& browser)
    {
        for (auto& child : browser.find_all_children_of("John"))
            std::cout << "John has a child called " << child->name << '\n';
    }

    virtual ~Research() = default;
};

#endif //DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RESEARCH_H
