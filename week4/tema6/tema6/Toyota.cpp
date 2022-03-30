#include "Toyota.h"

Toyota::Toyota()
{
    this->averageSpeedRain  = 70;
    this->averageSpeedSnow  = 65;
    this->averageSpeedSunny = 95;
    this->fuelCapacity      = 40;
    this->fuelConsumption   = 9;
}

int Toyota::GetSpeed(Weather w)
{
    if (w == Weather::Rain)
        return this->averageSpeedRain;
    else if (w == Weather::Snow)
        return this->averageSpeedSnow;
    else if (w == Weather::Sunny)
        return this->averageSpeedSunny;
}
