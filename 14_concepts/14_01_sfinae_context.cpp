#include <type_traits>

template <typename T>
std::enable_if_t<std::is_integral_v<T>> foo(T t) {

}


template <typename T>
std::enable_if_t<!std::is_integral_v<T>> foo(T t) {

}

template <typename T>
struct A {};

int main()
{
    foo(int{});
    A<int> a;
}