// lvalue ref
// expressions results +, +=, =, ++
// rvalue
// "lvalue"
// functions
// how to distinguish (adrs)

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

    &foo();
    &bar();
    &"hello";

    int* arr = new int[3];
    *arr = 1;
    *(arr + 1) = 2;
    arr[2] = 3;
}
