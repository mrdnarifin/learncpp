#include <iostream>
#include <cstddef>      // for std::nullptr_t

void print(std::nullptr_t)
{
    std::cout << "in print(std::nullptr_t)\n";
}

void print(int*)
{
    std::cout << "in print(int*)\n";
}

int main()
{
    int x { 5};
    int* ptr { &x};

    print(ptr); // calls print(int*)

    ptr = nullptr;
    print(ptr);     // call print(int*) (since ptr has type int*)

    return 0;
}