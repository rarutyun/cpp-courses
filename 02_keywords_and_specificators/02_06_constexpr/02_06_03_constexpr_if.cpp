// since C++17
#include <type_traits>
#include <iostream>

template <typename T>
auto get_value(T t) {
    if constexpr (std::is_null_pointer<T>::value)
        return -1;
    else
        return *t;
}

int main() {
    int i = 1;
    int* i_ptr = &i;

    std::cout << get_value(i_ptr) << std::endl;
    std::cout << get_value(nullptr) << std::endl;
}