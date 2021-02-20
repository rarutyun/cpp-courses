// How does extern work for variables ?
// Definition and declaration
// Show the symbol table(use nm)

extern int global_a;

int main() {
    int local_a = global_a;
    return 0;
}
