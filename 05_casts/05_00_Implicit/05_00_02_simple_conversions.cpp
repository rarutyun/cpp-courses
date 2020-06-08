#include <iostream>

struct base {
    void foo() {
        std::cout << "fooo" << std::endl;
    }
    virtual ~base() = default;
};

struct derived : base {};

int main() {
    base* base_ptr = new base();
    base_ptr->foo();
    delete base_ptr;

    base_ptr = new derived();
    base_ptr->foo();
    delete base_ptr;

    // derived* dir_ptr = new base();
}
