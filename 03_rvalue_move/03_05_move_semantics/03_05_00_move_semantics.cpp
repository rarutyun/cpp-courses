// What does it mean by move object?
// What and when called?

#include <iostream>
#include <cstring>
using namespace std;

struct String {
    String(const char* data);
    String(const String& other);
    String& operator=(const String& other);
    ~String() noexcept;
    String(String&& rhs) noexcept;
    String& operator=(String&& rhs) noexcept;
private:
    int m_len;
    char* m_data;
};

String::String(const char* data) : m_len(strlen(data)), m_data(nullptr) {
    std::cout << "char ctor" << std::endl;
    m_data = new char[m_len + 1];
    memcpy(m_data, data, m_len + 1);
}

String::String(const String& other) : m_len(other.m_len), m_data(nullptr) {
    std::cout << "copy ctor" << std::endl;
    m_data = new char[m_len + 1];
    memcpy(m_data, other.m_data, m_len + 1);
}

String& String::operator=(const String& other) {
    std::cout << "copy assignment" << std::endl;
    if (&other != this) {
        delete m_data;
        m_len = other.m_len;
        m_data = new char[m_len + 1];
        memcpy(m_data, other.m_data, m_len + 1);
    }
    return *this;
}

String::~String() noexcept {
    delete m_data;
}

String::String(String&& other) noexcept {}

String& String::operator=(String&& other) noexcept {
    std::cout << "move assignment" << std::endl;
}

String foo(){ return String("aaa"); }

int main() {
    String str("hello");
    String str2 = str;
    str = str2;
    String str3("le");
    str3 = std::move(str2);
    str3 = String("zzz");
    String str4(String("a"));
    String str5(foo());
    String&& rref(std::move(str5));
    String str6(rref);
}
