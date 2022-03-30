#include "Circuit.h"

void Circuit::SetWeather(Weather weather)
{
    this->weather = weather;
}

void Circuit::SetLength(int length)
{
    this->length = length;
}

void Circuit::AddCar(Car* Car)
{
    this->cars.push_back(Car);
}

void Circuit::Race()
{
    for (int i = 0; i < this->cars.size() - 1; i++)
    {
        for (int j = i + 1; j < this->cars.size(); j++)
            // if (cars[i]->averageSpeedRain > cars[j])
            if (cars[i]->GetSpeed(this->weather) < cars[i]->GetSpeed(this->weather))
            {
                Car* c  = cars[i];
                cars[i] = cars[j];
                cars[j] = c;
            }
    }
}

void Circuit::ShowFinalRanks()
{

}

void Circuit::ShowWhoDidNotFinish()
{
}
