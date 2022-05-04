#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_SCANNER_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_SCANNER_H

#include "interfaces/iscanner.h"

#include <iostream>

class Scanner : public IScanner {
public:
    void scan(Document& document) const override
    {
        std::cout << "Scanner called\n";
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_SCANNER_H
