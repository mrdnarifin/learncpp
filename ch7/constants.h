#ifndef CONSTANT_H
#define CONSTANT_H

// Define your worn namespace to hold constants
namespace constants
{
    // Global constants have internal linkage by default
    // constexpr double pi { 3.14159 };
    // constexpr double avogadro { 6.0221413e23 };
    // constexpr double myGravity { 9.2 }; // m/s^2 -- gravity is light on this planet

    // Since the actual variables are inside a namespace, the forward declarations need to be inside a namespace as well
    // We can't forward declare variables as constexpr, but we can forward declare them as (runtime) const
    // extern const double pi;
    // extern const double avogadro;
    // extern const double myGravity;

    inline constexpr double pi { 3.14159 }; // note: now inline constexpr
    inline constexpr double avogadro { 6.0221413e23 };
    inline constexpr double myGravity { 9.2 }; // m/s^2 -- gravity is light on this planet

}
#endif