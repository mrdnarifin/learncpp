#include <iostream>

double getDoubleValue()
{
    std::cout << "Enter a double value: ";
    double value;
    std::cin >> value;
    return value;
}

char getOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char operation;
    std::cin >> operation;
    return operation;
}

void printResult(double x, char operation, double y)
{
    double result;
    if (operation == '+')
        result = x + y;
    else if (operation == '-')
        result = x - y;
    else if (operation == '*')
        result = x * y;
    else if (operation == '/')
        result = x / y;
    else 
        return;

    std::cout << x << " " << operation << " " << y << " is " << result;
}

int main()
{
    double a {getDoubleValue()};
    double b {getDoubleValue()};
    char operation = {getOperator()};
    printResult(a, operation, b);
}
