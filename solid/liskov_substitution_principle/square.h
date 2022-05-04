#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_SQUARE_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_SQUARE_H

#include "rectangle.h"

class Square : public Rectangle {
public:
    Square() = default;
    explicit Square(double side) : Rectangle{side, side}
    {
    }

    ~Square() override = default;

public:
    void set_width(double value) override
    {
        width = height = value;
    }

    void set_height(double value) override
    {
        height = width = value;
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_SQUARE_H
