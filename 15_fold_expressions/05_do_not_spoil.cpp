#include <utility>
#include <type_traits>

struct float16_t {};
struct bfloat16_t {};
struct float32_t {};
//

template<typename T>
auto operator+(T, T) {return T{};}

auto operator+(float16_t, float32_t) {return float32_t{};}
auto operator+(float32_t, float16_t) {return float32_t{};}

auto operator+(bfloat16_t, float32_t) {return float32_t{};}
auto operator+(float32_t, bfloat16_t) {return float32_t{};}

template<typename T>
T hypot(T, T, T) {return T{};}

template<typename T1, typename T2, typename T3>
struct max_rank
{
    using type = decltype(std::declval<T1>() + std::declval<T2>() + std::declval<T3>());
};


template<typename T1, typename T2, typename T3>
auto hypot(T1, T2, T3)
{
    using R = typename max_rank<T1, T2, T3>::type;
    return R{};
}

int main()
{
    float16_t {} + float16_t {}; 

    hypot(float16_t{}, float16_t{}, float16_t{});

    hypot(float32_t{}, float16_t{}, bfloat16_t{});

    hypot(float16_t{}, bfloat16_t{}, float32_t{});
}
