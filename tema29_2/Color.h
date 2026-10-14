#pragma once
#include "Plant.h"
class Color :
    public Plant
{
protected:
    string color;
public:
    Color(string name, string speciesPlant,string color);

    string getColor()const;
    void setColor(string color);

    void showInfo();
};
