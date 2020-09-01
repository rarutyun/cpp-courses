#include <iostream>

namespace my {

    template<typename T>
    struct is_array : std::false_type {};

    template<typename T>
    struct is_array<T[]> : std::true_type {};

    template<typename T, std::size_t N>
    struct is_array<T[N]> : std::true_type {};

} // namespace my

int main() {
    std::cout << my::is_array<int>::value    << std::endl;
    std::cout << my::is_array<double[]>::value << std::endl;
    std::cout << my::is_array<double[3]>::value << std::endl;
}
