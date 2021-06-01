// Mention about simplified implementation (std::remove_cv)

#include <iostream>

namespace my {

    template<typename T> struct is_floating_point              : std::false_type { };
    template<>           struct is_floating_point<float>       : std::true_type  { };
    template<>           struct is_floating_point<double>      : std::true_type  { };
    template<>           struct is_floating_point<long double> : std::true_type  { };

} // namespace my

int main() {
    std::cout << my::is_floating_point<int>::value    << std::endl;
    std::cout << my::is_floating_point<double>::value << std::endl;
}
