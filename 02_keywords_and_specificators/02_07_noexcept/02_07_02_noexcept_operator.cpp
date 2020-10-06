// since C++11

#include <iostream>

struct no_throwing { void operator()(int) noexcept {} };
struct throwing    { void operator()(int)          {} };

template<typename Functor>
void for_each(int first, int second, Functor func) noexcept(noexcept(func(first))) {
    for (int i = first; i < second; i++) {
        func(i);
    }
}

int main() {
    throwing thr{};
    no_throwing nthr{};

    std::cout << noexcept(thr(1)) << std::endl;
    std::cout << noexcept(nthr(1)) << std::endl;

    std::cout << noexcept(for_each(0, 1, thr)) << std::endl;
    std::cout << noexcept(for_each(0, 1, nthr)) << std::endl;
}
