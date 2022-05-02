#ifndef WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_FACADE_H
#define WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_FACADE_H

#include "subsystem_one.h"
#include "subsystem_two.h"
#include "subsystem_three.h"

/**
 * Facade delegates client requests to appropriate subsystem object and unified interface that
 * is easier to use.
 */
class facade {
    /**
     * Subsystems implement more complex subsystem functionality and have no knowledge
     * of the facade.
     */
    std::unique_ptr<subsystem_one> subsystem_one_;
    std::unique_ptr<subsystem_two> subsystem_two_;
    std::unique_ptr<subsystem_three> subsystem_three_;

public:
    facade()
        : subsystem_one_{std::make_unique<subsystem_one>()},
          subsystem_two_{std::make_unique<subsystem_two>()},
          subsystem_three_{std::make_unique<subsystem_three>()}
    {
    }

    virtual ~facade() = default;

public:
    void operation_one()
    {
        subsystem_one_->sub_operation();
        subsystem_two_->sub_operation();
    }

    void operation_two()
    {
        subsystem_three_->sub_operation();
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_FACADE_H
