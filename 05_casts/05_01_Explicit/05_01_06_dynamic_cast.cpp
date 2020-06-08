#include <iostream>

struct base {
    virtual void foo() {
        std::cout << "base foo" << std::endl;
    }

    virtual ~base() = default;
};

struct direved1 : base {
    void foo() override {
        std::cout << "direved1 foo" << std::endl;
    }

    void dir1_func() {
        std::cout << "dir1_func" << std::endl;
    }

};

struct direved2 : base {
    void foo() override {
        std::cout << "direved2 foo" << std::endl;
    }

    void dir2_func() {
        std::cout << "dir2_func" << std::endl;
    }
};

int main() {
    base* base_ptr = new direved1();

    std::cout << dynamic_cast<direved2*>(base_ptr) << std::endl;

    auto ptr = dynamic_cast<direved1*>(base_ptr);
    if (ptr) {
        ptr->dir1_func();
    }
    
    delete base_ptr;
}
