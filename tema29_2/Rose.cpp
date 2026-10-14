#include "Rose.h"

Rose::Rose(float length, Plant p)
{
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
 