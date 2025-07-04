#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view s1 {"Hello World"};        // initialize with C-Style string literal
    std::cout << s1 << "\n";

    std::string s{"Hello World!"};
    std::string_view s2 {s};        // initialize with std::string
    std::cout << s2 << "\n";
    std::string_view s3 {s2};       // initialize with std::string_view
    std::cout << s3 << "\n";
}