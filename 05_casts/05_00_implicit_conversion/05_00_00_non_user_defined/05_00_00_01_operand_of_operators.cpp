// Implicit conversion may take place when an expression is used:
// - for an initialization (including a function argument and a return statement)
// - * as operand of operators *
// - in the condition of an if statement, the destination type is bool

int main() {
    char ch = 'a';

    int i = 5 + ch; // implicit conversion
}
