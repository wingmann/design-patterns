#ifndef WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_TWO_H
#define WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_TWO_H

#include <iostream>

struct SubsystemTwo {
public:
    SubsystemTwo() = default;
    virtual ~SubsystemTwo() = default;

public:
    static void sub_operation() {
        std::cout << "Subsystem[2] method called\n";
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_TWO_H
