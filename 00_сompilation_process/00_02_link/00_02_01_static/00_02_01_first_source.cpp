// Resolve link error than show trap of static.

#include "00_02_01_header.h"

int bar();

int main() {
    int number = my_static_func();

    bar();

    return 0;
}
