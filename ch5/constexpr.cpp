#include <iostream>

//the return value of a non-constexpr function is not constexpr
int five()
{
    return 5;
}

int main()
{
    constexpr double gravity  { 9.8};   // ok: 9.8 is a constant expression
    constexpr int sum { 4 + 5};         // ok: 4 + 5 is a constant expression
    constexpr int something { sum};     // ok: sum is a constant expression

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    constexpr double d { 1.2};          // d can be used in constant experssions!

    std::cout << gravity << " " << sum << " " << something << " " << age;

    // constexpr int myAge {age};      //compile error: age is not a constant expression
    // constexpr int f { five() };     // compile error: return value of five() is not constexpr


}