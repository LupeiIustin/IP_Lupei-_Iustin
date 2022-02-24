#pragma once
#include "Weather.h"

class Masini
{
public:
    virtual int GetFuelCapacity() = 0;
    virtual int GetFuelConsumption() = 0;
    virtual double GetAvgSpeed(Weather w) = 0;
    virtual const char* GetName() = 0;
};