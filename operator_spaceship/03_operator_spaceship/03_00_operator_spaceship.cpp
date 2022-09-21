// Syntax
// Result is comparable with 0

#include <compare>

int main()
{
    int a1 = 1;
    int a2 = 2;
    auto x = a1 <=> a2;
    return x < 0;
}