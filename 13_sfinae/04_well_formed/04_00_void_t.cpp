// SFINAE for typename T::type
// void_t implemenation

#include <type_traits>
#include <iostream>

template <typename T, typename = void>
struct B
{

};

template <typename T>
class B<T, std::enable_if_t<std::is_move_constructible<T>::value>>
{

};

int main()
{
    B<int> b{};
}
