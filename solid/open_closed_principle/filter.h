#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_FILTER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_FILTER_H

#include "product.h"
#include "specification.h"

#include <memory>
#include <vector>

template<typename T>
class Filter {
public:
    Filter() = default;
    virtual ~Filter() = default;

public:
    virtual std::vector<std::shared_ptr<T>> filter_with_specification(
        std::vector<std::shared_ptr<T>> items, Specification<Product>& specification) = 0;
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_FILTER_H
