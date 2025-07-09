#include <iostream>

void printAddresses(int val, int& ref)
{
    std::cout << "The address of the value parameter is: " << &val << "\n";
    std::cout << "The address of the reference parameter is: " << &ref << "\n";
}

void addOne(int& y)  // y is a copy of x
{
    ++y;        // this modifies the copy of x, not the actual object x
}

int main()
{
    int x { 5};
    std::cout << "The address of x is: " << &x << "\n";
    printAddresses(x, x);

    std::cout << "value = " << x << "\n";

    addOne(x);

    std::cout << "value = " << x << "\n";   // x has not been modified

    return 0;
 }