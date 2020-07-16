// Show what not to do with const.

#include <iostream>

const int x = 3;

int main() {
    // const int x = 3;
    std::cout << "first = " <<  x << std::endl;
    const_cast<int&>(x) = 5;
    std::cout << "second = " <<  x << std::endl;
}
