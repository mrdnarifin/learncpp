#include <iostream>
#include <string_view>

int main()
{
    constexpr std::string_view s{ "Hello World"};       // s is a string symbolic constant
    std::cout << s << "\n";                             // s will be replaced with "Hello, World!" at compile-time

    return 0;
}