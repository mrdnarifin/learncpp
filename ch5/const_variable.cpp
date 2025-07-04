#include <iostream>

int main()
{
    int x{4};       // x is a non-constant variable;
    x = 5;          // change value of x to 5 using assigment operator

    const double gravity {9.8};     // prefered use of conost before type
    int const sidesInSquare { 4};   // "east const" style, okay but not preferred

    std::cout << gravity << "\n";

    std::cout << "Enter you age: ";
    int age{};
    std::cin >> age;

    const int constAge { age};      // initialize const variable using non-const value
    age = 5;                        // ok: age is non-const, so we can change its value
    age = 5;

    std::cout << age << "\n" << constAge; 
    return 0;
}