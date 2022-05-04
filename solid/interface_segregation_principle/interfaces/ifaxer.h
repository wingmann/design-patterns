#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IFAXER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IFAXER_H

#include "../document.h"

struct IFaxer {
    virtual void fax(Document& document) const = 0;
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IFAXER_H
