#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct Accumulator
{
public:
    void operator()(int value)
    {
        sum += value;
    }
private:
    int sum = 0;
};

int main() {
    std::vector<int> v{5,3,2,7,3,6,4};
    std::for_each(v.begin(), v.end(), Accumulator());

    return 0;
}
