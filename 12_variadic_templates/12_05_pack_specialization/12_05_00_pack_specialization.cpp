template <typename... Args>
struct Object {};

template <typename T, typename... Args>
struct Object<T, Args...> : Object<Args...> // Object <float, double>, Object<double>, Object<>
{};

Object<int, float, double> obj;
