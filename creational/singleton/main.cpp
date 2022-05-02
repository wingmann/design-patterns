/**
 * Singleton.
 * Ensure a class only has one instance, and provide a global point of access to it.
 * Pattern has creation purpose and deals with object relationships, which are more dynamic.
 * The Singleton is often used as a part another design patterns (see Facade and Flyweight).
 *
 * When to use:
 * - There must be exactly one instance of a class,
 *   and it must be accessible to clients from a well-known access point.
 * - When the sole instance should be extensible by subclassing,
 *   and clients should be able to use an extended instance without modifying their code.
 */

#include "singleton.h"

int main()
{
    Singleton::get()->tell();
    Singleton::reset();

    return 0;
}