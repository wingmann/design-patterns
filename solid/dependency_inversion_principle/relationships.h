#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RELATIONSHIPS_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RELATIONSHIPS_H

#include "relationship.h"
#include "relationships_browser.h"

#include <tuple>

class Relationships : public RelationshipsBrowser {
    std::vector<std::tuple<Person, Relationship, Person>> relations_{};

public:
    Relationships() = default;
    virtual ~Relationships() = default;

public:
    void add_parent_and_child(const Person& parent, const Person& child) {
        relations_.push_back({parent, Relationship::Parent, child});
        relations_.push_back({child, Relationship::Child, parent});
    }

    std::vector<std::shared_ptr<Person>> find_all_children_of(const std::string& name) override {
        std::vector<std::shared_ptr<Person>> result{};

        for (auto&& [first, relation, second] : relations_)
            if ((first.name == name) && (relation == Relationship::Parent))
                result.emplace_back(&second);

        return std::move(result);
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_DEPENDENCY_INVERSION_PRINCIPLE_RELATIONSHIPS_H
