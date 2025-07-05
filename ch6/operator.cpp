#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

void printCalculation(int x, int y, int z)
{
    std::cout << x + ( y * z);
}

int main()
{
    // printCalculation(getValue(), getValue(), getValue()); // this line is ambiguous
    
    int a {getValue()};         // will execute first
    int b {getValue()};         // will execute second
    int c {getValue()};         // will execute third

    printCalculation(a, b, c);  // this line is now unambiguous
    return  0;
}