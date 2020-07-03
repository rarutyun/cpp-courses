// How does static work?
// Static global and local variables

static void foo(int first) {}

static void bar(int second) {}

static int static_global_a;

static int static_global_b = 2;

int foobar() {
    static int static_local_a = 2;
    return static_local_a++;
}

int main() {
    foobar();
}
