#pragma once

#include <iostream>

#include "pool.h"

namespace Nasu::lockfree {
template <typename T>
class Link {
public:
    Link() = default;

    ~Link() = default;

    void push_back(T&& value);

    void erase();

private:
    uint32_t capacity;
    
};
}
