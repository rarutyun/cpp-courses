#include <iostream>

// void foo(int*&) {}; // what is this ?

template <typename T>
void pointer_func(T* arg) { }

template <typename T>
void func(T) { }

template <typename T>
void ref_func(T&) { }


int main() {
    int my_int{0};
    int* my_int_ptr = &my_int;

    pointer_func(my_int_ptr);

    // func(my_int_ptr);
    // ref_func(my_int_ptr);
}
