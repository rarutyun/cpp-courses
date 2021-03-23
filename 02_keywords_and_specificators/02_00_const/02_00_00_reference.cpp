// reference is an alias after initialization

#include <iostream>

int main () {
    int a = 1;
    int* a_ptr = nullptr;
    int& a_ref = a;

    a_ptr = &a;

    std::cout << "a = " << a << " a_ptr = " << *a_ptr  << " a_ref = " << a_ref << std::endl;
    // std::cout << "&a = " << &a << " &a_ptr = " << &a_ptr  << " &a_ref = " << &a_ref << std::endl;

    // int b = 2;
    // a_ptr = &b;
    // a_ref = b;

    // std::cout << "b = " << b << " a_ptr = " << *a_ptr  << " a_ref = " << a_ref << std::endl;
    // std::cout << "&b = " << &b << " &a_ptr = " << &a_ptr  << " &a_ref = " << &a_ref << std::endl;
    // std::cout << "a = " << a << std::endl;
}
