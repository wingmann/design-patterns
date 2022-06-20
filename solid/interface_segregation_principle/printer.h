#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_PRINTER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_PRINTER_H

#include "interfaces/iprinter.h"

#include <iostream>

class Printer : public IPrinter {
public:
    void print(Document& document) const override { std::cout << "Printer called\n"; }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_PRINTER_H
