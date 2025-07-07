#include <iostream>

int sumTo(int value)
{   
    int result { 0};
    for (int i{ 1}; i <= value; i++)
    {
        result += i;
    }

    return result;
}

int main()
{
    std::cout << sumTo(5);
}