#include <cstdint>
#include <iostream>

// Use an 8-bit integer as the enum underlying type
enum Color : std::int8_t
{
    black,
    red,
    blue
};

int main()
{
    Color c { blue};
    std::cout << sizeof(c) << "\n"; // print 1 (byte)
}