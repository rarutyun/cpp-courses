// since C++11

auto func() -> int; // <-> int func()

template <typename T>
auto func() -> T; // <-> T func()

// The common use case.
template <typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {
    return t + u;
}
