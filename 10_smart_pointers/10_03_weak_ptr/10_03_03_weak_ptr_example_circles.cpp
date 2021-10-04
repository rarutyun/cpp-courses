// Circular dependency

#include <memory>

class person {
public:
    std::shared_ptr<person> get_partner() const { return partner; }
private:
    std::shared_ptr<person> partner;
};

void make_partnership( std::shared_ptr<person>& person1, std::shared_ptr<person>& person2 ) {
    person1->get_partner() = person2;
    person2->get_partner() = person1;
}

int main() {
    std::shared_ptr<person> person1(new person());
    std::shared_ptr<person> person2(new person());

    make_partnership(person1, person2);
}
