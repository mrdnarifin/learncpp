#include <iostream>

// a single function template for max
template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max(5, 6);     // instantiates and calls max<int>(int, int)
    std::cout << "\n";
    std::cout << max(1.2, 3.4); // instantiates and calls max<double>(double, double)

    return 0;
}