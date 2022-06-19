#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_COMBINING_SPECIFICATION_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_COMBINING_SPECIFICATION_H

#include "specification.h"

template<typename T>
class CombiningSpecification : public Specification<T> {
    Specification<T>& first_spec_{};
    Specification<T>& second_spec_{};

public:
    CombiningSpecification() = default;
    CombiningSpecification(Specification<T>& first, Specification<T>& second)
        : first_spec_{first}, second_spec_{second} {}

    ~CombiningSpecification() override = default;

public:
    bool is_satisfied(std::shared_ptr<T> item) const override {
        return first_spec_.is_satisfied(item) && second_spec_.is_satisfied(item);
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_COMBINING_SPECIFICATION_H
