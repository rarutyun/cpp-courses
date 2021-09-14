// How to use stateful functor?
// Ways
// - functor on stack (sum in public or getter) + std::ref
// - variable on the stack + reference to it in the class

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct accumulator
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
    std::for_each(v.begin(), v.end(), accumulator());
}
