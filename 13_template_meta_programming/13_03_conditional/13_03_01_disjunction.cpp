#include <type_traits>
#include <iostream>

namespace my {
    template <typename... Tn>
    struct disjunction : std::false_type {};

    template<typename T1, typename... Tn>
    struct disjunction<T1, Tn...> : std::conditional_t<bool(T1::value), T1, disjunction<Tn...>> {};

    template<typename T1>
    struct disjunction<T1> : T1 {};
}

int main() {
    std::cout
        << std::boolalpha
        << my::disjunction<std::true_type, std::false_type, std::true_type>::value << std::endl
        << my::disjunction<std::true_type, std::true_type,  std::true_type>::value << std::endl;
}
