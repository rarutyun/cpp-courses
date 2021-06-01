// Implement std::is_nothrow_move_constructible

#include <iostream>
#include <utility>

namespace my {

    template<typename T>
    struct is_nothrow_move_constructible {};

} // namespace my

struct my_struct {
    my_struct(my_struct&&) {}
};

struct my_struct2 {
    my_struct2(my_struct2&&) noexcept {}
};


int main() {
    // std::cout << my::is_nothrow_move_constructible<my_struct>::value << std::endl;
    // std::cout << my::is_nothrow_move_constructible<my_struct2>::value << std::endl;
}
