#include <iostream>

template <typename T>
void print(T t)
{
    std::cout << t << std::endl;
}

template <typename T, typename... Args>
void print(T t, Args... args)
{
    std::cout << t << std::endl;
    print(args...);
}

int sum()
{
    return 0;
}

template <typename T, typename... Args>
auto sum(T t, Args... args)
{
    return t + sum(args...);
}
