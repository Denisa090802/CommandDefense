#pragma once
#include "Car.h"

class Dacia:public Car /// clasa dacia care mosteneste clasa car
{
  public:
    Dacia();
    virtual int GetSpeed(Weather w);
};
