// Capturing class members in a lambda expression

#include <iostream>

class with_lambda
{
public:
    with_lambda(int val)
        : m_val(val)
    {}

    void method(int z)
    {
        auto x = [&] (int a)
        {
            m_val = a;
        };
        x(z);
    }

    int get_val()
    {
        return m_val;
    }

private:
    int m_val;
};

int main()
{
    with_lambda obj(1);
    std::cout << obj.get_val() << std::endl;
    obj.method(4);
    std::cout << obj.get_val() << std::endl;
}
