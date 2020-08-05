// Describe the behaviour with MinimalVector<bool>
// Case with "empty" braced initialization

#include <iostream>

template <typename T>
struct MinimalVector {
    using size_type = std::size_t;

    MinimalVector() {}
    MinimalVector( size_type init_size, const T& t) {
        std::cout << "Create a vector of " << init_size << " object equal to " << t << std::endl;
    }
    MinimalVector( const MinimalVector& ) { std::cout << "Copy ctor\n"; }

    // MinimalVector( std::initializer_list<T> init ) {
    //     std::cout << "Initialize a vector from the std::initializer_list content\n";
    //     for (auto& item : init) {
    //             std::cout << item << " ";
    //         }
    //         std::cout << std::endl;
    // }

    MinimalVector& operator=( const MinimalVector& ) { std::cout << "Copy assignment\n"; }
}; // struct Widget

int main() {
    MinimalVector<int> mv(10, 0);

    MinimalVector<int> mvi{10, 0};

    // std::cout << std::boolalpha;
    // MinimalVector<bool> mvb(10, true);

    // MinimalVector<bool> mvbi{10, true};
}
