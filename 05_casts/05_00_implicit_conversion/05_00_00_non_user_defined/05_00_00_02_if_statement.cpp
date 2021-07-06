// Implicit conversion may take place when an expression is used:
// - for an initialization (including a function argument and a return statement)
// - as operand of operators
// - * in the condition of an if statement, the destination type is bool *

#include <iostream>

int main() {
    int x = 1;
    if (x) { // implicit conversion
        std::cout << "Hello World" << std::endl;
    }
}
