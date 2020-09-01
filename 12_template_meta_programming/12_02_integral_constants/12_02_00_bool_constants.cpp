// Describe the integral constants use cases and possible implementation

#include <iostream>

namespace my {

    template <typename T, T Value>
    struct integral_constant {
        using value_type = T;
        using type = integral_constant;
        static constexpr T value = Value;
        constexpr operator T() { return value; }
    };

    // since C++17
    template <bool B>
    using bool_constant = integral_constant<bool, B>;

    using true_type = bool_constant<true>;
    using false_type = bool_constant<false>;

} // namespace my

int main() {
    my::true_type::value_type b; // bool t;
    b = my::true_type::value; // t = true;

    my::false_type false_t;
    my::true_type true_t;

    my::bool_constant<false_t::value || true_t::value> disjunction;

    bool b2 = false_t;

    std::cout << std::boolalpha << b2 << std::endl;

    my::integral_constant<double, 3.14> pi_type;
}
