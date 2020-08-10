// Lambda + unique
// Remove zeros only + count zeros

#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    std::vector<int> v{1,2,0,0,5,0,0,0,3,3,0};

    auto it = std::unique(v.begin(), v.end());

    v.erase(it, v.end());

    for (auto& e : v)
    {
        std::cout << e << ' ';
    }


    // std::cout << std::endl << "Count: " << count << std::endl;
}
