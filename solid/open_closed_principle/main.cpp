/**
 * Open–closed principle.
 * Classes, modules, functions, etc. should be open for extension, but closed for modification.
 * Open-closed principle is one of the five SOLID principles of object-oriented design.
 */

#include "better_filter.h"
#include "color.h"
#include "color_specification.h"
#include "combining_specification.h"
#include "size.h"
#include "size_specification.h"
#include "product.h"

#include <memory>
#include <iostream>

int main()
{
    Product apple{"Apple", Color::Green, Size::Small};
    Product tree{"Tree", Color::Green, Size::Large};
    Product house{"House", Color::Blue, Size::Large};

    auto items = std::vector{
        std::make_shared<Product>(apple),
        std::make_shared<Product>(tree),
        std::make_shared<Product>(house)};

    BetterFilter filter{};

    ColorSpecification green{Color::Green};
    SizeSpecification large{Size::Large};

    for (auto& item : filter.filter_with_specification(items, green))
        std::cout << item->name << " is green\n";

    CombiningSpecification<Product> green_and_large{green, large};

    for (auto& item : filter.filter_with_specification(items, green_and_large))
        std::cout << item->name << " is green and large";

    return 0;
}
