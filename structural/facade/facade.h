#ifndef WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_FACADE_H
#define WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_FACADE_H

#include "subsystem_one.h"
#include "subsystem_two.h"
#include "subsystem_three.h"

/**
 * Facade delegates client requests to appropriate subsystem object and unified interface that
 * is easier to use.
 */
class Facade {
    /**
     * Subsystems implement more complex subsystem functionality and have no knowledge
     * of the Facade.
     */
    std::unique_ptr<SubsystemOne> subsystem_one_;
    std::unique_ptr<SubsystemTwo> subsystem_two_;
    std::unique_ptr<SubsystemThree> subsystem_three_;

public:
    Facade()
        : subsystem_one_{std::make_unique<SubsystemOne>()},
          subsystem_two_{std::make_unique<SubsystemTwo>()},
          subsystem_three_{std::make_unique<SubsystemThree>()}
    { }

    virtual ~Facade() = default;

public:
    void operation_one() {
        subsystem_one_->sub_operation();
        subsystem_two_->sub_operation();
    }

    void operation_two() { subsystem_three_->sub_operation(); }
};

#endif // WINGMANN_DESIGN_PATTERNS_STRUCTURAL_FACADE_FACADE_H
