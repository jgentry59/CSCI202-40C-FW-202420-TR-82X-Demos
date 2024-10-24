#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <stdexcept>
#include "donut.h"

void resetStream();
void codeGradeLoopFix(std::string errLocation);
std::string getIcing();
std::string getTopping(std::string);
std::string getDrizzle(); // complete for the lecture activity
int main()
{
    Donut **order;
    std::string ice;
    std::string top;
    std::string driz;
    int numDonuts = 0;
    order = new Donut *[numDonuts];
    int num = 0;
    while (true)
    {
        ice = getIcing();
        // top = getTopping(ice);
        // driz = getDrizzle();
        Donut **orderCpy;
        orderCpy = new Donut *[numDonuts];
        for (int i = 0; i < numDonuts; i++)
        {
            orderCpy[i] = new Donut(*order[i]);
            delete order[i];
        }
        numDonuts++;
        delete[] order;
        order = new Donut *[numDonuts];
        for (int i = 0; i < numDonuts - 1; i++)
        {
            order[i] = new Donut(*orderCpy[i]);
            delete orderCpy[i];
        }
        delete[] orderCpy;
        // order[numDonuts - 1] = new Donut(ice, top, driz);
        break;
    }
    return 0;
}

void resetStream()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "You did not enter a number." << std::endl;
}

void codeGradeLoopFix(std::string errLocation)
{
    if (std::cin.eof())
    {
        std::cout << "There was a problem and there is no more input! @" + errLocation << std::endl;
        throw std::invalid_argument(errLocation);
    }
}

std::string getIcing()
{
    std::string ice;
    std::cout << "Choose your icing from the choices below:" << std::endl;
    for (std::map<Donut::icingType, std::string>::iterator it = Donut::iceToStr.begin(); it != Donut::iceToStr.end(); ++it)
    {
        std::cout << it->second << std::endl;
    }
    std::cin >> std::ws;
    std::getline(std::cin, ice);
    std::string icingLower = ice;
    std::transform(icingLower.begin(), icingLower.end(), icingLower.begin(), ::tolower);
    while (!Donut::strToIce.count(icingLower))
    {
        std::cout << ice << " is not a valid icing choice." << std::endl;
        std::cout << "Choose your icing from the choices below:" << std::endl;
        for (std::map<Donut::icingType, std::string>::iterator it = Donut::iceToStr.begin(); it != Donut::iceToStr.end(); ++it)
        {
            std::cout << it->second << std::endl;
        }
        std::cin >> std::ws;
        std::getline(std::cin, ice);
        icingLower = ice;
        std::transform(icingLower.begin(), icingLower.end(), icingLower.begin(), ::tolower);
    }
    return ice;
    
    std::string getDrizzle() //start
{
    std::string driz;
    std::cout << "Choose your drizzle from the choices below:" << std::endl;
    for (std::map<Donut::drizzleType, std::string>::iterator it = Donut::drizToStr.begin(); it != Donut::drizToStr.end(); ++it)
    {
        std::cout << it->second << std::endl;
    }
    std::cin >> std::ws;
    std::getline(std::cin, driz);
    std::string drizzleLower = driz;
    std::transform(drizzleLower.begin(), drizzleLower.end(), drizzleLower.begin(), ::tolower);
    while (!Donut::strToDriz.count(drizzleLower))
    {
        std::cout << driz << " is not a valid drizzle choice." << std::endl;
        std::cout << "Choose your drizzle from the choices below:" << std::endl;
        for (std::map<Donut::drizzleType, std::string>::iterator it = Donut::drizToStr.begin(); it != Donut::drizToStr.end(); ++it)
        {
            std::cout << it->second << std::endl;
        }
        std::cin >> std::ws;
        std::getline(std::cin, driz);
        drizzleLower = driz;
        std::transform(drizzleLower.begin(), drizzleLower.end(), drizzleLower.begin(), ::tolower);
    }
    return drizzle; //end
    }
    
}
