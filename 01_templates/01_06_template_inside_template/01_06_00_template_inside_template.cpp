// Can foo() be called with such argument type?
// Will adding an independent template help?

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
