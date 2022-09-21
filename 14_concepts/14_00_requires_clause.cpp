#include <type_traits>

template <typename T>
void foo(T t) requires std::is_integral_v<T> {

}

struct A {};

int main()
{
    foo(int{});
}