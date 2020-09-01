#include <type_traits>
#include <vector>
#include <bitset>
#include <random>

namespace my {

template<bool, typename, typename U>
struct conditional {
    using type = U;
};

template<typename T, typename U>
struct conditional<true, T, U> {
    using type = T;
};

} // namespace my

template<typename Type>
using container_wrapper = my::conditional<std::is_same_v<Type, bool>,
                                          std::vector<Type>,
                                          std::bitset<64>>;

template<typename T>
using engine = typename my::conditional<sizeof(T) <= 4,
                               std::mt19937,
                               std::mt19937_64>::type;

int main() {
    container_wrapper<int>::type container1; // vector
    container_wrapper<bool>::type container2; // bitset
}
