#include <iostream>

struct A {};
struct B {
    B(A) {
        std::cout << "conversion from A" << std::endl;
    }
};

void foo(B b) {
    std::cout << "foo" << std::endl;
}

int main() {
    A a;
    foo(a); // implicit conversion
}
