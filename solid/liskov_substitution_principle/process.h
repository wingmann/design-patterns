#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_PROCESS_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_PROCESS_H

#include "rectangle.h"

void process(Rectangle& rectangle)
{
    auto width = rectangle.get_width();
    rectangle.set_height(10);

    std::cout << "Expected area: " << (width * 10)
              << ", got area: " << rectangle.area() << '\n';
}

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_PROCESS_H
