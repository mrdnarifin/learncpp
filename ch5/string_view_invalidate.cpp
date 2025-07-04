#include <iostream>
#include <string>
#include <string_view>

// std::string_view getBoolName(bool b)
// {
//     std::string t { "true" };  // local variable
//     std::string f { "false" }; // local variable

//     if (b)
//         return t;  // return a std::string_view viewing t

//     return f; // return a std::string_view viewing f
// } // t and f are destroyed at the end of the function


std::string_view getBoolName(bool b)
{
    if (b)
        return "true";  // return a std::string_view viewing "true"

    return "false"; // return a std::string_view viewing "false"
} // "true" and "false" are not destroyed at the end of the function


int main()
{
    std::string s { "Hello, world!" };
    std::string_view sv { s }; // sv is now viewing s

    s = "Hello, universe!";    // modifies s, which invalidates sv (s is still valid)
    std::cout << sv << '\n';   // undefined behavior

    sv = s;                    // revalidate sv: sv is now viewing s again
    std::cout << sv << '\n';   // prints "Hello, universe!"

    std::cout << getBoolName(true) << ' ' << getBoolName(false) << '\n'; // undefined behavior

    return 0;
}