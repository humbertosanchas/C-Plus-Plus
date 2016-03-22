#pragma once
#include "SoldierType.h"
#include <string>
#include <iostream>

//Paul Boyko March 2015
// CPP file for the SoldierType class

//string version of potential ranks
string SoldierType::rankString[MAX_RANKS] = { "Private", "Corporal", "Sergeant", "Lieutent", "General" };


//display method for data members of the soldier class
void SoldierType::DisplaySoldier()
{
	cout << "Current rank : " << SoldierType::rankString[this->GetRank()] << endl << "Number of Kills : " << this->GetNumberOfKills() << endl;
};


//display method for all data include soldier class, data members backpacks data and inherieted person class data
void SoldierType::DiplayAllDataOfSoldier()
{
	DisplayPerson();
	DisplaySoldier();
	GetBackpack().DisplayBackPack();
	cout << endl;
}

//default constructor
SoldierType::SoldierType() : PersonType(), backpack()
{
	this->SetRank(PRIVATE);
	this->SetNumberOfKills(0);
};

//parameterized constructor
SoldierType::SoldierType(soldierRank rank, int numberOfKills, string name, char gender, double height, BackpackType::backpackItems currentItem, int maxWeight) : PersonType(name, gender, height), backpack(currentItem, maxWeight)
{
	this->SetRank(rank);
	this->SetNumberOfKills(numberOfKills);
};

//deault destructor
SoldierType::~SoldierType()
{};