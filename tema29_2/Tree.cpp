#include "Tree.h"

Tree::Tree(string name, string speciesPlant, int age)
{
    this->name = name;
    this->speciesPlant = speciesPlant;
    this->age = age;
}

int Tree::getAge() const
{
    return age;
}

void Tree::setAge(int age)
{
    this->age = age; 
}

void Tree::showInfoTree() const
{
    Plant::showInfo();
    cout << "Age: " << age << endl;
}
