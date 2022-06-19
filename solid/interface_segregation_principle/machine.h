#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_MACHINE_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_MACHINE_H

#include "interfaces/imachine.h"

class Machine : public IMachine {
    IPrinter& printer_;
    IScanner& scanner_;

public:
    Machine() = delete;
    Machine(IPrinter& printer, IScanner& scanner) : printer_{printer}, scanner_{scanner} {}

    virtual ~Machine() = default;

public:
    void print(Document& document) const override {
        std::cout << "Machine -> ";
        printer_.print(document);
    }

    void scan(Document& document) const override {
        std::cout << "Machine -> ";
        scanner_.scan(document);
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_MACHINE_H
