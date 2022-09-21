#include <type_traits>

template <typename T>
struct A {
    template <typename TT = T>
    std::enable_if_t<std::is_integral_v<TT>> foo()
    {

    }
};

int main()
{
    // foo(int{});
    A<int> a;
    a.foo();
}