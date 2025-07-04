#include <iostream>

void printInt(const int x)
{
    std::cout << x << '\n';
}

const int getValue()
{
    return 5;
}

int main()
{
    printInt(5);        // 5 will be used as the initializer for x
    printInt(6);        // 6 will be used as the initializer for x

    std::cout << getValue() <<  "\n";

    return 0;
}