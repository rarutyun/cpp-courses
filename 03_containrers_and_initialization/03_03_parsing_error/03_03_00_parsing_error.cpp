// Example with parentheses
// How braced initialization helps

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
