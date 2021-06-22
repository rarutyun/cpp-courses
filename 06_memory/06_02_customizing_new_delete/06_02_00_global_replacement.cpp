// operator new and operator new[] are both globally replacable
// operator delete and operator delete[] are both globally replacable
// operator new is guaranteed to be called from operator new[] and operator new(std::nothrow_t)

#include <iostream>

struct A {
    A(int _a) : a(_a) {}
    ~A() {
        std::cout << "Dest" << std::endl;
    }
    int a;
};

void* operator new(std::size_t size)
{
    std::cout << "n Called" << std::endl;
    return std::malloc(size);
}

void operator delete(void* ptr)
{
    std::cout << "d Called" << std::endl;
    std::free(ptr);
}

int main()
{
    A* a = new A(3); // operator new(sizeof(A), alignof(A))
    std::cout << a->a << std::endl;
    delete a;

    A* a1 = static_cast<A*>(operator new(sizeof(A)));
    operator delete(a1);
    return __STDCPP_DEFAULT_NEW_ALIGNMENT__;
}