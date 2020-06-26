// How to resolve link error with inline.
// Show specific of inline.

#include "00_02_02_header.h"

int bar();

int main() {
    int number = my_static_func();

    bar();

    return 0;
}
