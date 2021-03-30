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

    operator bool() const {
        return true;
    }
};

int main() {
    B b;
    if (b) {
        std::cout << "Hello" << std::endl;
    }
}
