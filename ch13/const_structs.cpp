#include <iostream>

struct Rectangle
{
    double length {};
    double width {};
};

struct Foo
{
    int a {};
    int b {};
    int c {};
};

int main()
{
    const Rectangle unit { 1.0, 1.0};
    const Rectangle zero {};    // value-initialize all members

    Foo f { 1, 3};  // f.a = 1, f.c = 3

    std::cout << f.a << f.b << f.c;


    // Foo f1{ .a{ 1 }, .c{ 3 } }; // ok: f1.a = 1, f1.b = 0 (value initialized), f1.c = 3
    // Foo f2{ .a = 1, .c = 3 };   // ok: f2.a = 1, f2.b = 0 (value initialized), f2.c = 3
    // Foo f3{ .b{ 2 }, .a{ 1 } }; // error: initialization order does not match order of declaration in struct

    return 0;
}
