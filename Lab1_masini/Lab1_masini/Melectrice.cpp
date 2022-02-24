#include "Melectrice.h"


int Melectrice::GetBateryCapacity()
{
    return 80;
}

int Melectrice::GetBateryConsumption()
{
    return 25;
}

double Melectrice::GetAvgSpeed(Weather w)
{
    double default_speed = 237;

    switch (w)
    {
    case Sunny:
        return default_speed;
    case Rain:
        return default_speed * 0.9;
    case Snow:
        return default_speed * 0.8;
    default:
        return default_speed;
    }
}
