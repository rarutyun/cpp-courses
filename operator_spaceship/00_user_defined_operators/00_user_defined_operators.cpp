// Definition of the comparison operators

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
};

int main()
{
    return A(4) >= A(4);
}