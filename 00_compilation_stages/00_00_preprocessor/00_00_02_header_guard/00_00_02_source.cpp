// Why is there a mistake without guards?
// Use header guards
// What is translation unit?
// Preprocessor works inside each translation unit
// Header is not translation unit

#include "00_00_02_header_A.h"
#include "00_00_02_header_B.h"

int main() {
    int A_number = A_func();
    int B_number = B_func();

    return 0;
}
