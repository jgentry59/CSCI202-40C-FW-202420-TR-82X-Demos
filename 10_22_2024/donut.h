#ifndef DONUT_H
#define DONUT_H

class Donut
{
public:
    enum icingType
    {
        CHOCOLATEICING,
        CARAMELICING,
        MAPLE,
        VANILLA,
        GLAZE,
        SPECIALICE,
        NOICE
    };
    enum toppingType
    {
        RAINBOWSPR,
        CHOCOLATESPR,
        PEANUTS,
        COCONUT,
        OREO,
        BACON,
        GRAHAM,
        FRUITYPEBBLES,
        REESESPIECES,
        MMS,
        CANDYBAR,
        CHOCOLATECHIPS,
        SEASALT,
        CINSUGAR,
        POWDSUGAR,
        NOTOP
    };
    enum drizzleType
    {
        CARAMELDRIZZLE,
        CHOCOLATEDRIZZLE,
        PEANUTBUTTER,
        RASPBERRY,
        SPECIALDRIZZLE,
        NODRIZZLE
    };
};

#endif