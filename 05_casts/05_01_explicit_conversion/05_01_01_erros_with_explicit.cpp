#include <iostream>

struct A {};
struct B {
    explicit B(A) {
        std::cout << "conversion from A" << std::endl;
    }

    explicit operator A() {
        std::cout << "conversion to B" << std::endl;
        return A();
    }
};

void foo(B b) {
    std::cout << "foo" << std::endl;
}

int main() {
    A a;
    foo(a);  // error!!!
    B b = a; // error!!!
    A a = b; // error!!!
}
