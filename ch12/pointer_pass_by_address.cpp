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

void printByAddress(const std::string* ptr) // the function parameter is a pointer that holds the address of str
{
    std::cout << *ptr << ptr << "\n";              // print the value via dereferenced pointer
}

void printIDNumber(const int *id=nullptr)
{
    if (id)
        std::cout << "Your ID number is " << *id << "\n";
    else
        std::cout << "Your ID number is not known.\n";
}

int main()
{
    std::string str {"Hello, world!"};
    std::cout << &str << "\n";
    printByValue(str);      // pass str value via the reference
    printByReference(str);  // pass str by reference, doesn not make a copy of str
    printByAddress(&str);   // pass str by address, doesn not make a copy of str

    printIDNumber();

    int userId { 34};
    printIDNumber(&userId);
    return 0;
}