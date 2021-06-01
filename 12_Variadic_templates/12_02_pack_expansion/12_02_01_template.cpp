// print types
template <typename T>
struct print;

template <typename... Args>
struct Object {};

template <typename... Args>
struct ObjectTypes {

    using type1 = Object<Args...>;
    using type2 = Object<int, Args...>;
    using type3 = Object<Args..., int>;
    using type4 = Object<int, Args..., int>;

};

int main() {
    using types = ObjectTypes<int, float>;
    // print<typename types::type1> p;
    // print<typename types::type2> p;
    // print<typename types::type3> p;
    // print<typename types::type4> p;
}