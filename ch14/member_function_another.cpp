#include <iostream>
#include <string>

struct Person
{
    std::string name{};
    int age{};

    void kisses(const Person& person)
    {
        std::cout << name << " kisses " << person.name << " age " << person.age;
    }
};

struct Foo
{
    int z() { return m_data; } // We can access data members before they are defined
    int x() { return y(); }    // We can access member functions before they are defined

    int m_data { y() };        // This even works in default member initializers (see warning below)
    int y() { return 5; }
};

struct Bad
{
    int m_bad1 { m_data }; // undefined behavior: m_bad1 initialized before m_data
    int m_bad2 { fcn() };  // undefined behavior: m_bad2 initialized before m_data (accessed through fcn())

    int m_data { 5 };
    int fcn() { return m_data; }
};


int main()
{
    Person joe { "Joe", 29};
    Person kate { "Kate", 27};

    joe.kisses(kate);
}