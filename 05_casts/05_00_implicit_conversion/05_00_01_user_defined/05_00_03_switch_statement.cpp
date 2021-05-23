// Implicit conversion may take place when an expression is used:
// - for an initialization (which includes use as an argument in a function call and the expression in a return statement)
// - as operand of operators
// - in the condition of an if statement, the destination type is bool
// - * in the expression of a switch statement, the destination type is integral *

#include <iostream>

struct B {
    B() = default;

    operator int() {
        return 1;
    }
};

int main() {
    B b;
    switch (b) { // implicit conversion
        case 1 : {
            std::cout << "Hello";
            break;
        }
        case 2 : {
            std::cout << "World";
            break;
        }
    }
}
