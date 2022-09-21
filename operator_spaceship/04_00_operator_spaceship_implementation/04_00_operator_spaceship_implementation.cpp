// Implement operator spaceship

#include <compare>

struct A
{
    int a1;
    int a2;
    int a3;
    bool operator<(const A& other) const
    {
        if (a1 < other.a1) return true;
        if (a1 > other.a1) return false;
        if (a2 < other.a2) return true;
        if (a2 > other.a2) return false;
        return a3 < other.a3;
    }

    std::strong_ordering operator<=>(const A& other) const {
    }
};

int main()
{
    return A{1,2,3} < A{2,3,4};
}