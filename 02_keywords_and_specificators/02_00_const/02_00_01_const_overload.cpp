// member function overloads with const
// methods without const qualifier cannot be called for a constant object

#include <iostream>

struct my_struct {
    void foo() {}

    void print() {
        foo();
        std::cout << "non-const print" << std::endl;
    }

    void print() const {
        // foo();
        std::cout << "const print" << std::endl;
    }
};

int main () {
    my_struct s1;
    s1.print();

    const my_struct& s_ref = s1;
    s_ref.print();

    const my_struct s2;
    // s2.foo();
}
