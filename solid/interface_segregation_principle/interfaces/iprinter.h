#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IPRINTER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IPRINTER_H

#include "document.h"

struct IPrinter {
    virtual void print(Document& document) const = 0;
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IPRINTER_H
