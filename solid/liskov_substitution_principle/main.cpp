#include "rectangle.h"
#include "square.h"

int main()
{
    Rectangle rectangle{32, 64};
    process(rectangle);

    Square square{64};
    process(square);

    return 0;
}
