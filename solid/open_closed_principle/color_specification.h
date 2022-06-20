#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_COLOR_SPECIFICATION_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_COLOR_SPECIFICATION_H

#include "color.h"
#include "product.h"
#include "specification.h"

#include <memory>

class ColorSpecification : public Specification<Product> {
    Color color_;

public:
    ColorSpecification() = delete;
    explicit ColorSpecification(Color color) : color_{color} { }
    ~ColorSpecification() override = default;

public:
    [[nodiscard]] bool is_satisfied(std::shared_ptr<Product> item) const override
    {
        return item->color == color_;
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_COLOR_SPECIFICATION_H
