// Generated move members behavior (in case of inheritance)
#include <iostream>

struct Base {
    Base() = default;
    Base(const Base& rhs)            { std::cout << "Base copy ctor" << std::endl; }
    Base(Base&& rhs)                 { std::cout << "Base move ctor" << std::endl; }
    Base& operator=(const Base& rhs) { std::cout << "Base copy assignment" << std::endl; return *this; }
    Base& operator=(Base&& rhs)      { std::cout << "Base move assignment" << std::endl; return *this; }
};

struct Derived : public Base {
    Derived() = default;
    Derived(const Derived& rhs) : Base(rhs) { std::cout << "Derived copy ctor" << std::endl; }
    Derived(Derived&& rhs) :      Base(rhs) { std::cout << "Derived move ctor" << std::endl; }

    Derived& operator=(const Derived& rhs) {
        Base::operator=(rhs);
        std::cout << "Derived copy assignment" << std::endl;
        return *this;
    }
    Derived& operator=(Derived&& rhs) {
        Base::operator=(rhs);
        std::cout << "Derived move assignment" << std::endl;
        return *this;
    }
};

int main() {
    Derived d1;
    Derived d2 = std::move(d1);
    d1 = std::move(d2);
    return 0;
}
