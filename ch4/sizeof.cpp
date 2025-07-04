#include <iostream>     
#include <iomanip>      // for std::setw ( which sets the width of the subsequent output)
#include <climits>      // for CHAR_BIT

int main()
{
    std::cout << std::left;
    std::cout << std::setw(16) << "A byte is " << CHAR_BIT << " bits\n";
    std::cout << std::setw(16) << "A Max byte is " << CHAR_MAX << " bits\n";
    std::cout << std::setw(16) << "A Min byte is " << CHAR_MIN << " bits\n";

    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";
    std::cout << std::setw(16) << "Wchart_T:" << sizeof(wchar_t) << " bytes\n";
    std::cout << std::setw(16) << "NullPtr:" << sizeof(nullptr) << " bytes\n";
}