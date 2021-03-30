#include <iostream>

char foo(int x) {
    std::cout << "foo" << std::endl;
    return x;
}

int main() {
    char ch = 'a';
    foo(ch);
    int x = ch + 5;
}
