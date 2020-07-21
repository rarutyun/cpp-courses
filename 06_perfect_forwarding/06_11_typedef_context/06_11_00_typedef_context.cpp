// Reference collapsing rules also works in `typedef` and `using` contexts

class A{};
typedef A& RefA;

template <typename T>
class Ta {
public:
    typedef T&& RefT;
};

int main() {
    RefA&& a = A();
}
