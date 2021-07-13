// How to read alignment?
// How to customize alignment?
// Relationship between size and alignment
// Alignment: 16 as max prior C++17, any power of 2 since C++17

#include <iostream>

struct A {
    int a;
};

int main()
{
    std::cout << sizeof(A) << std::endl;
}
