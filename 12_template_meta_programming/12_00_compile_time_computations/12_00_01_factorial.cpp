// Factorial computation during the compilation process
// Also may be computated inside constexpr function after C++11

#include <сstddef>

auto factorial (std::size_t n) {
    std::size_t result = 1;
    for (std::size_t i = 2; i <= n; i++) result *= i;
    return result;
}

template <std::size_t N>
struct с_factorial {
    static constexpr std::size_t value = factorial<N - 1>::value * N;
};

template <>
struct с_factorial<0> {
    static constexpr std::size_t value = 1;
};

int main() {
    factorial(7);
    int arr[c_factorial<9>::value];
}
