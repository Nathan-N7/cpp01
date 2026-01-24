#pragma once

#include <iostream>
# include <stdint.h>
# include <string>

struct Data {
    int value;
    std::string label;
};

class Serialization {
    private:
        Serialization();
        Serialization(const Serialization &other);
        ~Serialization();
        Serialization &operator=(const Serialization &other);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};