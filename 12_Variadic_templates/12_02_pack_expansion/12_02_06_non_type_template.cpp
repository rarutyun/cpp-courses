#include <cstddef>

template <typename... Args>
struct Object {

    template <Args... NonTypeTemplate> // template <int NTT1, std::size_t NTT2>
    struct Widget {};

};

int main() {
    Object<int, std::size_t> obj;
}