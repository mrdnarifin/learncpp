#include <iostream>

int main()
{
    int x { 5};         // x is a normal integer variable
    int& ref { x};      // ref is an lvalue reference variable that can now be used as an alias for variable x

    std::cout << x << "\n";     // print the value of x (5)
    std::cout << ref << "\n";   // print the value of x via ref (5)

    x = 6;      // x now has value 6
    std::cout << x << ref << "\n";      // prints 66

    ref = 7;    // the object being referneced (x) now has value 7
    std::cout << x << ref << "\n";  // print 77

    // Reference must be initialization

    // int& invalidRef;        // error: reference must be initialized
    int x { 5};
    int& ref { x};      // okay: reference to int is bound to int variable

    return 0;
}