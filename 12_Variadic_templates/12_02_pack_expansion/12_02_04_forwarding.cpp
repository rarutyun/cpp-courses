template <typename... Args>
void foo( Args&&... args ) {
    // ...
}

template <typename... Args> // Args ~= Arg1, Arg2
void bar( Args&&... args ) { // args ~= arg1, arg2
    foo(std::forward<Args>(args)...); // std::forward<Arg1>(arg1), std::forward<Arg2>(arg2), ...
}

int main() {
    int object;
    bar(object, 1);
}