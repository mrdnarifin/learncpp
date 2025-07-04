#include <format>
#include <iostream>
#include <bitset>

void printBinary()
{
    std::cout << std::format("{:b}\n", 0b1010);  // C++20, {:b} formats the argument as binary digits
    std::cout << std::format("{:#b}\n", 0b1010); // C++20, {:#b} formats the argument as 0b-prefixed binary digits

    // compiler not support c++23
    // std::println("{:b} {:#b}", 0b1010, 0b1010);  // C++23, format/print two arguments (same as above) and a newline
}

int main()
{
    // std::bitset<8> means we want to store 8 bits
    std::bitset<8> bin1 {0b1100'0101};  // binary literal for binary 1100
    std::bitset<8> bin2 {0xC5};         // hexadecimal literal for binary 11000101
    std::cout << bin1 << "\n" << bin2 << "\n";
    std::cout << std::bitset<4>{0b1010} << "\n";    // create a temporary std::bitset and print it
    
    printBinary();
    return 0;
}