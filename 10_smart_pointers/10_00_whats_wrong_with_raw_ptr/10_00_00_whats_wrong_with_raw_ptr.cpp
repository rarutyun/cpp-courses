// Problems with raw pointers:
// - Memory leaks
// - Ownership

template <typename T>
void bar(T* ptr) { /*...*/ }

// Own or not own
void problem1() {
    int* ptr = new int(5);
    bar(ptr);
}

template <typename T>
void foo_bar(T* ptr) {
    // ...
    throw 1;
}

// Exceptions
void problem2() {
    int* ptr = new int(10);
    foo_bar(ptr);
    delete ptr;
}
