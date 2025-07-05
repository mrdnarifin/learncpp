#include <iostream>

int main()
{
    constexpr int apples { 12};
    std::cout << "You have " << apples << " apples. \nEnter how many people to divide them between: ";
    double x {};
    std::cin >> x;

    std::cout << "Each person gets " << apples / x << " wholes apples.\n";

    return 0;
}