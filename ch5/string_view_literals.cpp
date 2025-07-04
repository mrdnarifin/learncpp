#include <iostream>
#include <string>
#include <string_view>

int main()
{
    using namespace std::string_literals;       // access the s suffix
    using namespace std::string_view_literals;  // access the sv suffix


    std::cout << "foo\n";       // no suffix is a C-style string literal
    std::cout << "goo\n";       // s suffix is a std::string literal
    std::cout << "moo\n";       // sv suffix is a std::string_view literal
}