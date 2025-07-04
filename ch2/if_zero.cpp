#include <iostream>

#define PRINT_JOE

int main()
{
    std::cout << "Joe\n";

#if 1 // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif

#ifdef PRINT_JOE
    std::cout << "Joe\n";
#endif
    return 0;
}