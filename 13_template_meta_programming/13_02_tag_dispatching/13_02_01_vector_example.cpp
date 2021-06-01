// Handle throwing move constuctors inside push_back() and reserve() functions
// Mention the solution with constexpr-if statement (since C++17)

#include <iostream>
#include <cstddef>
#include <new>
#include <stdexcept>
#include <algorithm>

namespace my {

template <typename T>
class vector {
    static T* allocate(std::size_t size) {
        return static_cast<T*>(operator new (sizeof(T) * size));
    }

    static void destroy(T* data, std::size_t count) {
        for (std::size_t i = 0; i < count; i++) {
            (data + i)->~T();
        }
        operator delete (data);
    }

    void place_elements(T* data, std::true_type) {
        for(std::size_t i = 0; i < my_size; i++) {
            new (data + i) T(std::move(my_data[i]));
        }
    }
    
    void place_elements(T* data, std::false_type) {
        for(std::size_t i = 0; i < my_size; i++) {
            new (data + i) T(my_data[i]);
        }
    }

public:
    vector() : my_data(nullptr), my_size(0), my_cap(0) {}

    ~vector() { destroy(my_data, my_size); }

    void reserve(std::size_t des_cap) {
        if (my_cap < des_cap) {
            T* tmp = allocate(des_cap);

            // if move constuction throws an exeption some element may be lost.
            place_elements(tmp, std::is_nothrow_move_constructible<T>{});

            destroy(my_data, my_size);
            my_data = tmp;
            my_cap = des_cap;
        }
    }

    void push_back(const T& value) {
        if (my_size == my_cap) {
            reserve(my_cap == 0 ? 1 : my_cap * 2);
        }
        new(my_data + my_size) T(value);
        ++my_size;
    }

    T* my_data;
    std::size_t my_size;
    std::size_t my_cap;
};

} // namespace my

struct my_struct {
    my_struct() = default;
    my_struct(const my_struct&) { std::cout << "my_struct copy ctor" << std::endl; }
    my_struct(my_struct&&)      { std::cout << "my_struct move ctor" << std::endl; }
};

struct my_struct2 {
    my_struct2() = default;
    my_struct2(const my_struct2&)     { std::cout << "my_struct2 copy ctor" << std::endl; }
    my_struct2(my_struct2&&) noexcept { std::cout << "my_struct2 move ctor" << std::endl; }
};

int main() {
    my::vector<my_struct> v;
    v.push_back({});
    v.push_back({});
    v.push_back({});

    std::cout << "------------" << std::endl;
    my::vector<my_struct2> v2;
    v2.push_back({});
    v2.push_back({});
    v2.push_back({});
}
