// Show another way to resolve link error.

#include "00_02_02_header.h"

int bar();

int main() {
    int number = my_static_func();

    bar();

    return 0;
}
