// How to call non-constant operator() from temporary object in C++03

#include <iostream>

template <typename T>
void callT(T& callable) {
    callable();
}

struct Callable {
    void operator()() { std::cout << "Something" << std::endl; }
};

int main() {
    callT(Callable());
}
