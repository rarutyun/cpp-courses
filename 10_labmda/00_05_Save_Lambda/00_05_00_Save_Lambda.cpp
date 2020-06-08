#include <iostream>
#include <functional>

using pointer = void(*)(int);

int main() {
    auto x = [](int){};
    // show same lambda

    x(3);
    pointer p = [](int){}; // only stateless

    auto cx = x; // copy ctor

    std::function<void(int)> f(x); // create lambda container
    return 0;
}
