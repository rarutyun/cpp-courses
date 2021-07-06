// static_cast works without any checks

#include <iostream>

struct base {
    virtual ~base() = default;

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
    direved* direved_ptr = new direved();
    direved_ptr->foo();
    static_cast<base*>(direved_ptr)->foo();
    delete direved_ptr;

    base* base_ptr = new base();
    static_cast<direved*>(base_ptr)->bar();
    delete base_ptr;
}
