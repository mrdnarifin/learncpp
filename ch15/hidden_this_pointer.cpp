#include <iostream>

class Calc
{
private:
    int m_value{};

public:

    // void add(int value) { m_value += value; }
    // void sub(int value) { m_value -= value; }
    // void mult(int value) { m_value *= value; }

    // Chaining

    Calc& add(int value) { m_value += value; return *this; }
    Calc& sub(int value) { m_value -= value; return *this; }
    Calc& mult(int value) { m_value *= value; return *this; }

    int getValue() const { return m_value; }

    void reset() { *this = {}; }
};

class Simple
{
private:
    int m_id {};

public:
    Simple(int id)
        : m_id { id}
    {}

    int getID() const { return m_id; }
    void setID(int id) { m_id = id; }
    void print() const { std::cout << this->m_id; }     // use `this` pointer to access the implicit object and operator-> to select member m_id
};

int main()
{
    Simple simple{ 1};
    simple.setID(2);

    simple.print();

    Calc calc{};
    calc.add(5); // returns void
    calc.sub(3); // returns void
    calc.mult(4); // returns void

    calc.add(5).sub(3).mult(4);

    calc.reset();

    std::cout << calc.getValue() << '\n';

    return 0;
}