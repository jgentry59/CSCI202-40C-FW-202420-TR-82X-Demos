#include <iostream>
#include "donut.h"

int main()
{
    try
    {
        Donut d;
        Donut d1("chocolate", "chocolate chips", "chocolate");
        std::cout << d << std::endl;
        std::cout << d1 << std::endl;
        if (Donut::strToDrizzle.count("chocolate"))
        {
            std::cout << "chocolate is a valid drizzle type" << std::endl;
        }
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}