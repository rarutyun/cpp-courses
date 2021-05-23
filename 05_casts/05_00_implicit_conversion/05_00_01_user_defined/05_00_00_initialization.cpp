// Implicit conversion may take place when an expression is used:
// - * for an initialization (which includes use as an argument in a function call and the expression in a return statement) *
// - as operand of operators
// - in the condition of an if statement, the destination type is bool
// - in the expression of a switch statement, the destination type is integral

#include <iostream>

struct A {};
struct B {
    B(A) {
        std::cout << "conversion from A" << std::endl;
    }
};


void foo(B b) {}

B bar() {
    A a;
    return a; // implicit conversion
}

int main() {
    A a;
    B b = a; // implicit conversion

    foo(a); // implicit conversion

    B b = bar();
}
