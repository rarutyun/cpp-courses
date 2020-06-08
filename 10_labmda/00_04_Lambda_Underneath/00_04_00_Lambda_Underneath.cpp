#include <iostream>
#include <vector>

struct A
{
};

int main() {
    [] () { std::cout << "Hello"; };
    // different captures, mutable, global variable
    return 0;
}
