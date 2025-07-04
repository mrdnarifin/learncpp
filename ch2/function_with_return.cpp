#include <iostream>
#include <cstdlib>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    // return input;
}

int returnFive()
{
    return 5;
}


int main()
{
    int num{getValueFromUser()};
    std::cout << num << " doubled is: " << num * 2 << "\n";

    std::cout << returnFive() << "\n";
    std::cout << returnFive() + 2 << "\n";

    returnFive();
    return 0;
}