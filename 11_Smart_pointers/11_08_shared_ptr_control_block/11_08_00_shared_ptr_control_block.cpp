// shared_ptr underneath

struct control_block {
    std::size_t ref_counter{};
    // May contain other data
};

template <typename T>
struct pseudo_shared_ptr {
    // Methods
    pseudo_shared_ptr(T* ptr) : my_ptr(ptr), my_control_block(new control_block()) {
        ++my_control_block->ref_counter;
    }

    T* my_ptr;
    control_block* my_control_block;
};

int main() {
    pseudo_shared_ptr<int> shptr(new int(1)); // Allocates control block

    pseudo_shared_ptr<int> shptr2(shptr); // Uses the control block from shptr

    // Destructor of shptr2 decrements ref count
    // Destructor of shptr deallocates the control block and the pointer
}
