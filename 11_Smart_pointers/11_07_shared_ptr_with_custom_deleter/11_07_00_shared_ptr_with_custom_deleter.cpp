// Deleter is not a part of the type

#include <memory>

int main() {
    auto deleter = [](int* ptr) { delete ptr; };

    std::shared_ptr<int> sptr(new int(1), deleter);
}
