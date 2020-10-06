// Constant expression explanation.
// Constexpr functions.
// Run-time constexpr functions usage.

// since C++11

#include <iostream>

// C++11 constexpr functions may not contain local variables and loops,
// therefore we need use recursion here (fixed in C++14).
constexpr int factorial(int n) {
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

// output function that requires a compile-time constant, for testing.
template<int n>
struct constN {
    constN() { std::cout << n << '\n'; }
};

int main() {
    const int size = 3;
    int arr[size];

    int arr2[factorial(4)]; // computes at compile time
    constN<factorial(5)> out1;
}
