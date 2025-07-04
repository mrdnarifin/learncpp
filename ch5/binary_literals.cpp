#include <iostream>

int main()
{
    int bin{};      // assume 16-bit ints
    bin = 0x0001;    // assign binary 0000 0000 0001 to variable
    bin = 0x0002;    // assign binary 0000 0000 0010 to variable
    bin = 0x0004;    // assign binary 0000 0000 0100 to variable
    bin = 0x0008;    // assign binary 0000 0000 1000 to variable
    bin = 0x0010;    // assign binary 0000 0001 0000 to variable
    bin = 0x0020;    // assign binary 0000 0010 0000 to variable
    bin = 0x0040;    // assign binary 0000 0100 0000 to variable
    bin = 0x0080;    // assign binary 0000 1000 0000 to variable
    bin = 0x00FF;    // assign binary 0000 1111 1111 to variable
    bin = 0x00B3;    // assign binary 0000 1011 0011 to variable
    bin = 0xF770;    // assign binary 1111 0111 0000 to variable

    // digit separator
    int x {0b1011'0010};    // assign binary 1011 0010 to the variable
    long value { 2'132'673'462}; // much easier to read than 2132673462

    std::cout << bin;
}