// Most vexing parse explanation
// Most vexing parse solution using the braced initialization

#include <iostream>

struct Widget {
    Widget() {}
    Widget( const Widget& ) { std::cout << "Copy ctor\n"; }
    Widget& operator=( const Widget& ) { std::cout << "Copy assignment\n"; }
}; // struct Widget

int main() {
    Widget w; // Default ctor

    Widget w();
}
