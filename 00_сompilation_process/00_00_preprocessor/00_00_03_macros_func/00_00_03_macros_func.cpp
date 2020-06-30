// "Macro function" after preprocessing(use -E)
// Difference between macro and function
// - address
// - call
// - static type checking
// - expression evaluation

#include <iostream>
#include <exception>

#define my_assert(conditional, message)            \
    if (!conditional) {                            \
        std::cout << message << std::endl;         \
        std::terminate();                          \
    }

int my_func_assert(bool conditional, const char* message) {
    if (!conditional) {
        std::cout << message << std::endl;
        std::terminate();
    }
}

int main() {
    int n;
    std::cin >> n;
    my_assert(n > 0, "Invalid number");
    my_assert(n < 1000, "To large number");
    my_func_assert(n == 0, "Value not zero");

    return 0;
}
