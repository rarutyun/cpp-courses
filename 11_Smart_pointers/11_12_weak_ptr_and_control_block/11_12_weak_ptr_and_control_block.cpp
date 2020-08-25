// weak_ptr underneath

struct control_block {
    std::size_t ref_counter;
    std::size_t weak_counter;
    // May contain other data
};

template <typename T>
struct pseudo_shared_ptr {
    // Methods

    T* my_ptr;
    control_block* my_control_block;
};

template <typename T>
struct pseudo_weak_ptr {
    control_block* my_control_block;
};

int main() {
    pseudo_shared_ptr<int> shptr(new int(1)); // Allocates control block

    pseudo_shared_ptr<int> shptr2(shptr); // Uses the control block from shptr

    pseudo_weak_ptr<int> wptr(shptr);

    // Destructor of shptr2 decrements ref count
    // Destructor of shptr deallocates only the memory of pointer
    //     wptr is expired now, but the control block still exists
    // Destructor of wptr deallocates the control block
}
