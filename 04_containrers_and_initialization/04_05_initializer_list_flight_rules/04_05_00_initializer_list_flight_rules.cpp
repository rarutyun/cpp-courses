#include <iostream>
#include <vector>

// std::vector(size_type size, const T& value);

int main() {
    std::vector<int> v1(10, 0);

    for (auto& item : v1) {
        std::cout << item << std::endl;
    }

    // std::vector<int> v2{10, 0};

    // for (auto& item : v1) {
    //     std::cout << item << std::endl;
    // }
}