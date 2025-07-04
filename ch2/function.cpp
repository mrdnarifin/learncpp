#include <iostream>

// Definition of user-defined function doPrint()
// doPrint() is the called function in this example
void doPrint()
{
    std::cout << "In doPrint()\n";
}

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout <<"Starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
}

// Definition of user-defined function main()
int main()
{
    std::cout << "Starting main()\n";
    doA();
    std::cout << "Ending main()\n";

    return 0;
}