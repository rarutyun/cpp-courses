// const_cast is needed for removing const from the object
// const_cast is not supposed to be used to add cv-qualifiers

#include <iostream>

void bar(int& x) {
    std::cout << "bar" << std::endl;
}

void foo(const int& x) {
    bar(x);
    // bar(const_cast<int&>(x));
}

int main() {
    int x = 2;
    foo(x);
}
