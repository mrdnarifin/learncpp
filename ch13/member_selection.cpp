#include <iostream>

struct Employee
{
    int id{};
    int age {};
    double wage {};
};

void printEmployee(const Employee& e)
{
    // Use member selection operator (.) to select member from reference to struct
    std::cout << "Id: " << e.id << "\n";
    std::cout << "Age: " << e.age << "\n";
    std::cout << "Wage: " << e.wage << "\n";
}

int main()
{
    Employee joe { 1, 34, 65000.0};
    ++joe.age;
    joe.wage = 68000.0;

    std::cout <<  joe.age << "\n";

    Employee *ptr {&joe};
    // a bit ugly
    std::cout << (*ptr).id << "\n"; // Not great but works: first dereference ptr, then use member selection

    std::cout << ptr->id << "\n";   // Better: use -> to select number from pointer to object
    
    return 0;
}
