#include <iostream>


void foo(char) {
    std::cout << "char" << std::endl;
}

void foo(short) {
    std::cout << "short" << std::endl;
}

void foo(int) {
    std::cout << "int" << std::endl;
}

void bar(double) {
    std::cout << "double" << std::endl;
}

void foobar(float) {
    std::cout << "float" << std::endl;
}

void foobar(double) {
    std::cout << "double" << std::endl;
}

int main() {
    char a = 'a';
    foo(a + 1);

    bar(a);

    int b = 1;
    unsigned int uns_b = b;
    foobar(b + 0.1);

    float f1 = 1.2;
    double d1 = 1.3;
    foobar(f1);
    foobar(f1 + d1);
}
