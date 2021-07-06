// What is expression?
// Expressions: +, +=, =, ++
// rvalue/lvalue
// Functions
// How to distinguish (address)

#include <iostream>

int foo() {
    int a = 5;
    return a;
}

int& bar() {
    static int a = 6;
    return a;
}

int main() {
    int a;
    int b = foo();
    int& ref = a;

    a = b;
    1;
    a + b;
    a++;

    foo();
    bar();
    "hello";
}
