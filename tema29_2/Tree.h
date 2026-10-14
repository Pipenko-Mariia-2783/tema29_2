#pragma once
#include "Plant.h"
class Tree :
    public Plant
{
protected:
    int age;
public:
    Tree(string name, string speciesPlant,int age);

    int getAge()const;
    void setAge(int age);

    void showInfoTree()const;
};

