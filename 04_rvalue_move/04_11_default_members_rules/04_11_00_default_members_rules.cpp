// Show the difference between deleted and not defined move CTOR.

#include <utility>

struct A {
    A() = default;
    A(const A&) = default;
    A(A&&) = delete;
};

int main() {
    A a1;
    A a2 = std::move(a1);
}
