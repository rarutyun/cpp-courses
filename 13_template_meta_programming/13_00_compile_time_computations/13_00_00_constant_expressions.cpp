// What are constant expressions and where they may be used?

#include <cstddef>
#include <array>

int foo();

int main() {
    const std::size_t size0 = 3 + 3; // better use constexpr
    std::size_t size1 = foo() + 4;

    int arr0[3 + 4];
    int arr1[size0];
    int arr2[size1];

    std::array<int, size1> std_arr2;
}
