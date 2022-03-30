#pragma once
#include "Car.h"

class Ford:public Car
{
  public:
    Ford();
    virtual int GetSpeed(Weather w);
};
