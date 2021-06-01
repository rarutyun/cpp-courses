// Factorial computation during the compilation process
// Factorial looks simpler as a constexpr function since C++14

#include <cstddef>

template <std::size_t N>
struct factorial {
    static constexpr std::size_t value = factorial<N - 1>::value * N;
};

template <>
struct factorial<0> {
    static constexpr std::size_t value = 1;
};

constexpr auto calculate_factorial(std::size_t n) {
    std::size_t result = 1;
    for (std::size_t i = 2; i <= n; i++) result *= i;
    return result;
}

int main() {
    int arr[factorial<5>::value];
    int arr2[calculate_factorial(3)];
}
