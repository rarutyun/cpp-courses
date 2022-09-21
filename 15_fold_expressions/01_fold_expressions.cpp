#include <iostream>

template <typename... Args>
void print(Args... args)
{
    (..., (std::cout << args << std::endl));
}

template <typename... Args>
auto sum(Args... args)
{
    return (... + args);
}