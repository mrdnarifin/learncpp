#include <iostream>

class Foo
{
private:
    int m_x {};
    int m_y {};

public:
    Foo() // default constructor
    {
        std::cout << "Foo constructed\n";
    }

    Foo(int x, int y)   // non-default contructor
        : m_x { x}, m_y { y}
    
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ") constructed\n";
    }

    // Error AMbigues
    Foo(int x=1, int y=2) // default constructor
        : m_x { x }, m_y { y }
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ") constructed\n";
    }
};

int main()
{
    Foo foo1 {};        // Call Foo() constructor
    Foo foo2 { 6, 7};   // Calls Foo (int, int) constructor

    return 0;
}
