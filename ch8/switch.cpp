#include <iostream>

void printDigitName(int x)
{
    switch (x)
    {
    case 1:
        std::cout << "One";
        break;
    case 2:
        std::cout << "Two";
        break;
    case 3:
        std::cout << "Three";
        break;    
    case 4:
        std::cout << "Four";
        break;
    default:
        std::cout << "Unknown";
        break;
    }

    // so execution continues here
    std::cout << "Hello";
}

int main()
{
    printDigitName(3);
    std::cout << "\n";
}