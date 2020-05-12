#include <stdlib.h>

template <typename T>
struct my_struct {
    my_struct(T) {}
};

template<typename T, typename Arg>
void no_auto_deduction(Arg a) {
    T t(a);

    // ...
}

int main() {
    // my_struct s{1}; // wouldn`t compile (until C++17)
    // my_struct<int> s{1};

    // no_auto_deduction(3); // wouldn`t compile (always)
    no_auto_deduction<char>(3);
}
