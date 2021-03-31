// static_cast can be used in the same context as the implicit conversion
// up and down casts
// void* to the type of any pointer

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
    foo(static_cast<B>(a));
    B b = static_cast<B>(a);
    A a1 = static_cast<A>(b);
}
