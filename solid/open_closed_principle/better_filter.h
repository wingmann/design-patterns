#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_BETTER_FILTER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_BETTER_FILTER_H

#include "filter.h"
#include "product.h"

class BetterFilter : public Filter<Product> {
public:
    BetterFilter() = default;
    ~BetterFilter() override = default;

public:
    std::vector<std::shared_ptr<Product>>
    filter_with_specification(std::vector<std::shared_ptr<Product>> items,
                              Specification<Product>& specification) override
    {
        std::vector<std::shared_ptr<Product>> filtered_items{};

        for (auto& i : items)
            if (specification.is_satisfied(i))
                filtered_items.emplace_back(i);

        return filtered_items;
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_BETTER_FILTER_H
