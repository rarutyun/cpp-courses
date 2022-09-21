// Unary left fold
// Unary right fold

// Binary left fold
// Binary right fold

template <typename... Args>
auto sum(Args... args)
{
    return (... + args); // exp1 + exp2 + exp3 + exp4
    // return (args + ...); // exp1 + exp2 + exp3 + exp4
    // return (0 + ... + args); // exp1 + exp2 + exp3 + exp4
    // return (args + ... + 0); // exp1 + exp2 + exp3 + exp4
}