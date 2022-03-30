#pragma once
#include "Weather.h"
class Car
{
  protected:
    int fuelCapacity, fuelConsumption;
    int averageSpeedSunny, averageSpeedRain, averageSpeedSnow;

  public:
    virtual int GetSpeed(Weather w);
};