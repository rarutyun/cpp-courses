// Show substitution failure

#include <type_traits>

template <typename T, typename U = typename T::type>
U foo(T)
{
    return U{};
}

int main()
{
    foo(std::true_type{});
}
