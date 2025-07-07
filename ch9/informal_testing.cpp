#include <iostream>

// WE want to test the following function
// For simplicity, we'll ignore that 'y' is sometimes counted as a vowel
bool isLowerVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'u':
    case 'o':
        return true;
    
    default:
        return false;
    }
}

// Not called from anywhere right now
// But here if you want to retest things later

int testVowel()
{
    if (!isLowerVowel('a')) return 1;
    if (!isLowerVowel('q')) return 2;

    return 0;
}

int main()
{
    // SO here's out remporary etsts to validate it works
    // std::cout << isLowerVowel('a') << '\n'; // temporary test code, should produce 1
    // std::cout << isLowerVowel('q') << "\n"; // temporary test code, should produce 0

    int result { testVowel()};
    if (result != 0)
        std::cout << "testVowel() test " << result << " failed.\n";
    else
        std::cout << "testVowel() tests passed.\n";

    return 0;
}