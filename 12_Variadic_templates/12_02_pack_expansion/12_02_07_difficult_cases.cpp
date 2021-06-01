// simultaneous expansion
#include <map>
#include <string>

template <typename... BaseArgs>
class base_class {};

template <typename... Args1>
struct object {

    template <typename... Args2>
    struct nested_object : base_class<std::map<Args1, Args2>...> {

        using base_type = base_class<std::map<Args1, Args2>...>;
    };

};

template <typename... Args>
void print();

void type_printer() {
    using object_type = object<int, float, double>;

    using nested_type = typename object_type::nested_object<std::string, int, short>;

    using nested_base_type = typename nested_type::base_type;
}

// nested expansion
template <typename... Args>
int foo(Args... args) {
    // some logic
    return 0;
}

template <typename... Args>
void write( Args&&... ) {}

template <typename... Args>
void bar( Args... args ) {
    write(foo(args)...);

    write(foo(args...));

    write(foo(args...) + args...);
}

int main() {
    bar(1, 2, 3);
}