// What is forwarding reference?
// Still const-safe
// Type-deduction context is required
// Applicable for `auto`

// rvalue or lvalue ref (const-safe)
template <typename T>
void f(T&& t) {
    // t = 123;
}

int main() {
    const int a = 1;
    int b = a;
    f(a);
    f(b);
    f(3);
    f(std::move(a));

    auto&& forwarding_ref1 = b;
}
