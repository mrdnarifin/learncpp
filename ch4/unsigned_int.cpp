#include <iostream>


int main()
{
    // unsigned short x{0};
    // std::cout << "x was: " << x << "\n";

    // x = -1;
    // std::cout << "x is now: " << x << "\n";

    // x = -2;
    // std::cout << "x is now: " << x << "\n";

    // int x{2};
    // int y{3};
    // std::cout << x - y << "\n";

    // unsigned int u{2};
    // signed int s{3};

    // std::cout << u - s << "\n";

    signed int s{-1};
    unsigned int u {1};

    if (s < u) 
        std::cout << "-1 is less than 1\n";
    else
        std::cout << "1 is less than -1\n";

    return 0;
}