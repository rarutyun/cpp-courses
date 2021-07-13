// Non-allocating placement new flow
// Possible implementation of non-allocating placememnt new

#include <iostream>

struct A {
    A(int _a) : a(_a) {
        std::cout << "Ctor" << std::endl;
    }
    ~A() {
        std::cout << "Dtor" << std::endl;
    }

    int a;
};

int main()
{
    void* a_ptr = operator new(sizeof(A));
    A* a = new (a_ptr) A(3);
    // ...
    a->~A();
    operator delete(a);
}
