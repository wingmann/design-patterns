#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_FACTORY_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_FACTORY_H

#include "rectangle.h"

class RectangleFactory {
public:
    static Rectangle create_rectangle(std::int64_t width, std::int64_t height)
    {
        return Rectangle{width, height};
    }

    static Rectangle create_square(std::int64_t side)
    {
        return Rectangle{side, side};
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_FACTORY_H
