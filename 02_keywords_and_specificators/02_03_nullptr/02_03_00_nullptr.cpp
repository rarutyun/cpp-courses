// Difference between NULL and nullptr (type)

// sicne C++11

#include <iostream>

void func(int) { std::cout << "f(int)" << std::endl; }
void func(char*) { std::cout << "f(char*)" << std::endl; }

int main() {
    char* s = NULL;
    func(s);
    func(NULL);

    s = nullptr;
    func(s);
    func(nullptr);
}
