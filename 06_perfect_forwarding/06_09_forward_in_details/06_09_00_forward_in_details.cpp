// Template argument is required for the std::forward() function (describe why)
// Pass different arguments to the foo() function and describe instantiation and deduction

#include <utility>

struct A {};

template<typename T>
T&& forward(T& t) noexcept {
    return static_cast<T&&>(t);
}

template <typename T>
T&& foo(T&& t) {
    return forward<T>(t);
}

int main() {
    int a{};
    auto&& fRef = foo(a);
}
