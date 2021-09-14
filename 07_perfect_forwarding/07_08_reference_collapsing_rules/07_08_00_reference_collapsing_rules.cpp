// Describe the reference collapsing rules
// Pass different arguments to the function and how it will be instantiated

#include <iostream>

//T& &
//T& &&
//T&& &
//T&& && -> rValue

template<typename T>
void f(T&& t) {
    T&& a = 3;
    std::cout << a << std::endl;
}

int main() {
    int a = 2;

    // int& a_ref = a;
    // int& & a_ref_ref = a_ref; // reference to reference is forbidden

    f(a);
}
