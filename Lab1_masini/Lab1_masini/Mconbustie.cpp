#include "Mconbustie.h"

int Mcombustie::GetFuelCapacity()
{
    return 61;
}

int Mcombustie::GetFuelConsumption()
{
    return 13;
}

double Mcombustie::GetAvgSpeed(Weather w)
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
