// Is this sample compiles correctly?
// What should we do if we want to pass any convertible type to some tempalte instance object?

#include <iostream>

template <typename U>
struct A {
    void foo(U&) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main() {
    A<char> a;
    const int z = 3;
    a.foo(z);
}
