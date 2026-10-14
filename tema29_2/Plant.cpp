#include "Plant.h"

Plant::Plant()
{
    name = "underfined";
    speciesPlant = "underfined";
}

Plant::Plant(string name, string speciesPlant)
{
    this->name = name;
    this->speciesPlant = speciesPlant;
}

string Plant::getName() const
{
    return name;
}

string Plant::getSpeciesPl() const
{
    return speciesPlant;
}

void Plant::setName(string name)
{
    this->name = name;
}

void Plant::setSpeciesPl(string speciesPlant)
{
    this->speciesPlant = speciesPlant;
}

void Plant::showInfo() const
{
    cout << "Name of plant: " << name << endl;
    cout << "Species of plant: " << name << endl;
}
