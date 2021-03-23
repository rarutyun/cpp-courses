// auto non-type template parameters (since C++17)
template<auto n> struct my_struct { /* ... */ };
my_struct<5> s0;
// my_struct<int> s0; // compile-time error

// abbreviated function template (since C++20)
void f1(auto); // same as template<class T> void f(T)
