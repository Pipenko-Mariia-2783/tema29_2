#pragma once
#include "Plant.h"
class Color :
    public Plant
{
protected:
    string color;
public:
    Color(string color, Plant p);

    string getColor()const;
    void setColor(string color);

    void showInfo();
};
