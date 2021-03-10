// What is callable?
// How were algorithms used in c ++ before?
// Show function

#include <iostream>
#include <algorithm>
#include <vector>

struct callable
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

    std::for_each(v.begin(), v.end(), callable{});
}
