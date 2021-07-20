// Describe the revursive cut off for sum
// Show the solution for execute
#include <iostream>

template <typename T>
T sum_impl( T obj ) {
    return obj;
}

template <typename T, typename... Args>
auto sum_impl( T obj, Args... args ) {
    return obj + sum_impl(args...);
}

template <typename... Args>
auto sum( Args... args ) {
    return sum_impl(args...);
}

template <typename... Args>
void execute( Args... args ) {}

int main() {
    std::cout << sum(1, 2, 3, 4, 5, 10) << std::endl; // Expect 25
}
