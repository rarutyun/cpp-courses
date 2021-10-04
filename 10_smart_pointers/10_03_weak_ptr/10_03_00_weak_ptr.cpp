// Smart pointer without ownership

#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> sptr(new int(1));

    std::shared_ptr<int> sptr2(sptr);
    std::shared_ptr<int> sptr3(sptr2);

    std::cout << sptr.use_count() << std::endl;

    std::weak_ptr<int> wptr(sptr);

    std::weak_ptr<int> wptr2(sptr);

    std::cout << sptr.use_count() << std::endl;

    std::cout << wptr.use_count() << std::endl;

    std::cout << std::boolalpha << wptr.expired() << std::endl;

    {
        std::shared_ptr<int> ex_wptr(new int(1));
        wptr = ex_wptr;
    }

    std::cout << wptr.expired() << std::endl;
}
