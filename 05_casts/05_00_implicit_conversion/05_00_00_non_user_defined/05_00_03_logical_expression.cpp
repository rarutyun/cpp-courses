// Implicit conversion may take place when an expression is used:
// - to create a new object
// - as an argument to a function call
// - as the operand of another expression
// - * as a logical expression *

#include <iostream>

int main() {
    int x = 1;
    if (x) { // implicit conversion
        std::cout << "Hello" << std::endl;
    }
}
