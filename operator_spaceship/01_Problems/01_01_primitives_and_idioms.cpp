// == and != relationship
// a1 < a2 and a2 > a1 relationship
// a1 <= a2 and !(a2 < a1) relationship
// Fix operator<=

template <typename T>
class A
{
public:
    explicit A(T val) : m_value(val) {}

private:
    T m_value;

    friend bool operator==(const A& a1, const A& a2)
    {
        return a1.m_value == a2.m_value;
    }

    friend bool operator!=(const A& a1, const A& a2)
    {
        return !(a1 == a2);
    }

    friend bool operator<(const A& a1, const A& a2)
    {
        return a1.m_value < a2.m_value;
    }

    friend bool operator>(const A& a1, const A& a2)
    {
        return a2 < a1;
    }

    friend bool operator<=(const A& a1, const A& a2)
    {
        return !(a2 < a1);
    }

    friend bool operator>=(const A& a1, const A& a2)
    {
        return !(a1 < a2);
    }
};

// a1 < a2 == a2 > a1
// a1 <= a2 == !(a2 < a1) is true only if one of a1 < a2, a1 == a2, a1 > a2 is true

#include <cmath>

int main()
{
    return A(3) < A(4);
}