// We can solve this problem in C++11 (add overloads for r- and l- value references)
// What if we also want to call constant overload of the operator()?
// What if we want to pass 2,3,4... Callable objects to the callT() function?
// The exponential explosion of the overloads count!

#include <iostream>

struct Callable {
    void operator()() { std::cout << "Something" << std::endl; }
};

void callT(Callable&& callable) {
    callable();
}

int main() {
    callT(Callable());
}
