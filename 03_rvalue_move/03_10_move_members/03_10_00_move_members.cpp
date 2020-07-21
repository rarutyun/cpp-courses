// Compiler generated copy semantics

#include <iostream>

struct A {
    A()                        { std::cout << "A default ctor" << std::endl; }
    A(A&&)                     { std::cout << "A move ctor" << std::endl; }
    A& operator=(A&&)          { std::cout << "A move assignment" << std::endl; return *this; }
};

int main()
{
    A a;
    A a1(a);
}
