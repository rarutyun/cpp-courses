#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, float, double> t1(1, 2., 3.);

    // struct Tuple {
    //     int __1;
    //     float __2;
    //     double __3;
    // }

    std::tuple<int> t2(1);

    std::cout << std::get<0>(t2) << std::endl;
}