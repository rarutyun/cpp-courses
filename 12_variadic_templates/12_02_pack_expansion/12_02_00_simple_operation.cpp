#include <iostream>

template <typename... Args>
void g( Args... args ) {}

template <typename... Args>
void f( Args... args ) { // args ~= arg1, arg2, arg3, ...
    g(args()...); // arg1(), arg2(), arg3(), ...
}

int main() {
    f([]{ return 1; }, []{ return 2; }, []{ return 3; });
}
