#include <iostream>
#include <iomanip>
#include <cstdint>

// assume int is 4 bytes
void doSomething(unsigned int x)
{
    // run some code x times
    std::cout << "x is " << x << "\n";
}

int main()
{
    doSomething(-8);

    size_t t = sizeof(int32_t);

    std::cout << t;
}