#include <array>

template <size_t Size = 10> 
using integral_array = std::array<int, Size>;


struct integral_vector {
    using iterator = std::size_t*;
    iterator begin;
    iterator end;
};

int main() {
    integral_array<> my_arr1;
    integral_array<15> my_arr2;

    integral_vector::iterator it;
}
