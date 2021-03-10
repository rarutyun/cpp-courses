// Smart pointer with unique ownership

#include <memory>
#include <cassert>

int main() {
    std::unique_ptr<int> uptr1(new int(1));

    int val = *uptr1;

    std::unique_ptr<int> uptr2 = uptr1; // Fail

    std::unique_ptr<int> uptr3 = std::move(uptr1); // OK

    assert(uptr3);
    assert(uptr1);

    uptr3.reset(new int(2)); // Object 1 is destroyed, uptr3 points to object 2

    // When ~uptr3 is called - object 2 is destroyed
}
