#ifndef WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_ONE_H
#define WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_ONE_H

#include <iostream>

struct subsystem_one {
    void sub_operation() { std::cout << "Subsystem[1] method called\n"; }
};

#endif // WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_ONE_H
