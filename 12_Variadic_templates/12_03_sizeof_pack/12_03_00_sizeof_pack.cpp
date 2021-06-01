#include <iostream>

template <typename... Args>
void foo() {
    std::cout << sizeof...(Args) << std::endl;
}

int main() {
    foo<int, float>();
    foo();
    foo<int>();
}