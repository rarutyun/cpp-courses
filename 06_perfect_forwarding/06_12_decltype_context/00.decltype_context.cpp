// Reference collapsing rules work in the `decltype` context

int main() {
    int a = 2;
    int& refA = a;
    int&& rRef = 3;
    decltype(refA)&& dt = 4;
}
