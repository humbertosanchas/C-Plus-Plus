#pragma once
#include "SoldierType.h"
#include "BackpackType.h"
#include <string>
#include <iostream>

string SoldierType::rankString[MAX_RANKS] = { "Private", "Corporal", "Sergeant", "Lieutent", "General" };

void SoldierType::DisplaySoldier()
{
	cout << "Current rank : " << SoldierType::rankString[this->GetRank()] << endl << "Number of Kills : " << this->GetNumberOfKills() << endl;
};

SoldierType::SoldierType() : PersonType(), backpack()
{
	this->SetRank(PRIVATE);
	this->SetNumberOfKills(0);
};

SoldierType::SoldierType(soldierRank rank, int numberOfKills, string name, char gender, double height, BackpackType::backpackItems currentItem, int maxWeight) : PersonType(name, gender, height), backpack(currentItem, maxWeight)
{
	this->SetRank(rank);
	this->SetNumberOfKills(numberOfKills);
};

	SoldierType::~SoldierType()
	{};