// How to prohibit implicit conversion?

#include <iostream>

struct A {};
struct B {
    B(A) {
        std::cout << "conversion from A" << std::endl;
    }

    operator A() {
        std::cout << "conversion to B" << std::endl;
        return A();
    }
};

void foo(B b) {
    std::cout << "foo" << std::endl;
}

int main() {
    A a;
    foo(a);
}
