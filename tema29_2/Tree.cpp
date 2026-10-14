#include "Tree.h"

Tree::Tree(int age, Plant p):Plant(p)
{
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
