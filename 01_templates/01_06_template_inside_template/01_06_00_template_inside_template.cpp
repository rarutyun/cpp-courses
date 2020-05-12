#include <iostream>

template <typename U>
struct A {
    template <typename T>
    void foo(T& t) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main() {
    A<char> a;
    const int z = 3;
    a.foo(z);
}
