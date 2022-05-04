#include "rectangle.h"
#include "rectangle_factory.h"

int main()
{
    Rectangle rectangle{32, 64};
    process(rectangle);

    auto square = RectangleFactory::create_square(64);
    process(square);

    return 0;
}
