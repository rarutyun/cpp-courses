// "override" and "final" keywords description

// since C++11
#include <iostream>

struct base {
    virtual void foo() { std::cout << "Base Foo" << std::endl;}
    virtual void bar() { std::cout << "Base Bar" << std::endl;}
};

struct derived : public base {
    void foo() /*const*/ override { std::cout << "Derived Foo" << std::endl;}
    void bar() final { std::cout << "Derived Bar" << std::endl;}
};

struct derived_derived /*final*/: public derived {
    void foo() override { std::cout << "Derived Derived Foo" << std::endl;}
    void bar() override { std::cout << "Derived Derived Bar" << std::endl;}
};

struct derived_from_final : public derived_derived {};

int main () {
    derived_derived{}.foo();
}
