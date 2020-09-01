// No way to use custom deleter

#include <memory>

void f1() {
    auto deleter = [](int* ptr) { /*...*/delete ptr; };

    std::unique_ptr<int> uptr(new int(1), deleter);

    auto uptr2 = std::make_unique<int>(1); // OK
    auto uptr3 = std::make_unique<int>(1, deleter); // Fail
}
