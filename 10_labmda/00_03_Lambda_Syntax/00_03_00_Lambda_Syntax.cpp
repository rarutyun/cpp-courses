// Tell from which blocks lambdas are built without going into details.

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
    |  |  optional: mutable, trailing return, ...
    |  |
    |  parameter list
    |
    capture list/lambda declarator
    */

}
