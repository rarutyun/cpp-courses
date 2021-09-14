// useful instrument
// is_pointer

#include <type_traits>
#include <iostream>

template <typename T, typename U = void>
T foo(T, int)
{
    std::cout << "pointer" << std::endl;
    return T{};
}

template <typename T, typename U = void>
T foo(T, long)
{
    std::cout << "non-pointer" << std::endl;
    return T{};
}

int main()
{
    foo(std::true_type{}, 0);
}
