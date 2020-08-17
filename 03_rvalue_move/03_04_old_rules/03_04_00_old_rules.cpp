// Define the old rules

#include <iostream>

struct String {
    String(const char* str)              { std::cout << "char ctor" << std::endl; }
    ~String()                            { std::cout << "dtor" << std::endl; }
    String(const String& rhs)            { std::cout << "copy ctor" << std::endl; }
    String& operator=(const String& rhs) { std::cout << "copy assignment" << std::endl; return *this; }
};

String foo(String str) {
    return str;
}

int main() {
    String a("Foo");
    String b = a;
    b = a;
    foo(a);
    std::cout << "----------" << std::endl;
}
