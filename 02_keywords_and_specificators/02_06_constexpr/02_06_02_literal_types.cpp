// since C++11
#include <cstddef>
#include <iostream>

/* Literal type is a scalar type, or pointer type or type that fulfills following requirements :
    - have a trivial destructor
    - may be initialized via obj{params} or have a constexpr constructor (except copy constructor)
    - all non-static data members and base classes are of non-volatile types that may be constexpr.
   (Array of literal type is still literal type)
*/

// custom class that may be constexpr
template<typename T, std::size_t Size>
class constexpr_array {
    T my_data[Size];
public:
    constexpr constexpr_array(T init_value) : my_data() {
        for (std::size_t i = 0; i < Size; i++)
            my_data[i] = init_value;
    }

    constexpr T operator[](std::size_t n) const {
        return my_data[n];
    }
    constexpr std::size_t size() const { return Size; }
};

//TODO: change to print function
template <typename Type, std::size_t Size>
constexpr std::size_t sum(const constexpr_array<Type, Size>& a) {
    std::size_t sum{0};
    for (std::size_t i = 0; i < a.size(); i++)
        sum += a[i];
    return sum;
}

// output function that requires a compile-time costant, for testing
template<int n>
struct constN {
    constN() { std::cout << n << '\n'; }
};

constexpr constexpr_array<int, 10> arr(3);

int main() {
    constN<sum(arr)> out;
}