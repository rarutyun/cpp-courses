#include <iostream>

struct A {};
struct B {
    B(A) {
        std::cout << "conversion from A" << std::endl;
    }
};


int main() {
    A a;
    B b = a; // implicit conversion
}
