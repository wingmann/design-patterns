/**
 * Liskov substitution principle.
 * Liskov's notion of a behavioural subtype defines a notion of substitutability for objects;
 * that is, if S is a subtype of T, then objects of type T in a program may be replaced with
 * objects of type S without altering any of the desirable properties of that program.
 */

#include "rectangle.h"
#include "square.h"
#include "process.h"

int main()
{
    Rectangle rectangle{32, 64};
    process(rectangle);

    Square square{64};
    process(square);

    return 0;
}
