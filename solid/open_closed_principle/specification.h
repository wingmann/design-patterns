#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_SPECIFICATION_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_SPECIFICATION_H

#include <memory>

template<typename T>
class Specification {
public:
    Specification() = default;
    virtual ~Specification() = default;

public:
    virtual bool is_satisfied(std::shared_ptr<T> item) const = 0;
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_SPECIFICATION_H
