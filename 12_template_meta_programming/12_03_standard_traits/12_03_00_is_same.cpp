#include <iostream>

namespace my {

    template <typename T, typename U>
    struct is_same : public std::false_type { };

    template <typename T>
    struct is_same<T, T> : public std::true_type { };

    // sinse C++14
    template<typename T, typename U>
    using is_same_t = is_same<T, U>::type;

    // sinse C++14
    template <class T, class U>
    inline constexpr bool is_same_v = is_same<T, U>::value;

} // namespace my

int main() {
    std::cout << my::is_same<int, int>::value << std::endl;
    std::cout << my::is_same_v<int, double> << std::endl;
}
