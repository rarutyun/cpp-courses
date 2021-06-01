#include <iostream>

namespace my {

    template<typename T> struct is_const          : std::false_type {};
    template<typename T> struct is_const<const T> : std::true_type  {};

} // namespace my

int main() {
    std::cout << my::is_const<int>::value    << std::endl;
    std::cout << my::is_const<const int>::value    << std::endl;
}
