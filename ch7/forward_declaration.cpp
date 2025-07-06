#include <iostream>

int initX();    // forward declaration
int initY();    // forward declaration

int g_x { initX()}; //  g_x is initialized first
int g_y { initY()};

int initX()
{
    return g_y; // g_y isn't intialized when this is called
}

int initY()
{
    return 5;
}

int main()
{
    std::cout << g_x << " " << g_y << " \n";
}