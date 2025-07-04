#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main() 
{
    std::cout << getValueFromUser() << "\n"; // the value stored in temporary object
    return 0;
}