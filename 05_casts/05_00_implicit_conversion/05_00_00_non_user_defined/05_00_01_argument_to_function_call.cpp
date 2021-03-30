#include <iostream>

void foo(int x) {
    std::cout << "foo" << std::endl;
}

int main() {
    char ch = 'a';
    foo(ch);
}
