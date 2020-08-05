// since C++11
#include <iostream>

struct throwable_func {
    static void perform(int input) {
        std::cout << input << std::endl;

        if (input > 5) throw 42;
    }
};

struct noexcept_func {
    static void perform(int input) noexcept {
        std::cout << input << std::endl;
    }
};

template<typename Functor>
void for_each(int first, int second) noexcept(noexcept(Functor::perform(1))) {
    for (int i = first; i < second; i++) {
        Functor::perfrom(i);
    }
}

void throwing();
void no_throwing() noexcept(true);

int main() {
    std::cout << noexcept(throwing()) << std::endl; // do not remove parentheses
    std::cout << noexcept(no_throwing()) << std::endl;

    std::cout <<  noexcept(for_each<throwable_func>(0,0)) << std::endl;
    std::cout <<  noexcept(for_each<noexcept_func>(0,0))  << std::endl;
}
