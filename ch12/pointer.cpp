#include <iostream>

int main()
{
    int x { 5};     // normal variable
    int& ref { x};  // a reference to an integer (bound to x)

    int* ptr { &x};       // a pointer to an integer
    std::cout << ptr << "\n";   // use dereference operator to print the value at the address that ptr is holding (which is x's address)
    return 0;
}