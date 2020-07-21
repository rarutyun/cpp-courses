// Show the difference between deleted and not defined move CTOR.

#include <iostream>

struct A {
    A() = default;
    A(const A&) = default;
//    A(A&&) = delete;
};

A foo() {
    A a;
    return a;
}

int main() {
    A a1;
    A a2(foo());
}
