#pragma once

#include "Car.h"
#include "Weather.h"
#include <vector>

using namespace std;

class Circuit
{
  private:
    Weather weather;
    int length;
    vector<Car*> cars;

  public:
    void SetWeather(Weather weather);
    void SetLength(int length);
    void AddCar(Car* Car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();

   

};
