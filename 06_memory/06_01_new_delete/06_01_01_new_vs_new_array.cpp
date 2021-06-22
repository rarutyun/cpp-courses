// Difference between new and new[]
// Speculate what might go wrong with incorrect new/delete pair

struct alignas(64) A {
    int a;
    short s;
};

int main()
{
    A* a = new A[3];
    delete[] a;
}
