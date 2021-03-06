#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IMACHINE_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IMACHINE_H

#include "iprinter.h"
#include "iscanner.h"

struct IMachine : public IPrinter, IScanner {};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_INTERFACE_SEGREGATION_PRINCIPLE_IMACHINE_H
