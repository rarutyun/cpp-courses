#include <iostream>


void foo(int) {
    std::cout << "int" << std::endl;
}

void bar(double) {
    std::cout << "double" << std::endl;
}


struct A {};

struct B {
    B( const A& ) {
        std::cout << "conversion from A" << std::endl;
    }
};

int main() {
    char ch = 'a';
    foo(static_cast<int>(ch) + 1);

    bar(static_cast<double>(ch));

    A a;
    B b = static_cast<B>(a);

}
