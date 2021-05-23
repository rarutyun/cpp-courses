// Implicit conversion may take place when an expression is used:
// - for an initialization (which includes use as an argument in a function call and the expression in a return statement)
// - as operand of operators
// - * in the condition of an if statement, the destination type is bool *
// - in the expression of a switch statement, the destination type is integral

#include <iostream>

int main() {
    int x = 1;
    if (x) { // implicit conversion
        std::cout << "Hello World" << std::endl;
    }
}
