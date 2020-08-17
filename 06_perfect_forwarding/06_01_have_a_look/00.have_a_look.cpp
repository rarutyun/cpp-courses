// Describe that && not always uses in rvalue reference (prove with f3)

#include <vector>

struct Some {};

Some&& r_ref = Some();

auto&& auto_ref2 = r_ref; // not rvalue ref

void f1(Some&& rRef) {}

template <typename T>
void f2(std::vector<int>&& vec) {}

template <typename T>
void f3(T&& tRef) {} // not rvalue ref

int main() {
    Some s;

    f1(s);
    f1(Some());

    f3(s);
    f3(Some());
}
