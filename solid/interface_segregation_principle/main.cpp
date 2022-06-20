/**
 * Interface segregation principle.
 * No client should be forced to depend on methods it does not use (splits interfaces).
 */

#include "machine.h"
#include "printer.h"
#include "scanner.h"

int main()
{
    Document document{"link.txt", "https://isocpp.org/"};

    Printer printer{};
    Scanner scanner{};

    printer.print(document);
    scanner.scan(document);

    Machine machine{printer, scanner};
    machine.print(document);
    machine.scan(document);

    return 0;
}
