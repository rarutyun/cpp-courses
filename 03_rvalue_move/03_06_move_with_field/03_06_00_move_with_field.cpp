// Generated move members behavior
#include <iostream>

struct A {
    A() = default;
    A(const A& rhs)            { std::cout << "A copy ctor" << std::endl; }
    A(A&& rhs)                 { std::cout << "A move ctor" << std::endl; }
    A& operator=(const A& rhs) { std::cout << "A copy assignment" << std::endl; return *this; }
    A& operator=(A&& rhs)      { std::cout << "A move assignment" << std::endl; return *this; }
};

struct B {
    B() = default;
    B(B&& rhs) : m_a(rhs.m_a) {}
    B& operator=(B&& rhs) {
        m_a = rhs.m_a;
        return *this;
    }

    A m_a;
};

int main() {
    B b;
    B b2 = std::move(b);
    b2 = std::move(b);
    return 0;
}
