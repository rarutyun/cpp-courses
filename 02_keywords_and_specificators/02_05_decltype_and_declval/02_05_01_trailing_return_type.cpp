// since C++11
auto func() -> int; // <-> int func()

template <typename T>
auto func() -> T; // <-> T func()

template <typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {
    return t + u;
}
