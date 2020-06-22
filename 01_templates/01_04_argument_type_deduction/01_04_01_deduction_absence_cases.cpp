// Define the cases in which type deduction is not present (mention C++17 CTAD)

#include <cstdlib>

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
    my_struct s{1};
    my_struct<int> s{1};

    no_auto_deduction(3);
    no_auto_deduction<char>(3);
}
