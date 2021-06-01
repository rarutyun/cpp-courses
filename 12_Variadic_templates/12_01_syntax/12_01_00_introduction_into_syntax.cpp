// Show how variadic templates can be interpreted
#include <iostream>

template <typename... Args>
void f0( Args... args ) {}

template <typename... Args>
class c0 {};

struct Object {};

int main() {

    f0(1, 2., Object{});

    // template <typename T1, typename T2, typename T3>
    // void f0( T1 arg1, T2 arg2, T3 arg3 );

    // void f0<int, float, A>(1, 2f, A{});

    f0();

    // void f0<>();

    c0<int, float, double> obj;

    // template <typename T1, typename T2, typename T3>
    // class c0;
}
