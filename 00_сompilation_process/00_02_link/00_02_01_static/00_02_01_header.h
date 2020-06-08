#ifndef MY_HEADER
#define MY_HEADER
#include <iostream>

static int my_static_func() {
    void* fp = reinterpret_cast<void*>(&my_static_func);
    std::cout << fp << std::endl;
    return 0;
}

#endif // MY_HEADER
