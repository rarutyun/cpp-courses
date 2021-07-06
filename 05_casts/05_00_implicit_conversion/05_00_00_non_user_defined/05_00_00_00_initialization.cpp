// Implicit conversion may take place when an expression is used:
// - * for an initialization (including a function argument and a return statement) *
// - as operand of operators
// - in the condition of an if statement, the destination type is bool

void foo(int i) {}

int bar() {
    char ch = 'a';
    return ch; // implicit conversion
}

int main() {
    char ch = 'a';
    int i = ch; // implicit conversion

    foo(ch); // implicit conversion

    int b = bar();
}
