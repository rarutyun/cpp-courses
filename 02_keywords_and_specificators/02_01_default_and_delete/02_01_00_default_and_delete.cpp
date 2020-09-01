// "default" and "delete" keywords behavior
// allowed default members
// "delete" declares the function but restricts to use it

// since C++11

template <typename T>
void check_members(T& t) {
    T new_t{};
    new_t = t;
}

template <typename T>
void check_members(const T& t) = delete;

struct my_struct {
    my_struct() = default; // delete
    my_struct& operator=(const my_struct&) = default; // delete
    ~my_struct() = default; // delete
};

int main() {
    my_struct s;
    check_members(s);

    const auto& ref = s;
    // check_members(ref);
}
