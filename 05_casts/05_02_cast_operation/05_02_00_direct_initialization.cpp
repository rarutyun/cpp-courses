// Difference between copy and direct initialization

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

int main() {
    A a;
    B b = a; // error!!!
    A a1 = b; // error!!!
}
