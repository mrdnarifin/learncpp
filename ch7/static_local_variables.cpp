#include <iostream>

void incrementAndPrint()
{
    int value { 1}; // automatic duration by default
    ++value;
    std::cout << value << "\n";
}   // value will be destory here

void incrementAndPrintStatic()
{
    static int s_value { 1};    // static duration via static keyword. This initializer is only executed once
    ++s_value;
    std::cout << s_value << "\n";
}   // s_value is not destroyed here, but become inaccessible because it does out of scope;

int generateID()
{
    static int s_itemID( 0);
    return s_itemID++; // make copy os s_itemID, increments the real s_itemID, the returns the value in the copy
}

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    incrementAndPrintStatic();
    incrementAndPrintStatic();
    incrementAndPrintStatic();

    std::cout << generateID() << "\n";
    std::cout << generateID() << "\n";
    std::cout << generateID() << "\n";
    std::cout << generateID() << "\n";
    return 0;
}