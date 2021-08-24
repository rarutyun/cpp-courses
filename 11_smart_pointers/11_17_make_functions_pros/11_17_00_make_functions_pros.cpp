// Type duplication
// Potential memory leaks
// Optimizations for make_shared

#include <memory>

void f1() {
    auto uptr1 = std::make_unique<int>(1);

    std::unique_ptr<int> uptr2(new int(1));
}

void process( std::shared_ptr<int> ptr, int priority ) {/*...*/}

int compute_priority() {
    // ...
    throw 1;
}

void f2() {
    process( std::shared_ptr<int>(new int(1)), compute_priority() );

    process( std::make_shared<int>(1), compute_priority() );
}
