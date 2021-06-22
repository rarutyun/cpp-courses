// Add char and short and move fields in different order
// Explain size and paddings
// Explain alignment
// Possible alignement values
// Explain why size % alignment == 0

#include <iostream>

struct A {
    int a;
    short s;
};

int main()
{
    std::cout << sizeof(A) << std::endl;
}
