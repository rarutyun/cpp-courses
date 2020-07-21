// Rvalue reference as a return type

#include <iostream>

class A {};

A& getALRef() {
    A a;
    return a;
}

A&& getA() {
    A a;
    return std::move(a);
}

int&& getInt() {
    return 5;
}

int main() {
    std::cout << getInt() << std::endl;
    getA();
}
