#include <iostream>

// void foo(int x, int y)
// {
//     add(x, y);

//     constexpr int z{ 3}, w{ 5};
// }

int main()
{
    int x { 1};
    int y { 2};
    std::cout << (++x, ++y) << "\n";    // increment x and y, evaluates to the right operand

    return 0;
}