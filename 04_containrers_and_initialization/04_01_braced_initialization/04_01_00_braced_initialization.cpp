#include <iostream>

struct Widget {
    Widget() {}
    Widget(int) {}
    Widget( const Widget& ) { std::cout << "Copy ctor\n"; }
    Widget& operator=( const Widget& ) { std::cout << "Copy assignment\n"; }
}; // struct Widget

int main() {
    {
        Widget w;

        Widget w0(1);

        Widget w1(w);

        Widget w2 = w;

        w2 = w1;
    }

    // Since C++11
    {
        Widget w{};

        Widget w0{1};

        Widget w1{w};

        Widget w2 = {w};
    }
}