#include <iostream>

// Function-like macro that evaluates to true if the type (or object) is equal to or smaller than
// the size of two memory addresses

#define isSmall(T) (sizeof(T) <= 2 * sizeof(void*))

struct S
{
    double a;
    double b;
    double c;
};

int main()
{
    std::cout << std::boolalpha;    // print true or false rather than 1 or 0
    std::cout << isSmall(int) << "\n";  // true

    double d {};
    std::cout << isSmall(d) << "\n";
    std::cout << isSmall(S) << "\n";

    return 0;
}
