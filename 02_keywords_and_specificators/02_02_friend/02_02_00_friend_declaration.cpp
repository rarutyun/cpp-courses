// common use cases for friends (such as operators)
// friend definition inside the class
// friend always is not a member of the class

#include <iostream>

class my_class {
    int field = 0;
    friend void my_function(const my_class&);
    template<typename T> friend struct my_struct;
};

void my_function(const my_class& c) {
    std::cout << c.field << std::endl;
}

template <typename T>
struct my_struct {
    my_struct(const my_class& c) : field(c.field) {}
private:
    int field;
};

int main () {
    my_function(my_class{});

    my_struct<int> s(my_class{});
}
