// since C++11

/* cosntexpr functions:
 - can produce operation in compile-time expressions

requirements:
 - non-virtual
 - return type and arguments types must be a Literal types.
 - body must contain only following: (until C++14)
    - static_assert
    - aliases that do not define classes or enumerations
    - using directives
    - one return statement that may be computed in compile-time
 - the function body must not contain: (since C++14)
    - a goto statement
    - a statement with a label other than case and default
    - a try-block
    - an asm declaration
    - a definition of a variable for which no initialization is performed.
    - a definition of a variable of non-literal type
    - a definition of a variable of static or thread storage duration
   (A function body that is =default; or =delete; contains none of the above.)
*/

#include <iostream>

// C++11 constexpr functions may not contain local variables and loops,
// therefore we need use recursion here (fixed in C++14)
constexpr int factorial(int n) {
    return n <= 1 ? 1 : (n * factorial(n - 1));
}

// output function that requires a compile-time constant, for testing
template<int n>
struct constN {
    constN() { std::cout << n << '\n'; }
};

int main() {
    constN<factorial(4)> out1; // computed at compile time
}
