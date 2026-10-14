#pragma once
#include "Plant.h"
class Rose :
    public Plant
{
protected:
    float length;
public:
    Rose(float length, Plant p);

    float getLength()const;
    void setLength(float length);

    void showInfo()const;
};

