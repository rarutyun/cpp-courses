// Preprocessor behavior:
// * Removes comments
// * Replaces #define macros with their values
// * Removes the code under `false` condition for #if, #ifdef and #ifndef
// * Includes header files content
//
// Command example to run preprocessor only:
// g++ -E 00_00_00_simple.cpp -o 00_00_00_simple.ii
//
// * -E runs preprocessor for a given file without compilation
// * -o sets the name of the resulting file

// What is removed after preprocessing?
// What does remain after preprocessing?

#define MY_SIZE 10
#define ONE 1
int main() {
    for (int i = 0; i < MY_SIZE; ++i) {
#if defined(ONE)
// Hello
        char my_char = 'A';
#else
        char my_char = 'B';
#endif
    }
    return 0;
}
