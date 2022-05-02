#ifndef WINGMANN_DESIGN_PATTERNS_PROXY_PROXY_H
#define WINGMANN_DESIGN_PATTERNS_PROXY_PROXY_H

#include "subject.h"
#include "real_subject.h"

#include <memory>

/*
 * Proxy maintains a reference that lets the proxy access the real subject.
 */
class proxy : public subject {
    std::unique_ptr<subject> subject_ = std::make_unique<real_subject>();

public:
    proxy() = default;
    ~proxy() override = default;

public:
    void request() override
    {
        subject_->request();
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_PROXY_PROXY_H
