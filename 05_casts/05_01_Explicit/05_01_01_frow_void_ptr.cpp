#include <iostream>

template <typename T>
void my_array_deleter(void* ptr) {
    delete[] static_cast<T>(ptr);
}


int main() {
    int* x = new int[100];

    my_array_deleter<int*>(x);
}
