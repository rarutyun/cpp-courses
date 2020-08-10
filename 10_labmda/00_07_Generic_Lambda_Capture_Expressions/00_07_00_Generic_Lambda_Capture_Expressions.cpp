// Generic lambda
// Capture expressions

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

    // capture sum
    // type of sum

    // return back to example 6
}
