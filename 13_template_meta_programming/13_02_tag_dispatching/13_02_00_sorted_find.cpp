// Sorted find optimization for the random access iterators

#include <type_traits>
#include <iterator>
#include <vector>
#include <set>
#include <iostream>

template <typename It>
using val_t = typename std::iterator_traits<It>::value_type;

template <typename It>
It sorted_find_impl(It begin, It, const val_t<It>&, std::random_access_iterator_tag) {
    /*random access overload*/
    std::cout << "binary search" << std::endl;
    return begin;
}

template <typename It>
It sorted_find_impl(It begin, It, const val_t<It>&, std::input_iterator_tag) {
    /*other tags*/
    std::cout << "linear search" << std::endl;
    return begin;
}

template <typename It>
It sorted_find(It begin, It end, const val_t<It>& key) {
    using category = typename std::iterator_traits<It>::iterator_category;
    return sorted_find_impl(begin, end, key, category{});
}

int main() {
    std::vector<int> v{};
    std::set<int> s{};

    sorted_find(v.begin(), v.end(), 1);
    sorted_find(s.begin(), s.end(), 1);
}
