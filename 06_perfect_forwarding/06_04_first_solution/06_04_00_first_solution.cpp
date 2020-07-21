// Solve the described previously problem with forwarding reference

#include <iostream>

struct Callable {
    void operator()() { std::cout << "Something" << std::endl; }
};

template <typename T>
void callT(T&& callable) {
    callable();
}

int main() {
    Callable c;
    // const Callable cc;
    callT(Callable());
    callT(c);
    // callT(cc);
}
