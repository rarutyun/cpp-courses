struct iterator_base
{
    int a;
};

struct iterator : public iterator_base {
    bool operator==(const iterator_base& other) const
    {
        return a == other.a;
    }

    bool operator!=(const iterator_base& other) const
    {
        return !(*this == other);
    }
};

int main()
{
    iterator i1{0};
    iterator i2{0};
    return i1 != i2;
}