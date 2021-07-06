// nothrow
// customization + customization priority
// Why placement delete?
// user-defined args

#include <iostream>

struct alignas(64) A {
    A(int _a) : a(_a) {
    }
    ~A() {
        std::cout << "Dest" << std::endl;
    }

    void* operator new(std::size_t size)
    {
        std::cout << "local new Called" << std::endl;
        return std::malloc(size);
    }

    void operator delete(void* ptr)
    {
        std::cout << "local delete Called" << std::endl;
        std::free(ptr);
    }

    int a;
};

void* operator new(std::size_t size, std::align_val_t, const std::nothrow_t&) noexcept
{
    std::cout << "global new Called" << std::endl;
    return std::malloc(size);
}

void operator delete(void* ptr, std::align_val_t, const std::nothrow_t&) noexcept
{
    std::cout << "global delete Called" << std::endl;
    std::free(ptr);
}

int main()
{
    A* a = new (std::nothrow) A(3);
    // operator new(sizeof(A), alignof(A), std::nothrow);
    int* i = new (std::nothrow) int(3);
    std::cout << a->a << std::endl;
    delete i;
    delete a;
    // a->~A();
    // operator delete(...);

    return __STDCPP_DEFAULT_NEW_ALIGNMENT__;
}
