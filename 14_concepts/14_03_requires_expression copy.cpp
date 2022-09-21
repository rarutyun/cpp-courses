#include <type_traits>
#include <concepts>

template <typename T>
constexpr bool foo() {
    constexpr bool result = requires (const T& t1, const T& t2) {
        typename T::type;
        { t1 + t2 } noexcept -> std::same_as<int>;
        requires std::is_copy_constructible_v<T>;
    };
    return result;
};

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

int main()
{
    return foo<A>();
}