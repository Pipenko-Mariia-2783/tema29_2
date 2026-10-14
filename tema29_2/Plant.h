#pragma once
#include <iostream>
#include <string>
using namespace std;
class Plant
{
protected:
	string name;
	string speciesPlant;
public:
	Plant();
	Plant(string name,string speciesPlant);

	string getName()const;
	string getSpeciesPl()const;

	void setName(string name);
	void setSpeciesPl(string speciesPlant);

	void showInfo()const;
};

