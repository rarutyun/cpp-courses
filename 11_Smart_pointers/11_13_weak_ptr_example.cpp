#include <iostream>
#include <unordered_map>
#include <memory>

struct Widget {/*...*/};

struct Id {/*...*/};

// This function can be expensive
std::unique_ptr<const Widget> WidgetFactory( Id id ) {/*...*/}

std::shared_ptr<const Widget> WidgetFactoryWithCaching( Id id ) {
    static std::unordered_map<Id, std::weak_ptr<const Widget>> cache;

    auto ptr = cache[id].lock(); // std::shared_ptr
                                 // points to the cached object or
                                 // a null pointer if no such an object in the cache

    if (!ptr) { // Load an object if no such an object
        ptr = WidgetFactory(id);
        cache[id] = ptr; // cache loaded object
    }
    return ptr;
}
