// reinterpret_cast convert any type of pointer to any other
// Apply this conversion when there is no non-user defined conversion and neither user defined

#include <iostream>

int main() {
    int value = 20341;
    char* char_array = reinterpret_cast<char*>(&value);
    for (std::size_t i = 0; i < sizeof(int) / sizeof(char); ++i) {
        std::cout << char_array[i] << " ";
    }
}
