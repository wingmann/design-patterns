#ifndef DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_PRODUCT_H
#define DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_PRODUCT_H

#include "color.h"
#include "size.h"

#include <string>

struct Product {
    std::string name;
    Color color;
    Size size;
};

#endif //DESIGN_PATTERNS_SOLID_OPEN_CLOSED_PRINCIPLE_PRODUCT_H
