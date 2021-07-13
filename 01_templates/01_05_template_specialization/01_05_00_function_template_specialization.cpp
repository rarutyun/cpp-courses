// What is template specialization?
// Differencies between full and partial specialization
// Compare function overloads with function template specializations
// Template specialization is not an overload

#include <iostream>

template <typename T>
void bar() {
    std::cout << "generic" << std::endl;
}

template <>
void bar<int>() {
    std::cout << "int" << std::endl;
}

// template <typename U>
// void bar<U*>() {
//     std::cout << "pointer" << std::endl;
// }

int main() {
    char c{};

    bar<double>();
    bar<int>();
}
