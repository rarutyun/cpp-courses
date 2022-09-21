// Ordering conversion and auto
// Equality comparison


#include <compare>

struct A
{
    int a1;
    int a2;
    int a3;

    std::strong_ordering operator<=>(const A& other) const = default;
};