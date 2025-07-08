#include <iostream>

int main()
{
    int n = static_cast<int>(static_cast<long>(3));     // convert int 3 to long and back
    std::cout << n << "\n";                             // prints 3

    char c = static_cast<char>(static_cast<double>('c'));   // convert 'c' to double and back
    std::cout << c << "\n";

    int u = static_cast<int>(static_cast<unsigned int>(-5));    // convert '-5' to unsigned and back
    std::cout << u << "\n";     // prints -5

    double d { static_cast<double>(static_cast<int>(3.5))};  // convert double 3.5 to int and back
    std::cout << d << "\n"; // prints 3

    double d2 { static_cast<double>(static_cast<float>(1.23456789))};   // convert double 1.23456789 to float and back
    std::cout << d2 << "\n";

    return 0;
}