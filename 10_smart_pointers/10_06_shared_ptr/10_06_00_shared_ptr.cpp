// Smart pointer with shared ownership

#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> sptr(new int(1));

    std::cout << sptr.use_count() << std::endl;

    std::shared_ptr<int> sptr2 = sptr;
    std::shared_ptr<int> sptr3 = sptr2;

    std::cout << sptr.use_count() << std::endl;

    std::shared_ptr<int> sptr4 = std::move(sptr2);

    std::cout << sptr.use_count() << std::endl;
}
