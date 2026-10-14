#pragma once
#include "Plant.h"
class Rose :
    public Plant
{
protected:
    float length;
public:
    Rose(string name, string speciesPlant,float length);

    float getLength()const;
    void setLength(float length);

    void showInfo()const;
};

