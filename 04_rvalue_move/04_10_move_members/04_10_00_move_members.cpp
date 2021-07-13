// Compiler generated copy semantics

#include <iostream>

struct A {
    A() = default;
    A(A&&)                     { std::cout << "A move ctor" << std::endl; }
    A& operator=(A&&)          { std::cout << "A move assignment" << std::endl; return *this; }
};

int main()
{
    A a;
    A a1(a);
}
