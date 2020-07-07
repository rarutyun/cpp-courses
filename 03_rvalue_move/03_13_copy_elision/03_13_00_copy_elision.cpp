#include <iostream>

struct A {
    A(int v) : value(v) {}
    A(A&& other) = delete;/* : value(other.value) {
        std::cout << "move ctor. value: " << value << std::endl;
    }*/

    int value;
};

A foo() {
    return A(2);
}

//A bar() {
//    A a{8};
//    return a;
//}

int main() {
    A a1 = A(3);
    A a2 = foo();
//    A a3 = bar();
}
