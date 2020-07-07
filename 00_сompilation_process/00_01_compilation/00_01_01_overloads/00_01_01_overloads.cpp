// What is mangling?
// Show the symbol table(use nm)
// Show how extern "C" works
// Write overload with extern "C"
// Show extern "C++"

double foo(int first) {}

void foo(char first) {}

void foo(double first) {}

void foo(int first, int second) {}

void foo(int first, float second) {}
