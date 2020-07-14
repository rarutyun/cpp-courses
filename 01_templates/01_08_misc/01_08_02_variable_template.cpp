// Since C++14

#include <iostream>

template<typename T>
inline T n = T(5);

int main() {
    n<int> = 10;
    std::cout << n<int>    << std::endl; // 10
    std::cout << n<double> << std::endl; // 5
}
