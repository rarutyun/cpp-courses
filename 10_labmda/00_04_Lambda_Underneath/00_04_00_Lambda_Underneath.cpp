// Be a compiler and write what a compiler-generated closure would look like.
// Write different
// - captures
// - mutable
// - global variable

#include <iostream>
#include <vector>

struct A
{
};

int main() {
    [] () { std::cout << "Hello"; };

    return 0;
}
