// "auto" variables definition
// type deduction rules for auto variables

// since C++11

int main() {
    int i{};
    int& i_ref = i;
    const int& const_i_ref = i_ref;
    int* i_ptr = &i;

    auto a1 = 100;         // int
    auto a1 = i;           // int
    auto a2 = i_ref;       // int
    auto a3 = const_i_ref; // int
    auto a4 = i_ptr;       // int*

    auto& a_ref1 = i;           // int&
    auto& a_ref2 = i_ref;       // int&
    auto& a_ref3 = const_i_ref; // const int&
    auto& a_ref4 = i_ptr;       // int*&
    // auto& a_ref0 = int{};    // compile-time error

    const auto& const_a_ref0 = int{};       // const int&
    const auto& const_a_ref1 = i;           // const int&
    const auto& const_a_ref2 = i_ref;       // const int&
    const auto& const_a_ref3 = const_i_ref; // const int&
    const auto& const_a_ref4 = i_ptr;       // const int*&
}
