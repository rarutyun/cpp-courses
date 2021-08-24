// weak_ptr::operator*() absence

#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> sptr(new int(1));

    std::cout << sptr.use_count() << std::endl;
    std::cout << "Value is " << *sptr << std::endl;

    std::weak_ptr<int> wptr(sptr);

    // std::cout << "Value of weak is " << *wptr << std::endl;

    std::shared_ptr<int> wsptr = wptr.lock();

    std::cout << sptr.use_count() << std::endl;
    std::cout << "Value is " << *wsptr << std::endl;
}
