#include <iostream>
#include <string>

void print(int i) {
   std::cout << "int:" << i << std::endl;
}

void print(const char* c) {
   std::cout << "char*:" << c << std::endl;
}

void print(std::string s) {
   std::cout << "string:" << s << std::endl;
}

// template <typename T>
// void print(T t) {
//     std::cout << "T:" << t << std::endl;
// }

int main() {
   print(1);
   print("std");
   print(std::string{"std"});
   return 0;
}
