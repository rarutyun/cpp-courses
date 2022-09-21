// Too many operators
// No relationship

class A
{
public:
    explicit A(int val) : m_value(val) {}

private:
    int m_value;

    friend bool operator==(const A& a1, const A& a2)
    {
        return a1.m_value == a2.m_value;
    }

    friend bool operator!=(const A& a1, const A& a2)
    {
        return a1.m_value != a2.m_value;
    }

    friend bool operator<(const A& a1, const A& a2)
    {
        return a1.m_value < a2.m_value;
    }

    friend bool operator>(const A& a1, const A& a2)
    {
        return a1.m_value > a2.m_value;
    }

    friend bool operator<=(const A& a1, const A& a2)
    {
        return a1.m_value <= a2.m_value;
    }

    friend bool operator>=(const A& a1, const A& a2)
    {
        return a1.m_value >= a2.m_value;
    }

    // with int
    friend bool operator==(const A& a1, int a2) {
        return a1.m_value == a2;
    }

    friend bool operator!=(const A& a1, int a2)
    {
        return a1.m_value != a2;
    }

    friend bool operator<(const A& a1, int a2)
    {
        return a1.m_value < a2;
    }

    friend bool operator>(const A& a1, int a2)
    {
        return a1.m_value > a2;
    }

    friend bool operator<=(const A& a1, int a2)
    {
        return a1.m_value <= a2;
    }

    friend bool operator>=(const A& a1, int a2)
    {
        return a1.m_value >= a2;
    }

    // with int reversed
    friend bool operator==(int a1, const A& a2)
    {
        return a1 == a2.m_value;
    }

    friend bool operator!=(int a1, const A& a2)
    {
        return a1 != a2.m_value;
    }

    friend bool operator<(int a1, const A& a2)
    {
        return a1 < a2.m_value;
    }

    friend bool operator>(int a1, const A& a2)
    {
        return a1 > a2.m_value;
    }

    friend bool operator<=(int a1, const A& a2)
    {
        return a1 <= a2.m_value;
    }

    friend bool operator>=(int a1, const A& a2)
    {
        return a1 >= a2.m_value;
    }
};

int main()
{
    return 4 == A(4);
}