#pragma once
#include "Masini.h"
class Mcombustie : public Masini
{
public:
    int GetFuelCapacity();
    int GetFuelConsumption();
    double GetAvgSpeed(Weather w);
    const char* GetName();
};

