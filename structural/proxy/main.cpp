/**
 * Proxy pattern provides a surrogate or placeholder for another object to control access to it.
 * The pattern has structural purpose and applies to objects.
 *
 * When to use:
 * - Whenever there is a need for a more versatile or sophisticated reference to an object than a
 *   simple pointer.
 */

#include "proxy.h"

int main()
{
    auto p = std::make_shared<proxy>();
    p->request();

    return 0;
}
