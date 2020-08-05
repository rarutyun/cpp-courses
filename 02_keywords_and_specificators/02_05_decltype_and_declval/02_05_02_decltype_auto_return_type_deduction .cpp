// differencies between decltype and auto return types deduction

// since C++14

// decltype(auto) void_func0() {} // compile-time error

int x = 1;
decltype(auto) func0() { return  x; }  // returns int
decltype(auto) func1() { return (x); } // returns int&

template<class T, class U>
auto add(T t, U u) -> decltype(auto) { return t + u; } // returns the type of operator+(T, U)
