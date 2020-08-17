// Lambda syntax (capture list, parameter list, return type)

#include <iostream>

int main() {
    int x = 3;
    int y = 2;
    [=](int a, int b) -> int {
        return x + a + y;
    }(3, 4);

    /*
    [] () { code; }
    ^  ^  ^
    |  |  |
    |  |  mutable, trailing return, ...
    |  |
    |  parameter list
    |
    capture list/lambda declarator
    */

}
