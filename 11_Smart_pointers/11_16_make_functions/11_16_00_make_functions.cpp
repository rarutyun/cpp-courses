#include <memory>
#include <iostream>

int main() {
    auto uptr = std::make_unique<int>(1);
    std::cout << *uptr << std::endl;

    auto shptr = std::make_shared<int>(10);

    std::cout << *shptr << std::endl;
    std::cout << shptr.use_count() << std::endl;
}
