// constant expression explanation
// constexpr functions
// run-time constexpr functions usage

// since C++11

#include <cstddef>

// C++11 constexpr functions may not contain local variables and loops,
// therefore we need use recursion here (fixed in C++14)
constexpr std::size_t factorial(std::size_t n) {
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

// output function that requires a compile-time constant, for testing
template<std::size_t n>
struct constN {
    constN() { std::cout << n << '\n'; }
};

int main() {
    const int size = 3;
    int arr[size];

    int arr2[factorial(4)]; // computes at compile time
    constN<factorial(5)> out1;
}
