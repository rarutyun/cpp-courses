#include <iostream>

template <typename T>
void func(T arg) { T t; }

template <typename T>
void ref_func(T& arg) { T t; }

int main() {
    int my_int{0};
    int& my_int_ref = my_int;

    std::cout << "my_int block:" << std::endl;
    func(my_int);
    ref_func(my_int);
    std::cout << std::endl;

    std::cout << "my_const_int block:" << std::endl;
    func(my_const_int);
    ref_func(my_const_int);
    std::cout << std::endl;

    std::cout << "my_int_ref block:" << std::endl;
    func(my_int_ref);
    ref_func(my_int_ref);
    std::cout << std::endl;

    std::cout << "my_const_int_ref block:" << std::endl;
    const int my_const_int{0};
    const int& my_const_int_ref = my_const_int;
    func(my_const_int_ref);
    ref_func(my_const_int_ref);
    std::cout << std::endl;

    auto elem = my_const_int;
    auto& elem2 = my_const_int;
}
