#include <iostream>
#include <limits>

int main() {
    int a = std::numeric_limits<int>::max();
    long long b = 1;

    long long sum = a + b;
    std::cout << sum << std::endl;
}
