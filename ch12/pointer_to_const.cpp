#include <iostream>
int main()
{
    const int x { 5};
    const int* ptr { &x};       // ptr points to const x
    const int y { 6};
    ptr = &y;

    return 0;
}