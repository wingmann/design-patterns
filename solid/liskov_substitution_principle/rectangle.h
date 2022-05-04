#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_H

#include <iostream>
#include <cstdint>

class Rectangle {
protected:
    std::int64_t width_{};
    std::int64_t height_{};

public:
    Rectangle() = default;
    Rectangle(std::int64_t width, std::int64_t height) : width_{width}, height_{height}
    {
    }

    virtual ~Rectangle() = default;

public:
    [[nodiscard]] std::int64_t get_width() const
    {
        return width_;
    }

    virtual void set_width(std::int64_t value)
    {
        width_ = value;
    }

    [[nodiscard]] std::int64_t get_height() const
    {
        return height_;
    }

    virtual void set_height(std::int64_t value)
    {
        height_ = value;
    }

public:
    [[nodiscard]] std::int64_t area() const
    {
        return width_ * height_;
    }
};

static void process(Rectangle& rectangle)
{
    auto width = rectangle.get_width();
    rectangle.set_height(10);

    std::cout << "Expected area: " << width * 10 << ", got area: " << rectangle.area() << '\n';
}

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_LISKOV_SUBSTITUTION_PRINCIPLE_RECTANGLE_H
