#include <iostream>

int getValue()
{
    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

int getClassSize(bool inBigClassroom)
{
    if ( inBigClassroom)
        return 30;
    else
        return 20;
}

int main()
{
    int x { getValue()};
    int y { getValue()};
    int max { (x > y) ? x : y};
    std::cout << "The max of " << x << " and " << y << " is " << max << ".\n";

    const int classSize { getClassSize(false)};
    std::cout << "The class size is: " << classSize << "\n";
    return 0;
}