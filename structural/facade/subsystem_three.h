#ifndef WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_THREE_H
#define WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_THREE_H

#include <iostream>

struct SubsystemThree {
public:
    SubsystemThree() = default;
    virtual ~SubsystemThree() = default;

public:
    static void sub_operation()
    {
        std::cout << "Subsystem[3] method called\n";
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_SUBSYSTEM_THREE_H
