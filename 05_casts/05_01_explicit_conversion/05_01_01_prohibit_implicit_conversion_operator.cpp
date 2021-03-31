// How to prohibit implicit conversion?

#include <iostream>

struct A {};
struct B {
    operator A() {
        std::cout << "conversion to A" << std::endl;
        return A();
    }
};

int main() {
    B b;
    A a1 = b; // error!!!
}
