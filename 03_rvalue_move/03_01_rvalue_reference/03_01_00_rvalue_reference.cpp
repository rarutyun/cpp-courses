// Difference between lvalue and rvalue references
// Polymorphism, nullptr, immutable, always bound
// What can be bound to reference?
// How to get rvalue from lvalue?
// Type of rvalue reference itself

#include <iostream>

struct A {
    virtual void method() {
       std::cout << "method A" << std::endl;
    }
};

struct B : public A {
    void method() override {
        std::cout << "method B" << std::endl;
    }
};

int main() {
    B b;
    // A& a = B();
    A& a = b;
    a.method();
    const A& refA = B();

    A&& r_ref = B();
    r_ref.method();
    A& l_ref = r_ref;

    int&& r_int_ref = 3;
    int x{};
    int y{};
    int&& r_int_ref2 = x + y;
    B&& r_b_ref = std::move(b);
    static_cast<B&&>(b);
}
