// Unconditional cast

void f(int&) {}
void f(int&&) {}

int main() {
    int a = 1;
    f(std::forward<int>(a));
}
