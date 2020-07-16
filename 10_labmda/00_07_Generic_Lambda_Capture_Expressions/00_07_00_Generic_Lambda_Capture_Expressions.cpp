// What's new in the new standards?
// Explain what MoveOnly objects are.

#include <iostream>
#include <vector>

class MoveOnly
{
public:
    MoveOnly() = default;
    MoveOnly(MoveOnly&& other) = default;
};

int main() {
    [](auto x){};

    MoveOnly mo;
    [mo](){}(); // how to fix

    int a{};
    int b{};

    [a + b](){}();

    // example with sum
    // type of sum

    // return back to example 6
}
