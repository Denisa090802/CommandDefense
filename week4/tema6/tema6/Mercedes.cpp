#include "Mercedes.h"

Mercedes::Mercedes()
{
    this->averageSpeedRain  = 85;
    this->averageSpeedSnow  = 80;
    this->averageSpeedSunny = 100;
    this->fuelCapacity      = 50;
    this->fuelConsumption   = 9;
}

int Mercedes::GetSpeed(Weather w)
{
    if (w == Weather::Rain)
        return this->averageSpeedRain;
    else if (w == Weather::Snow)
        return this->averageSpeedSnow;
    else if (w == Weather::Sunny)
        return this->averageSpeedSunny;
}
