#include <vector>

template <typename Callable>
void call( const Callable& c ) { c(); }

template <typename... Args>
void foo( Args... args ) {
    call([args...]() { /*...*/ });
}

int main() {
    foo(1, 2, 3, std::vector<int>{1, 2, 3, 4, 5});
}