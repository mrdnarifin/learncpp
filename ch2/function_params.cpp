#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

int getValueFromUser()
{
    std::cout << "Enter a integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value)
{
    std::cout << value << " doubled is: " << value * 2 << "\n";
}

// This functionn takes one integer parameter named x
// the called will supply the value of x
void printValue(int x)
{
    std::cout << x << "\n";
}

void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

// This function has two integer parameters, one named x, and one named y
// the caller will supply the value of both x and y


int add(int x, int y)

{
    return x + y;
}

int main()
{
    doPrint();
    printValue(5);
    int num {getValueFromUser()};
    printDouble(num);
    std::cout << add(5, 9);
    printValues(6, 7);

    printDouble(getValueFromUser());
}