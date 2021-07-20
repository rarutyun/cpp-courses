#include <cstddef>

template <typename... Args>
struct Object {
    template <Args... NonTypeTemplate>
    struct Widget {};
};

int main() {
    Object<int, std::size_t> obj; // Object::Widget<int NTT1, std::size_t NTT2>
}
