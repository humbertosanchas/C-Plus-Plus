#pragma once
#include "BackpackType.h"
#include <string>
#include <iostream>

string BackpackType::backpackItemsString[MAX_ITEMS] = { "Nothing", "Gin", "Tonic", "Lime", "Cup", "Food" };

void BackpackType::DisplayBackPack()
{
	cout << "Current item : " << BackpackType::backpackItemsString[this->GetCurrentItem()] << endl << "Max weight : " << this->GetMaxWeight() << endl;
};

BackpackType::BackpackType()
{
	this->SetCurrentItem(NOTHING);
	this->SetMaxWeight(10);
};

BackpackType::BackpackType(backpackItems item, int weight)
{
	this->SetCurrentItem(item);
	this->SetMaxWeight(weight);
};

BackpackType::~BackpackType()
{};