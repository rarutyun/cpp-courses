// Partial template specialization may be solved with overloads
// Suggest to use overloads if possible

#include <iostream>

template <typename T>
void foo(T t) {
    std::cout << "generic" << std::endl;
}

void foo(int t) {
    std::cout << "int" << std::endl;
}

template <typename T>
void foo(T* p) {
    std::cout << "pointer" << std::endl;
}

int main() {
    char c{};

    foo(c);
    foo(3);
    foo(&c);
}
