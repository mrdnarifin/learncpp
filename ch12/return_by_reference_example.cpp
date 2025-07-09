#include <iostream>
#include <string>
#include <string_view>

std::string& getName()
{
    static std::string s_name{};
    std::cout << "Enter a name: ";
    std::cin >> s_name;
    return s_name;
}

void pritnFirstAlphabetical(const std::string& s1, const std::string& s2)
{
    if (s1 < s2)
        std::cout << s1 << " comes before " << s2 << "\n";
    else
        std::cout << s2 << " comes before " << s1 << "\n";
}

int main()
{
    pritnFirstAlphabetical(getName(), getName());
    return 0;
}