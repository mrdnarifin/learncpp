#include <iostream>

// Macros defined -> define identifier that can be converted into replacement outpput text
#define MY_NAME "Alex"
#define PRINT_JOE "Joni"


int main()
{
    std::cout << "My Name is: " << MY_NAME << "\n";

#ifdef PRINT_JOE
    std::cout << "Joe\n" << PRINT_JOE; // will be compiled since PRINT_JOE is defined
#endif


#ifndef PRINT_BOB
    std::cout << "\nBOB"; // will be compiled because PRINT_BOB not defined
#endif

    return 0;
}