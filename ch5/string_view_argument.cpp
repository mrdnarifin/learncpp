#include <iostream>
#include <string>
#include <string_view>

void printSV(std::string_view str)
{
    std::cout << str << "\n";
}

void printString(std::string str)
{
    std::cout << str << "\n";
}

int main()
{
    printSV("Hello World");         // call with C-style string literal
    std::string s2 {"Hello World"};
    printSV(s2); // call with std::string

    std::string_view s3{s2};
    printSV(s3);

    std::string s {s3};
    printString(s);

    printString(static_cast<std::string>(s3));

    return 0;
}