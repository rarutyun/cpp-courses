template <typename... Args>
struct Object {};

template <typename T, typename... Args>
struct Object<T, Args...> : Object<Args...> {};