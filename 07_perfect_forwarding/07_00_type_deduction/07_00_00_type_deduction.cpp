// Remember type deduction rules (pass rvalue, const int, int&, const int& as an argument)
// Add reference to the foo() parameter

#include <iostream>

template <typename T>
void foo(T) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int main() {
    int i = 3;
    foo(i);
}
