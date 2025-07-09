#include <iostream>

int main()
{
    int x {};
    const double d{};

    int y { x};     // x is  a modifiable lvalue expression
    const double e { d};    // d is a non-modifiable lvalue expression

    return 0;
}