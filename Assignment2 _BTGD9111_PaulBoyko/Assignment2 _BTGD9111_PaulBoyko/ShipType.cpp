#include <iostream>
#include <Windows.h>
#include <iomanip>
#include "ShipType.h"

//--------------------------------------------------------------
// Implement your ship class functions in this file


ShipType::ShipType()
{
	this->name = "Ship Name";
	this->attack = 0;
	this->defense = 0;
	this->hitPoints = 0;
}

ShipType::ShipType(string name, int attack, int defense, int hitPoints)
{
	this->name = name;
	this->attack = attack;
	this->defense = defense;
	this->hitPoints = hitPoints;
}

ShipType::~ShipType()
{

}