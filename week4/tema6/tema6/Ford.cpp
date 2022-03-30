#include "Ford.h"

Ford::Ford()
{
    this->averageSpeedRain  = 75;
    this->averageSpeedSnow  = 70;
    this->averageSpeedSunny = 95;
    this->fuelCapacity      = 30;
    this->fuelConsumption   = 8;
}

int Ford::GetSpeed(Weather w)
{
    if (w == Weather::Rain)
        return this->averageSpeedRain;
    else if (w == Weather::Snow)
        return this->averageSpeedSnow;
    else if (w == Weather::Sunny)
        return this->averageSpeedSunny;
}
