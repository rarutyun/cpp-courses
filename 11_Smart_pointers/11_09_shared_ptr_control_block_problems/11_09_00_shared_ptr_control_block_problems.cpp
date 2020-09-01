// Wrong way of shared_ptr creation

#include <memory>

int main() {
    int* item = new int(1);

    std::shared_ptr<int> sptr(item);

    std::shared_ptr<int> sptr2(item);
}
