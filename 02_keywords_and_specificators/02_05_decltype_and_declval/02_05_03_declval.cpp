// declval keyword use-cases

#include <utility>

struct my_struct {
    int func() const { return 1; }
};

struct no_constructible {
    no_constructible() = delete;
    int func() const { return 1; }
};

int main() {
    decltype(my_struct().func()) s1;                         // int
//  decltype(no_constructible().func()) s2;                  // compile-time error
    decltype(std::declval<no_constructible>().func()) s3;    // int
}
