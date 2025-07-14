#include <iostream>

class Date
{
// Any members defined here would default to private
private:    // here's our private due to above public: specifier
    int m_year { 2020};     // private due to above private: specifier
    int m_month { 14};      // private due to above private: specifier
    int m_day { 10};        // private due to above private: specifier

public:     // here's our public access specifier

    void print() const  // public due to above public: specifier
    {
        // members can access other private members
        std::cout << m_year << "/" << m_month << "/" << m_day;
    }
    
};

class Foo
{
private:
    // private access specifier not required here since classes default to private members
    int m_something {};     // private by default
};

int main()
{
    Date d{};
    d.print();   // okay, main() allowed to access public members

    return 0;
}