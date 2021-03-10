#include <iostream>

struct A {
    A& operator=(A&&) {
        std::cout << "move assignment" << std::endl;
        return *this;
    }
};

int main() {
    A a1;
    A a2;
    A a3;
    a1 = a2 = a3;
}
