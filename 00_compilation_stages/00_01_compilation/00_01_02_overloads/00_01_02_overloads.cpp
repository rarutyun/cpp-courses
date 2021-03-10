// What are overloads?
// Show how extern "C" works
// Write overload with extern "C"
// Show extern "C++"
// What is mangling?
// Show the symbol table(use nm)

double foo(int first) {}

void foo(char first) {}

void foo(double first) {}

void foo(int first, int second) {}

void foo(int first, float second) {}
