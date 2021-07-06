// Define the type deduction cases

#include <iostream>
#include <array>
#include <vector>

template <typename T>
void func(T) { std::cout << __PRETTY_FUNCTION__ << std::endl; }

template <typename T>
void func(std::vector<T>) { std::cout << __PRETTY_FUNCTION__ << std::endl; }

template<typename T, std::size_t N>
std::size_t func(T (&arr)[N]) { return N; }

template <template <typename, std::size_t> class Array, typename T, std::size_t N>
std::size_t func(Array<T, N>) { return N; }

int main() {
    func(3);
    func(std::vector<int>{1});

    int arr[3];
    std::cout << func(arr) << std::endl;

    std::cout << func(std::array<int, 2>{6, 5}) << std::endl;
}
