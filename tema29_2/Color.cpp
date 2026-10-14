#include "Color.h"

Color::Color(string name, string speciesPlant, string color)
{
    this->name = name;
    this->speciesPlant = speciesPlant;
    this->color = color;
}

string Color::getColor() const
{
    return color;
}

void Color::setColor(string color)
{
    this->color = color;
}

void Color::showInfo()
{
    Plant::showInfo();
    cout << "Color: " << color << endl;
}
