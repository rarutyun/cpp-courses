// How to implement execute function
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

// void execute(/*arguments*/);

int main() {
    execute(Callable1{});
    execute(Callable1{}, Callable2{});
    execute(Callable1{}, Callable2{}, Callable3{});
    execute(Callable1{}, Callable2{}, Callable3{}, Callable4{});
}
