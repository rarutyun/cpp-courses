// Difference between expression vs operator
// Explicit call to operator
// - returns void*

struct A {
    int a;
    short s;
};

int main()
{
    A* a1 = new A();
    A* a2 = operator new(sizeof(A));
    delete a1;
}
