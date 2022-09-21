#include <type_traits>

template <typename... Args>
std::enable_if_t<std::conjunction_v<std::is_trivial<Args>...>> foo(Args...) {
    
}

template <typename... Args>
std::enable_if_t<!(... && std::is_trivial_v<Args>)> foo(Args...) {
    
}
