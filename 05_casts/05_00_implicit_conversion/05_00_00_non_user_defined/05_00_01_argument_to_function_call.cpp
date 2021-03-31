// Implicit conversion may take place when an expression is used:
// - to create a new object
// - * as an argument to a function call *
// - as the operand of another expression
// - as a logical expression

#include <iostream>

void foo(int x) {
    std::cout << "foo" << std::endl;
}

int main() {
    char ch = 'a';
    foo(ch); // implicit conversion
}
