// Overload of operator new with alignment
// When is overload with alignment automatically called?
// Manually allocate with alignment

#include <iostream>
#include <new>

struct alignas(32) A {
    int a;
    short s;
};

void* operator new(std::size_t)
{
    std::cout << "operator new" << std::endl;
    return nullptr;
}

void* operator new(std::size_t, std::align_val_t)
{
    std::cout << "operator new with alignment" << std::endl;
    return nullptr;
}

int main()
{
    A* a1 = static_cast<A*>(operator new(sizeof(A)));
    A* a2 = static_cast<A*>(operator new(sizeof(A), std::align_val_t(alignof(A))));
    operator delete(a1);
    operator delete(a2, std::align_val_t(alignof(A)));

    return __STDCPP_DEFAULT_NEW_ALIGNMENT__;
}
