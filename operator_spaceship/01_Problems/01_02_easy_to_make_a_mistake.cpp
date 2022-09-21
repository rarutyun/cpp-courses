// fix the mistake

template <typename T, typename U>
struct A {
    T t;
    U u;

    friend bool operator==(const A& a1, const A& a2) {
        return a1.t == a2.t && a1.u == a2.u;
    }
    friend bool operator< (const A& a1, const A& a2) {
        return a1.t < a2.t && a1.u < a2.u;
    }
};

int main()
{
    return A{1,2} == A{2,1};
}