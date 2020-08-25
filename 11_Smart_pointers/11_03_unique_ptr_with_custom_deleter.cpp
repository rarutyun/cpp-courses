// Deleter is a part of the type
// Type of lambda

#include <iostream>
#include <vector>
#include <cstdio>

struct custom_deleter {
    template <typename T>
    void operator()(T* ptr) const {
        std::cout << "Call of custom deleter\n";
        delete ptr;
    }
};

int main() {
    // Example with callable
    std::unique_ptr<int, custom_deleter> uptr1( new int(1) );

    // Example with lambda expression
    auto deleter = [](int* ptr) {
        std::cout << "Call of custom lambda deleter\n";
        delete ptr;
    };

    std::unique_ptr<int, /*what should be here*/> uptr2(new int(2), deleter);

    auto file_close = [](FILE* file) { std::fclose(file); }

    std::unique_ptr<FILE, /*what should be here*/> f_uptr(std::fopen("file.txt", "r"), file_close);

}
