// Implement std::conditional and std::conditional_t

#include <type_traits>
#include <vector>
#include <bitset>

namespace my {

template<bool, typename, typename U>
struct conditional;

} // namespace my

template<typename Type>
using container_wrapper_t = typename my::conditional<std::is_same_v<Type, bool>,
                                                     std::bitset<64>,
                                                     std::vector<Type>>::type;

int main() {
    container_wrapper_t<int> container1; // vector
    container_wrapper_t<bool> container2; // bitset
}
