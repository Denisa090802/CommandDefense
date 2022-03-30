#include "Dacia.h"

Dacia::Dacia()
{
    this->averageSpeedRain = 70;
    this->averageSpeedSnow = 65;
    this->averageSpeedSunny = 90;
    this->fuelCapacity      = 30;
    this->fuelConsumption   = 7;
}

int Dacia::GetSpeed(Weather w)
{
    if (w == Weather::Rain)
        return this->averageSpeedRain;
    else if (w == Weather::Snow)
        return this->averageSpeedSnow;
    else if (w == Weather::Sunny)
        return this->averageSpeedSunny;
}
