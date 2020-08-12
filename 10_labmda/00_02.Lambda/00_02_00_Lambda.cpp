// Show lambda usage

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v{5,3,2,7,3,6,4};

    int sum{};
    std::for_each(v.begin(), v.end(), [&sum](int a) { sum += a; });

    std::cout << sum << std::endl;
}
