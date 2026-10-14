#pragma once
#include "Plant.h"
class Tree :
    public Plant
{
protected:
    int age;
public:
    Tree(int age, Plant p);

    int getAge()const;
    void setAge(int age)
};

