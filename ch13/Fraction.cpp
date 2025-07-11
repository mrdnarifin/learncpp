#include "Fraction.h"   // include our Fraction definition in this code file
#include <iostream>

// Now we can make use of our Fraction type
int main()
{
    Fraction f {3, 4};  // this actually creates a Fraction object named f
    std::cout << f.numerator;
    return 0;
}