#include <iostream>

void printInt(int x)
{
    std::cout << x << "\m";
}

void printInt(char) = delete;   // calls to this function will halt compilation

void printInt(bool) = delete;   // cakks to this function will halt compilation

int main()
{
    printInt(97);   // okay

    printInt('a');  // compile error: function deleted
    printInt(true); // compile error: function deleted

    printInt(5.0);  // compile error: ambiguous match

    return 0;
}