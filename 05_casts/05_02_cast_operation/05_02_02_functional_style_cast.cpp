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
    foo(B(a));
    B b = B(a);
    A a = A(b);
}
