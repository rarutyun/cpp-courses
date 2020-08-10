// Capturing class members in a lambda expression

#include <iostream>

class WithLambda
{
public:
    WithLambda(int val)
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

    int getVal()
    {
        return m_val;
    }

private:
    int m_val;
};

int main()
{
    WithLambda with_lambda(1);
    std::cout << with_lambda.getVal() << std::endl;
    with_lambda.method(4);
    std::cout << with_lambda.getVal() << std::endl;
}
