#include <iostream>

void print()    // this print() lives in the global namespace
{
    std::cout << " there \n";
}

namespace Foo   // define a namespace named Foo
{
    // This doSomething() belongs to namespace Foo
    int doSomething(int x, int y)
    {
        return x + y;
    }

    void print()    // this print() lives in Foo namespace
    {
        std::cout << "Hello";
    }
}


namespace Goo   // define a namespace named Goo
{
    // This doSomething() belongs to namespace Goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    std::cout << Foo::doSomething(2, 3) << "\n";    // use the doSomething() that exists in namespace Foo
    std::cout << Goo::doSomething(2, 3) << "\n";    // use the doSomething() that exists in namespace Goo

    Foo::print();       // call print() in Foo namespace
    ::print();          /// call print() in golbal namespace (same as just calling print() in this case)
    return 0;
}