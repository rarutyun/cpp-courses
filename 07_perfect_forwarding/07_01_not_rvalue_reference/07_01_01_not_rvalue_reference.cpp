// Describe that && not always uses in rvalue reference

#include <vector>

struct Some {};

void f1(Some&& rRef) {}

template <typename T>
void f2(T&& tRef) {}

int main() {
    Some s;

    f1(s);
    f1(Some());

    f2(s);
    f2(Some());
}
