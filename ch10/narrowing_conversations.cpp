#include <iostream>

void print(unsigned int u)  // note: unsigned
{
    std::cout << u << "\n";
}

int main()
{
    std::cout << "Enter an integral value: ";
    int n{};
    std::cin >> n;  // enter 5 or -5
    print(n);       // conversion to unsigned may not preserve value

    constexpr int n1 { 5};      // note: constexpr
    unsigned int u1 { n1};      // okay: conversion is not narrowing due to exclusion clause

    constexpr int n2 { -5};     // note: constexpr
    unsigned int u2 { n2};      // compile error: conversion is narrowing due to value change

    return 0;
    return 0;
}

