#include <iostream>

int main()
{
    char* chPtr{};              // chars are 1 byte
    int* iPtr{};                // ints are usually 4 bytes
    long double* ldPtr{};        // long doubles are usually 8 and 12 bytes

    std::cout << sizeof(chPtr) << "\n";     // prints 4
    std::cout << sizeof(iPtr) << "\n";      // prints 4
    std::cout << sizeof(ldPtr) << "\n";     // prints 4

    return 0;
}