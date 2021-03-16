// noexcept is not a part of the type until C++17.
// Cannot overload function with noexcept.

// since C++11

void func(); // may throw an exception
void func1() noexcept; // overload that won`t throw an exception
void func2() noexcept(true); // the same as function on the line 4

void func3() noexcept(false); // marks explicitly that this function may throw an exception
// void func3() noexcept(true); // compile-time error. redefinition

template<class T> T func4() noexcept(sizeof(T) < 4); // strange but valid

void throw_inside_noexcept() noexcept {
    throw 1; // std::terminate called, even is you will try to catch it
}

// non-throwing members
struct SomeClass {
    SomeClass() = default;
    ~SomeClass() {
        throw 1;
    }
};
