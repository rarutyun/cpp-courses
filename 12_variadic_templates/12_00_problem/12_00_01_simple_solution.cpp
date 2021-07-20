// Show execute implementation with several overloads
#include <iostream>

template <std::size_t N>
struct Callable {
    void operator()() const {
        std::cout << "Number is " << N << std::endl;
    }
};

// Different callable implementations
struct Callable1 : Callable<1> {};
struct Callable2 : Callable<2> {};
struct Callable3 : Callable<3> {};
struct Callable4 : Callable<4> {};

template <typename T>
void execute( T obj ) {
    obj();
}

template <typename T1, typename T2>
void execute( T1 obj1, T2 obj2 ) {
    execute(obj1);
    obj2();
}

template <typename T1, typename T2, typename T3>
void execute( T1 obj1, T2 obj2, T3 obj3 ) {
    execute(obj1, obj2);
    obj3();
}

template <typename T1, typename T2, typename T3, typename T4>
void execute( T1 obj1, T2 obj2, T3 obj3, T4 obj4 ) {
    execute(obj1, obj2, obj3);
    obj4();
}

int main() {
    execute(Callable1{});
    execute(Callable1{}, Callable2{});
    execute(Callable1{}, Callable2{}, Callable3{});
    execute(Callable1{}, Callable2{}, Callable3{}, Callable4{});
}
