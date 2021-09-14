// Translate lambda to a functor
// Different options:
// - captures
// - mutable
// - global variable

#include <iostream>
#include <vector>

struct empty
{
};

int main() {
    [] () { std::cout << "Hello" << std::endl; };
}
