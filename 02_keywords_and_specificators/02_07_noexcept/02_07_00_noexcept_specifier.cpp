// since C++11

void func(); // may throw an exception
void func1() noexcept; // overload that won`t throw an exception (helps compiler to optimize the code)
void func2() noexcept(true); // the same as function on the line 4

void func3() noexcept(false); // marked explicitly that this function may throw an exception
// void func3() noexcept(true); // compile-time error

template<class T> T func4() noexcept(sizeof(T) < 4); // strange but valid

void throw_inside_noexcept() noexcept {
    throw 1; // std::terminate called, even is you will try to catch it
}

/* Any function in C++ is either non-throwing or potentially throwing
Non-throwing are:
 - Destructors, defaulted and implicitly declared members
    (except the case when some functions that will called during these operations is potentially throwing)
 - Deallocation functions
 - Any other function that marked as noexcept or noexcept(true)
Potentially throwing is:
 - Other functions
*/
