// Factory with raw pointer
// Factory with unique pointer
// Factory with unique pointer with logs

#include <iostream>
#include <vector>

struct Shape {
    virtual ~Shape() {}
};

struct Circle : Shape {};

struct Triangle : Shape {};

struct Square : Shape {};

Shape* ShapeFactory(/*args*/) {
    T* ptr = nullptr;
    if (/*circle condition*/) {
        ptr = new Circle(/*args*/);
    } else {
        if (/*triangle condition*/) {
            ptr = new Triangle(/*args*/);
        } else {
            // Square condition
            ptr = new Square(/*args*/);
        }
    }
    return ptr;
}

std::unique_ptr<Shape> ShapeFactoryUnique(/*args*/) {
    std::unique_ptr<Shape> uptr = nullptr;

    if (/*circle condition*/) {
        ptr.reset(new Circle(/*args*/));
    } else {
        if (/*triangle condition*/) {
            ptr.reset(new Triangle(/*args*/));
        } else {
            // square condition
            ptr.reset(new Square(/*args*/));
        }
    }
    return uptr;
}

void make_log_entry( Shape* f ) { /*makes the entry*/ }

void remove_log_entry( Shape* f ) { /*removes the entry*/ }

auto ShapeFactoryWithLogs(/*args*/) {
    auto custom_deleter = [](Shape* f) { remove_log_entry(f); delete f; }

    std::unique_ptr<Shape, custom_deleter> uptr(nullptr, custom_deleter);

    if (/*circle condition*/) {
        ptr.reset(new Circle(/*args*/));
        make_log_entry(ptr.get());
    } else {
        if (/*triangle condition*/) {
            ptr.reset(new Triangle(/*args*/));
            make_log_entry(ptr.get());
        } else {
            // square condition
            ptr.reset(new Square(/*args*/));
            make_log_entry(ptr.get());
        }
    }
    return uptr;
}
