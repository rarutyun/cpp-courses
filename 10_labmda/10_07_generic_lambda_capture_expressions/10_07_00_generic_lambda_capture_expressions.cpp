// Generic lambda
// Capture expressions

#include <iostream>
#include <vector>

class move_only
{
public:
    move_only() = default;
    move_only(move_only&& other) = default;
};

int main() {
    [](auto x){};

    move_only mo;
    [mo](){}(); // how to fix

    int a{};
    int b{};

    // capture sum
    // type of sum

    // return back to example 6
}
