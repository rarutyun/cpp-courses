// Compiler generated move semantics

#include <iostream>

struct A {
    A()                        { std::cout << "A default ctor" << std::endl; }
    A(const A&)                { std::cout << "A copy ctor" << std::endl; }
    A& operator=(const A& rhs) { std::cout << "A copy assignment" << std::endl; return *this; }
};

A foo() {
    A a;
    return a;
}

int main() {
    A a(foo());
}
