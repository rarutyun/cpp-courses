#include <type_traits>
#include <iostream>

namespace my {
    template<typename T1, typename... Tn>
    struct disjunction : std::conditional_t<bool(T1::value), disjunction<Tn...>, std::false_type> {};

    template<typename T1>
    struct disjunction<T1> : std::integral_constant<bool, bool(T1::value)> {};
}

int main() {
    std::cout
        << std::boolalpha
        << my::disjunction<std::true_type, std::false_type, std::true_type>::value << std::endl
        << my::disjunction<std::true_type, std::true_type,  std::true_type>::value << std::endl;
}
