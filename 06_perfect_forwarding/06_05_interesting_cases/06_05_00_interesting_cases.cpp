// Forwarding reference form (T&&)
// Forwarding reference absence cases

#include <vector>

template<typename T>
struct Vector {
    void push_back(T&& rRef) {}

    // method with independent template
    template <typename U>
    void f(U&& u) {}
};

template<typename T>
void f1(const T&& cRef) {}

template <typename T>
void f2(std::vector<T>&& vecRef) {}

int main() {
    std::vector<int> xz;
    f2(xz);

    int i = 1;
    const auto&& ref = i;
}
