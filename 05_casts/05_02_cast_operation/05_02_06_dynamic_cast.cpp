// Safe downcast from parent to child
// For work it is necessary that the parent has a virtual method


#include <iostream>

struct base {
    virtual void print() { std::cout << "Base" << std::endl; }
};

struct d1 : public base { /* */ };

struct d2 : public base {
    void foo() { std::cout << "foo2" << std::endl; }
};


int main() {
    base* ptr = new d1();
    d2* d2_ptr = dynamic_cast<d2*>(ptr);
    if (d2_ptr) d2_ptr->foo();
}
