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

B foo(A a) {
    std::cout << "foo" << std::endl;
    return a;
}

int main() {
    A a;
    foo(a);
    B b(a);
    b = a;
}
