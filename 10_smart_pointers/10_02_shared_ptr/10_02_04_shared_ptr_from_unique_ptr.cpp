// Impossible to return back from shared_ptr to unique_ptr

#include <memory>

int main() {
    std::unique_ptr<int> uptr(new int(1));

    std::shared_ptr<int> sptr(std::move(uptr));

    // Previous expression is a "Point Of No Return"
    std::unique_ptr<int> uptr2(sptr); // Fail
}
