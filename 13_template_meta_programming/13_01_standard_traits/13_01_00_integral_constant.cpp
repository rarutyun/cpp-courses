// Describe the integral constants possible implementation

#include <iostream>

namespace my {

    template <typename T, T Value>
    struct integral_constant {
        using value_type = T;
        using type = integral_constant;
        static constexpr T value = Value;
        constexpr operator T() { return value; }
    };

    using true_type = integral_constant<bool, true>;
    using false_type = integral_constant<bool, false>;

    // since C++17
    template <bool B>
    using bool_constant = integral_constant<bool, B>;

} // namespace my

int main() {
    return my::integral_constant<bool, 3 == 2>::value;
}
