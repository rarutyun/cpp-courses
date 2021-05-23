// Implicit conversion may take place when an expression is used:
// - * for an initialization (which includes use as an argument in a function call and the expression in a return statement) *
// - as operand of operators
// - in the condition of an if statement, the destination type is bool
// - in the expression of a switch statement, the destination type is integral

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
