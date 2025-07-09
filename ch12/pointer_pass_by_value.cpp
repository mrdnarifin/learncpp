#include <iostream>
#include <string>

void printByValue(std::string val)  // the function parameter is a copy of str
{
    std::cout << val << &val << "\n";       // print the value via the copy
}

void printByReference(const std::string& ref)   // the function parameter is a refernce that binds to str
{
    std::cout << ref << &ref << "\n";       // print the value via the reference
}

int main()
{
    std::string str {"Hello, world!"};
    std::cout << &str << "\n";
    printByValue(str);      // pass str value via the reference
    printByReference(str);  // pass str by reference, doesn not make a copy of str

    return 0;
}