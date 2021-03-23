// constexpr variables:
//  - may be used inside compile-time expressions
//  - implies const

// requirements:
//  - the object type is Literal Type

// since C++11

#include <array>

constexpr int factorial(int n) {
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

int main() {
    constexpr int ct_fact4 = factorial(4);
    std::array<int, ct_fact4> arr1;

    int rt_fact6 = factorial(6); // will be computed in runtime
    // std::array<int, rt_fact6> arr2; // compile-time error
}
