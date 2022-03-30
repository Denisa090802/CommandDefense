#pragma once
#include "Car.h"

class Mercedes:public Car
{
  public:
    Mercedes();
    virtual int GetSpeed(Weather w);
};
