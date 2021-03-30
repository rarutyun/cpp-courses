#include <iostream>

struct A {};
struct B {
    B() = default;

    B(A) {
        std::cout << "conversion from A" << std::endl;
    }

    B& operator=(A) {
        std::cout << "conversion from A (assignment)" << std::endl;
        return *this;
    }
};

void foo(B b) {
    std::cout << "foo" << std::endl;
}

int main() {
    A a;
    foo(a);
}
