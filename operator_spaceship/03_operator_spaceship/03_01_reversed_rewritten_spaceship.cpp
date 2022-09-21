// rewritten
// reversed

#include <compare>

struct A {
    auto operator<=>(int a2) const {
        return a1 <=> a2;
    }
    int a1;
};

int main()
{
    A a1{1};

    auto x = a1 <=> 3;
    return x < 0;
}