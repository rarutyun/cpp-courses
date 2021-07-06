// Compiler attempts the following casts, in this order:
// - const_cast
// - static_cast
// - const_cast + static_cast
// - reinterpret_cast
// - const_cast + reinterpret_cast

int main() {
    char ch = 'a';
    int y = (int)ch; // C-style cast
}
