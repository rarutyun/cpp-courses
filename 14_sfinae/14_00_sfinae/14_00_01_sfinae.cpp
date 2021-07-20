#include <type_traits>
#include <iostream>

template <typename T>
struct some_struct {
    using type2 = T;
};

template <typename T, typename U = typename T::type>
U foo(T, int)
{
    std::cout << "type" << std::endl;
    return U{};
}

// another overload

int main()
{
    foo(std::true_type{}, 0);
    foo(some_struct<int>{}, 0);
}
