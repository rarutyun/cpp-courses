#include <iostream>

struct Widget {
    Widget() {}
    Widget( const Widget& ) { std::cout << "Copy ctor\n"; }
    Widget& operator=( const Widget& ) { std::cout << "Copy assignment\n"; }
}; // struct Widget

int main() {
    Widget w;

    Widget w1(w);

    Widget w2 = w;

    w1 = w2;
}