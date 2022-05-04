#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_H

#include <iostream>
#include <cstdint>

class Rectangle {
protected:
    double width{};
    double height{};

public:
    Rectangle() = default;
    Rectangle(double width, double height) : width{width}, height{height}
    {
    }

    virtual ~Rectangle() = default;

public:
    [[nodiscard]] double get_width() const
    {
        return width;
    }

    virtual void set_width(double value)
    {
        width = value;
    }

    [[nodiscard]] double get_height() const
    {
        return height;
    }

    virtual void set_height(double value)
    {
        height = value;
    }

public:
    [[nodiscard]] double area() const
    {
        return width * height;
    }
};

static void process(Rectangle& rectangle)
{
    auto width = rectangle.get_width();
    rectangle.set_height(10);

    std::cout << "Expected area: " << width * 10 << ", got area: " << rectangle.area() << '\n';
}

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_H
