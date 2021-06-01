
template <typename... Args> // template parameter pack declaration
void f1( Args... args ) { // function parameter pack declaration
    f0(args...); // parameter pack expansion
}