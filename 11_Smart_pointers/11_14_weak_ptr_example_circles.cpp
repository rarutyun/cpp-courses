// Circular dependency

#include <memory>

class Person {
public:
    Person get_partner() const { return *partner; }
private:
    std::shared_ptr<Person> partner;
};

void make_partnership( std::shared_ptr<Person>& person1, std::shared_ptr<Person>& person2 ) {
    person1->partner = person2;
    person2->partner = person1;
}

int main() {
    std::shared_ptr<Person> person1(new Person());
    std::shared_ptr<Person> person2(new Person());

    make_partnership(person1, person2);
}