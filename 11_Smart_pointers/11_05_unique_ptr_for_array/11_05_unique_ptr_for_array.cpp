// Array specialization
// Has operator[]
// Does not have operator *, ->

#include <memory>
#include <iostream>

int main() {

    std::unique_ptr<int[]> uptr(new int[2]);

    uptr[0] = 1;
    uptr[1] = 2;

    std::cout << uptr[1] << std::endl;
}
