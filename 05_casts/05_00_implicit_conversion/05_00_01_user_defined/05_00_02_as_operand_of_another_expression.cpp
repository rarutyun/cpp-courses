#include <iostream>

struct A {};
struct B {
    B(A) {
        std::cout << "conversion from A" << std::endl;
    }
};

B foo(A a) {
    std::cout << "foo" << std::endl;
    return a; // implicit conversion
}

int main() {
    A a;
    foo(a); // implicit conversion
}
