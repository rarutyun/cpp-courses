template <typename T>
class whatever
{
    std::enable_if_t<std::is_move_constructible<T>::value> foo()
    {

    }
};
