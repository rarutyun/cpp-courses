// What would be printed?
// Be careful with type deduction

#include <iostream>

// doesn't matter class member or not
template <typename T>
void f(const T& ref) {
    std::cout << "lvalue reference" << std::endl;
}

template <typename T>
void f(T&& ref) {
    std::cout << "forwarding reference" << std::endl;
}

int main() {
    int a = 2;
    const int ca = 3;
    f(a);
    f(ca);
    f(std::move(a));
    f(std::move(ca));
}
