#ifndef WINGMANN_DESIGN_PATTERNS_PROXY_REAL_SUBJECT_H
#define WINGMANN_DESIGN_PATTERNS_PROXY_REAL_SUBJECT_H

#include "subject.h"

#include <iostream>

/**
 * Real subject defines the real object that the proxy represents.
 */
class real_subject : public subject {
public:
    real_subject() = default;
    ~real_subject() override = default;

public:
    void request() override
    {
        std::cout << "Real subject request\n";
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_PROXY_REAL_SUBJECT_H
