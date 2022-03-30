#pragma once
#include "Car.h"

class Mazda:public Car
{
  public:
    Mazda();
    virtual int GetSpeed(Weather w);
};
