#include <iostream>
#include <algorithm>
#include <vector>

struct Callable
{
    void operator()(int i)
    {
        std::cout << i << ' ';
    }
};

void foo(int i)
{
    std::cout << i << ' ';
}

int main() {
    std::vector<int> v{1,6,2,7,4,5};

    std::for_each(v.begin(), v.end(), Callable{});
}
