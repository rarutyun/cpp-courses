#include <iostream>

struct base {
    void foo() {
        std::cout << "base foo" << std::endl;
    }
};

struct direved : base {
    void foo() {
        std::cout << "direved foo" << std::endl;
    }

    void bar() {
        std::cout << "direved bar" << std::endl;
    }
};

int main() {
    base* base_ptr = new base();

    base_ptr->foo();
    delete base_ptr;

    base_ptr = new direved();
    base_ptr->foo();

    direved* direved_ptr = new direved();

    direved_ptr->foo();
    direved_ptr->bar();

    static_cast<base*>(direved_ptr)->foo();

    static_cast<direved*>(base_ptr)->foo();
    static_cast<direved*>(base_ptr)->bar();
    delete base_ptr;
    base_ptr = new base();

    static_cast<direved*>(base_ptr)->bar();
}
