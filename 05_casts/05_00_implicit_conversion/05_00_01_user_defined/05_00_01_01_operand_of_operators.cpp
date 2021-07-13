// Implicit conversion may take place when an expression is used:
// - for an initialization (including a function argument and a return statement)
// - * as operand of operators *
// - in the condition of an if statement, the destination type is bool

#include <iostream>

struct A {};
struct B {
    B() = default;
    B(A) {
        std::cout << "conversion from A" << std::endl;
    }

    void operator+(B) const {}
};

int main() {
    A a;
    B b;
    b + a; // implicit conversion

}
