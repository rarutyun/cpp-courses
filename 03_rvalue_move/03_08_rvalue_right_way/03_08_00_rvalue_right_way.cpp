// Show RVO

#include <iostream>

struct A {
    A(int value)    : m_value(value)         { }
    A(const A& rhs) : m_value(rhs.m_value)   { std::cout << "copy ctor. value: " << m_value << std::endl; }
    A(A&& other)    : m_value(other.m_value) { std::cout << "move ctor. value: " << m_value << std::endl; }

    int m_value;
};

A&& getA1() {
    return A(6);
}

A&& getA2() {
    A a(7);
    return std::move(a);
}

A getA3() {
    A a(8);
    return std::move(a);
}

A getA4() {
    A a(9);
    return a;
}

int main() {
    // A a1(getA1());
    // A a2(getA2());
    A a3(getA3());
    A a4(getA4());
}
