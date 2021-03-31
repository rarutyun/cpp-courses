// Functional style cast looks like a constructor call
// Functional style cast can choose conversion operator

#include <iostream>

struct A {};
struct B {
    explicit B(A) {
        std::cout << "conversion from A" << std::endl;
    }

    explicit operator A() {
        std::cout << "conversion to A" << std::endl;
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
    A a1 = A(b);
}
