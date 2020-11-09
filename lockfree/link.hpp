#pragma once

#include <iostream>

namespace Nasu::lockfree {
class Link {
public:
    Link();

    void push_back();

    void erase();

    

private:
    uint32_t capacity;
    
};
}
