// Describe the example
// What is std::forward?

#include <iostream>

template <typename T>
struct Vector {
    void push_back(const T&) {
        std::cout << "lvalue" << std::endl;
    }
    void push_back(T&&) {
        std::cout << "rvalue" << std::endl;
    }
};

template <typename Container, typename T>
void push_back(Container& container, T&& value) {
    container.push_back(value); // is it right?
}

int main() {
    Vector<int> vec;

    int a = 3;
    push_back(vec, a);
    push_back(vec, 3);
}
