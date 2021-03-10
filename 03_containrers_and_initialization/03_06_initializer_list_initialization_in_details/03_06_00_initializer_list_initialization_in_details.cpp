// Describe the MinimalVector<bool> case
// Describe the сase with "empty" braced initialization

#include <iostream>

template <typename T>
struct MinimalVector {
    MinimalVector() = default;
    MinimalVector( std::size_t init_size, const T& t ) {
        std::cout << "Create a vector of " << init_size << " object equal to " << t << std::endl;
    }

    MinimalVector( std::initializer_list<T> init ) {
        std::cout << "Initialize a vector from the std::initializer_list content" << std::endl;
        for (auto& item : init) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
}; // struct MinimalVector

int main() {
    MinimalVector<int> mv(10, 0);
    MinimalVector<int> mvi{10, 0};

    // std::cout << std::boolalpha;
    // MinimalVector<bool> mvb(10, true);
    // MinimalVector<bool> mvbi{10, true};
}
