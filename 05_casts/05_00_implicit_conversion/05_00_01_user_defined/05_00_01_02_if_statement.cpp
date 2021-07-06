// Implicit conversion may take place when an expression is used:
// - for an initialization (which includes use as an argument in a function call and the expression in a return statement)
// - as operand of operators
// - * in the condition of an if statement, the destination type is bool *

#include <iostream>

struct B {
    B() = default;

    operator bool() const {
        return true;
    }
};

int main() {
    B b;
    if (b) { // implicit conversion
        std::cout << "Hello World" << std::endl;
    }
}
