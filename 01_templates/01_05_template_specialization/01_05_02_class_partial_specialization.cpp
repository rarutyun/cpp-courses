// Partial template specialization
// Show specialization for reference
// Show that full specialization is preferred

#include <iostream>

template <typename T1, typename T2>
struct Z2 {
    Z2() { std::cout << "I work with everything except two the same type references" << std::endl; }
};

template <typename T>
struct Z2<T, int> {
    Z2() { std::cout << "I work with everything except int as second template parameter" << std::endl; }
};

template <typename T>
struct Z {
    Z() { std::cout << "I work with everything except pointers" << std::endl; }
};

// name of template parameter may be different
template <typename U>
struct Z<U*> {
    Z() { std::cout << "I work with pointers" << std::endl; }
};
int main() {
    Z<int> z1{};
    Z<const int*> z2{};
    Z<char*> z3{};
    Z<int&> z4{};
    Z<char&> z5{};
}
