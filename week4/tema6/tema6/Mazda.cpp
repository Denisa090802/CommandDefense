#include "Mazda.h"

Mazda::Mazda()
{
    this->averageSpeedRain  = 90;
    this->averageSpeedSnow  = 80;
    this->averageSpeedSunny = 95;
    this->fuelCapacity      = 50;
    this->fuelConsumption   = 7;
}

int Mazda::GetSpeed(Weather w)
{
    if (w == Weather::Rain)
        return this->averageSpeedRain;
    else if (w == Weather::Snow)
        return this->averageSpeedSnow;
    else if (w == Weather::Sunny)
        return this->averageSpeedSunny;
}
