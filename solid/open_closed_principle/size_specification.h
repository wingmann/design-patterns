#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_SIZE_SPECIFICATION_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_SIZE_SPECIFICATION_H

#include "product.h"
#include "size.h"
#include "specification.h"

#include <memory>

class SizeSpecification : public Specification<Product> {
    Size size_;

public:
    SizeSpecification() = delete;
    explicit SizeSpecification(Size size) : size_{size} { }
    ~SizeSpecification() override = default;

public:
    [[nodiscard]] bool is_satisfied(std::shared_ptr<Product> item) const override
    {
        return item->size == size_;
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_SIZE_SPECIFICATION_H
