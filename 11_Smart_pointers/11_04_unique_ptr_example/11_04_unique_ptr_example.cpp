// Factory with raw pointer
// Factory with unique pointer
// Factory with unique pointer with logs

#include <iostream>
#include <memory>

struct shape {
    virtual ~shape() {}
};

struct circle : shape {};

struct triangle : shape {};

struct square : shape {};

shape* shape_factory(/*args*/) {
    shape* ptr = nullptr;
    if (/*circle condition*/) {
        ptr = new circle(/*args*/);
    } else {
        if (/*triangle condition*/) {
            ptr = new triangle(/*args*/);
        } else {
            // square condition
            ptr = new square(/*args*/);
        }
    }
    return ptr;
}

std::unique_ptr<shape> shape_factory_unique(/*args*/) {
    std::unique_ptr<shape> uptr = nullptr;

    if (/*circle condition*/) {
        ptr.reset(new circle(/*args*/));
    } else {
        if (/*triangle condition*/) {
            ptr.reset(new triangle(/*args*/));
        } else {
            // square condition
            ptr.reset(new square(/*args*/));
        }
    }
    return uptr;
}

void make_log_entry( shape* f ) { /*makes the entry*/ }

void remove_log_entry( shape* f ) { /*removes the entry*/ }

auto shape_factory_with_logs(/*args*/) {
    auto custom_deleter = [](shape* f) { remove_log_entry(f); delete f; }

    std::unique_ptr<shape, custom_deleter> uptr(nullptr, custom_deleter);

    if (/*circle condition*/) {
        ptr.reset(new circle(/*args*/));
        make_log_entry(ptr.get());
    } else {
        if (/*triangle condition*/) {
            ptr.reset(new triangle(/*args*/));
            make_log_entry(ptr.get());
        } else {
            // square condition
            ptr.reset(new square(/*args*/));
            make_log_entry(ptr.get());
        }
    }
    return uptr;
}
