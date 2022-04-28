#ifndef WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H
#define WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H

#include <iostream>

/**
 * Singleton has private static variable to hold one instance of the class and method which gives
 * us a way to instantiate the class.
 */
class Singleton {
    static Singleton* instance_;

public:
    /**
     * The copy constructor and assignment operator are defined as deleted,
     * which means that you can't make a copy of singleton.
     * @note
     * You can achieve the same effect by declaring the constructor and the operator as private.
     */
    Singleton(const Singleton& singleton) = delete;
    virtual ~Singleton() { delete instance_; }

    Singleton& operator=(const Singleton& singleton) = delete;

public:
    static Singleton* get()
    {
        if (!instance_) instance_ = new Singleton{};
        return instance_;
    }

    static void reset() { delete instance_; }

    static void tell() { std::cout << "This is singleton\n"; }

private:
    Singleton() = default;
};

Singleton* Singleton::instance_ = nullptr;

#endif // WINGMANN_DESIGN_PATTERNS_SINGLETON_SINGLETON_H
