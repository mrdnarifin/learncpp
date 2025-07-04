#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name {};
    // std::cin >> name;       // this won't work as expected since std::cin breaks on whitespace
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter your favorite color: ";
    std::string color{};
    // std::cin >> color;
    std::getline(std::cin >> std::ws, color);

    std::cout << "Your name is " << name << " and your favorite color is " << color << "\n";

    // Another Example
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string fname{};
    std::getline(std::cin >> std::ws, fname);       // note: no std::ws here
    std::cout << "Hello, " << fname << ", you picked " << choice << "\n";
    return 0;
}