#include <cstdlib>  // for std::exits()
#include <iostream>

void cleanup()
{
    // code here to do any kind of cleanup required
    std::cout << "cleanup!\n";
}

int main()
{
    std::cout << 1 << "\n";
    cleanup();

    std::exit(0);   // terminate and return status code 0 to operating system
    
    // the following statement never execute
    std::cout << 2 << "\n";

    return 0;
}