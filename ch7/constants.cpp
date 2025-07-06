#include "constants.h"      // include a copy of each constant in this file
#include <iostream>

// namespace constants
// {
//     // We use extern to ensure these have external linkage
//     extern constexpr double pi { 3.14159 };
//     extern constexpr double avogadro { 6.0221413e23 };
//     extern constexpr double myGravity { 9.2 }; // m/s^2 -- gravity is light on this planet
// }

int main()
{
    std::cout << "Enter a radius: ";
    double radius {};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2 * constants::pi << '\n';
    return 0;
}