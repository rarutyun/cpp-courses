// Init
// &&, ||, ,

template <typename... Args>
auto sum(Args... args)
{
    return (... + args);
}

int main()
{
    sum();
}