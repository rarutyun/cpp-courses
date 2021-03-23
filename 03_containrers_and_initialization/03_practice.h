#include <cstddef>
#include <initializer_list>

template <typename T>
class vector {
public:
    vector(); // 1
    vector(const vector&); // 5
    vector(std::size_t, const T&); // homework
    vector(std::initializer_list<T>); // 9
    ~vector(); // 8

    vector& operator=(const vector&); // 6
    T& operator[](std::size_t); // assert(size)
    const T& operator[](std::size_t) const; // homework

    void clear(); // 7
    void push_back(const T&); // 2
    void pop_back(); // homework
    void resize(std::size_t); // 4
    void reserve(std::size_t); // homework
    std::size_t size() const; // 3
};