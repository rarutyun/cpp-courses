// A friend function may also be defined inside a class.

#include <iostream>

class my_class {
    int field = 0;
    friend void func(const my_class& c) {
        std::cout << c.field << std::endl;
    }
};

int main () {
    func(my_class{}); // friend always outside of the class
}
