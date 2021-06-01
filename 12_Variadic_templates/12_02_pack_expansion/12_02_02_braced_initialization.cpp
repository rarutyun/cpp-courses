// Show nerrow conversion
#include <vector>
#include <iostream>

template <typename... Args>
void foo( Args... args ) {
    std::vector<int> v1{args...};
    std::cout << v1.size() << std::endl;

    std::vector<int> v2{1, 2, args...};
    std::cout << v2.size() << std::endl;

    std::vector<int> v3{1, args..., 2, 3};
    std::cout << v3.size() << std::endl;
}

int main() {
    foo(1, 2, 3);

    // foo(1., 2., 3.);
}