#ifndef WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H
#define WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H

#include <iostream>
#include <memory>

/**
 * Singleton has private static variable to hold one instance of the class and method which gives
 * us a way to instantiate the class.
 */
class Singleton {
    static std::shared_ptr<Singleton> instance_;

public:
    /**
     * The copy constructor and assignment operator are defined as deleted,
     * which means that you can't make a copy of Singleton.
     * @note
     * You can achieve the same effect by declaring the constructor and the operator as private.
     */
    Singleton(const Singleton& singleton) = delete;
    virtual ~Singleton() = default;

public:
    Singleton& operator=(const Singleton& singleton) = delete;

public:
    static std::shared_ptr<Singleton> get() {
        class make_shared_enabler : public Singleton { };

        if (!instance_)
            instance_ = std::make_shared<make_shared_enabler>();

        return instance_;
    }

    static void tell() { std::cout << "This is Singleton\n"; }

private:
    Singleton() = default;
};

std::shared_ptr<Singleton> Singleton::instance_ = nullptr;

#endif // WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H
