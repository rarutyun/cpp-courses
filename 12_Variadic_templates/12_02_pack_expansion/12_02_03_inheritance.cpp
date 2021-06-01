#include <vector>

template <typename... Bases>
struct Derived : Bases... {};

struct Object {};

struct Widget {};

int main() {
    Derived<std::vector<int>, Object, Widget> obj;

    // Equivalent to
    // Derived : std::vector<int>, Object, Widget
}