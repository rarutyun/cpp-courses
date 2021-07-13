// Quiz
// Useless of const rvalue ref

#include <iostream>

void foo(int& ref) { std::cout << "lvalue ref" << std::endl; }
void foo(const int& cRef) { std::cout << "const lvalue ref" << std::endl; }
void foo(int&& ref) { std::cout << "rvalue ref" << std::endl; }
void foo(const int&& cRef) { std::cout << "const rvalue ref" << std::endl; }

int main()
{
    int i = 1;
    const int const_i = i;
    int& lref = i;
    const int& const_lref = const_i;
        foo(i);
        foo(const_i);
        foo(lref);
        foo(const_lref);
    std::cout << std::endl;

    int&& rref = 2;
        foo(3);
        foo(std::move(i));
        foo(std::move(const_i));
        foo(std::move(lref));
        foo(rref);
    std::cout << std::endl;

    int i2 = 3;
        foo(i + i2);
        foo(i += i2);
        foo(++i);
        foo(i++);
    std::cout << std::endl;
}
