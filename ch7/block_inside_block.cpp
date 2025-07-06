#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int value{};
    std::cin >> value;

    if (value > 0)
    {
        if ((value % 2) == 0) 
        {
            std::cout << value << " is positive and even\n";
        }
        else 
        {
            std::cout << value << " is positive and add\n";
        }
    }

    return 0;
}