// since C++14

#include <cstddef>
#include <iostream>

// Custom class that may be constexpr
template<typename T, std::size_t Size>
class constexpr_array {
    T my_data[Size];
public:
    constexpr constexpr_array(T init_value) : my_data() {
        for (std::size_t i = 0; i < Size; i++)
            my_data[i] = init_value;
    }

    constexpr const T& operator[](std::size_t n) const {
        return my_data[n];
    }
    constexpr std::size_t size() const { return Size; }
};

template <typename Type, std::size_t Size>
constexpr std::size_t sum(const constexpr_array<Type, Size>& a) {
    std::size_t sum{0};
    for (std::size_t i = 0; i < a.size(); i++)
        sum += a[i];
    return sum;
}

// Output function that requires a compile-time constant, for testing
template<int n>
struct constN {
    constN() { std::cout << n << '\n'; }
};

constexpr constexpr_array<int, 10> arr(3);

int main() {
    constN<sum(arr)> out;
}
