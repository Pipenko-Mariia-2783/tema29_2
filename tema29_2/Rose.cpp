#include "Rose.h"

Rose::Rose(string name, string speciesPlant, float length)
{
    this->name = name;
    this->speciesPlant = speciesPlant;
    this->length = length;
}

float Rose::getLength() const
{
    return length;
}

void Rose::setLength(float length)
{
    this->length = length;
}

void Rose::showInfo() const
{
    Plant::showInfo();
    cout << "Length: " << length << " centimeters" << endl;
}