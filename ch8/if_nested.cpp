#include <iostream>

int main()
{
    // std::cout << "Enter a number: ";
    // int x{};
    // std::cin >> x;

    // if ( x >= 0)    // outer if statement
    // {
    //     if (x <= 20)    // inner if statement
    //         std::cout << x << " is between 0 and 20\n";
    //     else            // attached to inner if statement
    //         std::cout << x << " is negative\n";
    // }

    // return 0;

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if (x >= 0)
    {
        if (x <= 20)
            std::cout << x << " is between 0 and 20\n";
        else // attached to inner if statement
            std::cout << x << " is greater than 20\n";
    }
    else // attached to outer if statement
        std::cout << x << " is negative\n";

    return 0;

}