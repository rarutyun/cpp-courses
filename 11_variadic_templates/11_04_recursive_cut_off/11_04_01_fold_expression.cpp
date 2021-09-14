#include <iostream>

template <typename T>
int sum_impl(T obj) {
    return obj;
}

template <typename T, typename... Args>
int sum_impl( T obj, Args... args ) {
    return obj + sum_impl(args...);
}

template <typename... Args>
int sum( Args... args ) {
    return sum_impl(args...);
}

template <typename... Args>
int sum_fold( Args... args ) {
    return (... + args);
}

int main() {
    std::cout << sum(1, 2, 3, 4, 5, 10) << std::endl; // Expect 25
}
