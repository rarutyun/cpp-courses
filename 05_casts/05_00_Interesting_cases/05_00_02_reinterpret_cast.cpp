// Show that with reinterpret_cast you need to understand what you are doing,
// the last case is possible.

#include <iostream>

struct foo {
    void my_foo() {
        std::cout << "foo" << std::endl;
    }
};

struct bar {
    void my_bar() {
        std::cout << "bar" << std::endl;
    }
};

int main() {
    foo* foo_ptr = new foo();

    reinterpret_cast<bar*>(foo_ptr)->my_bar();
    delete foo_ptr;

    foo* dummy_foo = reinterpret_cast<foo*>(1);
    dummy_foo->my_foo();
}
