#include <iostream>
#include <string>

// pass by value
void printValue(std::string y)
{
    std::cout << y << "\n";
}

// pass by reference
void printValueReff(std::string& y)
{
    std::cout << y << "\n";
}

int main()
{
    std::string x { "Hello World"};
    printValueReff(x);      // is passed by value ( copied) into parameter y (expensive)

    return 0;
}