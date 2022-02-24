#pragma once
#include "Masini.h"
class Melectrice : public Masini
{
public:
    int GetBateryCapacity();
    int GetBateryConsumption();
    double GetAvgSpeed(Weather w);
    const char* GetName();
};

