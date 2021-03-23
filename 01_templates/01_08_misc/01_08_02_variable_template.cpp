// Since C++14
// What is the problem if the variable is defined in the header file?

#include <iostream>

template<typename T>
T n = T(5);

int main() {
    n<int> = 10;
    std::cout << n<int>    << std::endl; // 10
    std::cout << n<double> << std::endl; // 5
}
