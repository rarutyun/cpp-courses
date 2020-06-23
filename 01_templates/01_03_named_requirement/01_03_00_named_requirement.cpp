// Check if swap() works correctly
// Talk about contracts (type matching requirements)
// Implement generic swap

#include <iostream>

struct A {
    A() = default;
    A(const A&) = delete;
    // A& operator=(const A&) = delete;
};

void swap(int t1, int t2) {
    int tmp(t1);
    t1 = t2;
    t2 = tmp;
}

int main() {
    int i1{0};
    int i2{3};
    swap(i1, i2);
    A a1, a2;
    swap(a1, a2);
    int* ptr1 = &i1;
    int* ptr2 = &i2;

    swap(ptr1, ptr2);

    std::cout << i1 << ' ' << i2 << std::endl;
}
