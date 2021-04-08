// Full specialization of a class template
// Full member function specialization of a class template

#include <iostream>

template <typename T>
struct Z {
    Z(T arg) : t(arg) {}
    void print() {
        std::cout << t << std::endl;
    }
    ~Z() {}
private:
    T t;
};

template <>
Z<short>::~Z() {
    std::cout << "dest spec" << std::endl;
}

template <>
struct Z<int> {
    Z(int arg) : b(arg) {}
    void print() {
        std::cout << a << ' ' << b << std::endl;
    }
private:
    int a = 3;
    int b;
};

int main() {
    Z<char> z1('c');
    z1.print();

    Z<int> z2(5);
    z2.print();

    Z<short> z3(4);
    z3.print();
}
