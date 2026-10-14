#include "Color.h"

Color::Color(string color, Plant p)
{
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
