#include <iostream>

template <typename T = char>
void print_size() {
    std::cout << "size is: " << sizeof(T) << std::endl;
}

int main() {
    print_size();
    print_size<>();
    print_size<int>();
    print_size<long long>();
}
