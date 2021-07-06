// Applicable in many contexts (e.g. if statement)

#include <iostream>

struct B {
    explicit operator bool() const {
        return true;
    }
};

int main() {
    B b;
    if (b) {
        std::cout << "Hello World!" << std::endl;
    }
}
