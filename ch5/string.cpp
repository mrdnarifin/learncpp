#include <string>
#include <iostream>

int main()
{
    std::string name {"Alex"};   // initialize name with string literal
    name = "John";

    std::cout << " My name is: " << name << "\n";

    std::string empty{};
    std::cout << "[" << empty << "]\n";

    std::string fullName { "Alex" }; // initialize name with string literal "Alex"
    std::cout << fullName << '\n';

    fullName = "Jason";              // change fullName to a longer string
    std::cout << fullName << '\n';

    fullName = "Jay";                // change fullName to a shorter string
    std::cout << fullName << '\n';
    std::cout << fullName.length();
    return 0;
}