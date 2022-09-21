#include <type_traits>
#include <concepts>

template <typename T, typename U>
concept same_as = std::is_integral_v<T>;

template <typename T, typename U>
concept some_stupid_concept = true && requires (const T& t1, const U& u1) {
        typename T::type;
        { t1 + u1 } noexcept -> std::same_as<int>;
        requires std::is_copy_constructible_v<T>;
};

// template <typename T, std::same_as<T> U>
// constexpr bool foo(T t, U u) // requires std::same_as<T, U>
// {
//     return some_stupid_concept<T, U>;
// };

// template <typename T, typename U>
// constexpr bool foo(T t, U u)
// {
//     return false;
// }


bool foo(std::copy_constructible auto param, auto param2)
{
    return true;
}

template <typename T>
concept zzz = true;

template <typename T>
struct Z {};

template <zzz T>
struct Z<T> {};

struct A
{
    friend int operator+(const A&, const A&) noexcept
    {
        return 0;
    }
    // A(const A&) = delete;
    using type = void;
    // friend int operator-(const A&, const A&)
    // {
    //     return 0;
    // }
};

struct B
{
    friend int operator+(const B&, const B&) noexcept
    {
        return 0;
    }
    using type = void;
};

int main()
{
    return foo(B{}, B{});
}