#pragma once
#include "Car.h"

class Toyota:public Car
{
  public:
    Toyota();
    virtual int GetSpeed(Weather w);
};