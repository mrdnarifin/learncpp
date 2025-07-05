#include <iostream>

bool isOdd(int x)
{
    return ( x % 2) != 0;   // fails when x is 05
}

int main()
{
    std::cout << "Enter a integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "The remainder is: " << x % y << "\n";

    if ((x % y) == 0)
        std::cout << x << " Is evenly divisible by " << y << "\n";
    else
        std::cout << x << " is not evenly divisible by " << y << "\n";

    std::cout << " isOdd " << isOdd(-5);

    return 0;
}