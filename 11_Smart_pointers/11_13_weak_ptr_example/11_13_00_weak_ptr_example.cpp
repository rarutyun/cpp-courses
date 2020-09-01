#include <unordered_map>
#include <memory>

struct widget {/*...*/};

struct id_type {/*...*/};

// This function can be expensive
std::unique_ptr<const widget> widget_factory( id_type id ) {/*...*/}

std::shared_ptr<const widget> widget_factory_with_caching( id_type id ) {
    static std::unordered_map<id_type, std::weak_ptr<const widget>> cache;

    auto ptr = cache[id].lock(); // std::shared_ptr
                                 // points to the cached object or
                                 // a null pointer if no such an object in the cache

    if (!ptr) { // Load an object if no such an object
        ptr = widget_factory(id);
        cache[id] = ptr; // cache loaded object
    }
    return ptr;
}
