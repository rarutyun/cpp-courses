#include <iostream>

void foo(void* ptr) {
}

void bar(int* ptr) {
    // bool conversion
    if (ptr) {
        std::cout << "is nullptr" << std::endl;
    }
}

int main() {
    int a = 1;
    int* x = &a;

    foo(x);
    bar(nullptr);
    int* y = nullptr;
    bar(y);
}
