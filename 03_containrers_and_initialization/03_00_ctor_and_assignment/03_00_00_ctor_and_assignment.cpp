// Define what is initialization
// What would be printed?

#include <iostream>

struct Widget {
    Widget() = default;
    Widget( const Widget& ) { std::cout << "Copy ctor\n"; }
    Widget& operator=( const Widget& ) { std::cout << "Copy assignment\n"; }
}; // struct Widget

int main() {
    Widget w;

    Widget w1(w);

    Widget w2 = w;

    w1 = w2;
}
