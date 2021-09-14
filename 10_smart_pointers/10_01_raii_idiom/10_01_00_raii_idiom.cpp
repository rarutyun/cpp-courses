// Discribe RAII(Resource Acquisition Is Initialization) idiom

template <typename T>
class raii_pointer {
    raii_pointer( T* arg ) : my_ptr(ptr) {}

    ~raii_pointer() { delete my_ptr; }

    T* operator*() const { return *my_ptr; }

private:
    T* my_ptr;
};

// Typically smart pointers are never passed by reference
template <typename T>
void foo( const raii_pointer<T>& ptr ) {
    //...
    throw 1;
}

void solution() {
    raii_pointer<int> ptr(new int(1));
    foo(ptr);
}
