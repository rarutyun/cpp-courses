// new and delete in class are non-member functions
// global vs class scope priority (even for worse match)
// inheritance

#include <iostream>
#include <new>

struct alignas(64) A {
    A(int _a) : a(_a) {}
    ~A() {
        std::cout << "Dest" << std::endl;
    }
    int a;
    void* operator new(std::size_t size)
    {
        std::cout << "ln Called" << std::endl;
        return std::malloc(size);
    }

    void operator delete(void* ptr)
    {
        std::cout << "ld Called" << std::endl;
        std::free(ptr);
    }
};

void* operator new(std::size_t size, std::align_val_t)
{
    std::cout << "gn Called" << std::endl;
    return std::malloc(size);
}

void operator delete(void* ptr, std::align_val_t)
{
    std::cout << "gd Called" << std::endl;
    std::free(ptr);
}

int main()
{
    A* a = new A(3);
    int* i = new int(3);
    std::cout << a->a << std::endl;
    delete i;
    delete a;

    return __STDCPP_DEFAULT_NEW_ALIGNMENT__;
}
