#include <iostream>

struct A {};

struct B {

    /*explicit*/ B( const A& ) {
        std::cout << "conversion from A" << std::endl;
    }

    B& operator=( const A& ) {
        std::cout << "conversion from A (assignment)" << std::endl;
        return *this;
    }

    /*explicit*/ operator A() {
        std::cout << "conversion to A (type-cast operator)" << std::endl;
        return A();
    }
};

void foo(B) {
    std::cout << "foo" << std::endl;
}

int main () {
    A a;
    B b = a;
    b = a;
    a = b;
    
    foo(a); // allow conversion
}
