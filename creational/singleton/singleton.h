#ifndef WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H
#define WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H

#include <iostream>
#include <memory>

/**
 * Singleton has private static variable to hold one instance of the class and method which gives
 * us a way to instantiate the class.
 */
class singleton {
    static std::shared_ptr<singleton> instance_;

public:
    /**
     * The copy constructor and assignment operator are defined as deleted,
     * which means that you can't make a copy of singleton.
     * @note
     * You can achieve the same effect by declaring the constructor and the operator as private.
     */
    singleton(const singleton& singleton) = delete;
    virtual ~singleton() = default;

public:
    singleton& operator=(const singleton& singleton) = delete;

public:
    static std::shared_ptr<singleton> get()
    {
        class make_shared_enabler : public singleton { };

        if (!instance_)
            instance_ = std::make_shared<make_shared_enabler>();

        return instance_;
    }

    static void tell()
    {
        std::cout << "This is singleton\n";
    }

private:
    singleton() = default;
};

std::shared_ptr<singleton> singleton::instance_ = nullptr;

#endif // WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H
