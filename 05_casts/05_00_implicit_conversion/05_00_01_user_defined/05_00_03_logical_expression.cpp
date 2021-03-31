#include <iostream>

struct A {};
struct B {
    B() = default;

    operator bool() const {
        return true;
    }
};

int main() {
    B b;
    if (b) { // implicit conversion
        std::cout << "Hello" << std::endl;
    }
}
