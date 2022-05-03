#ifndef WINGMANN_DESIGN_PATTERNS_PROXY_SUBJECT_H
#define WINGMANN_DESIGN_PATTERNS_PROXY_SUBJECT_H

/**
 * Subject defines the common interface for RealSubject and proxy so that a proxy can be used
 * anywhere a real subject is expected.
 */
class Subject {
public:
    Subject() = default;
    virtual ~Subject() = default;

public:
    virtual void request() = 0;
};

#endif // WINGMANN_DESIGN_PATTERNS_PROXY_SUBJECT_H
