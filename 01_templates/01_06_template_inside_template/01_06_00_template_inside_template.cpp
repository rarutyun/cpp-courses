// What is the argument type of the foo()?
// Independent template parameter

#include <iostream>

template <typename U>
struct A {
    void foo(U&) {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main() {
    A<char> a;
    int z = 3;
    a.foo(z);
}
