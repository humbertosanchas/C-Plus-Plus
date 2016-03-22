#pragma once
#include "BackpackType.h"
#include <string>
#include <iostream>

using namespace std;
//Paul Boyko March 2015
//Backpack CPP file

//string version of allowed items
string BackpackType::backpackItemsString[MAX_ITEMS] = { "Nothing", "Gin", "Tonic", "Lime", "Cup", "Food" };

//display method for the backpack class
void BackpackType::DisplayBackPack()
{
	cout << "Current item : " << BackpackType::backpackItemsString[this->GetCurrentItem()] << endl << "Max weight : " << this->GetMaxWeight() << endl;
};

//default constructor
BackpackType::BackpackType()
{
	//this->SetCurrentItem(NOTHING);
	//this->SetMaxWeight(0);
	currentItem = NOTHING;
	maxWeight = 0;
};

//parameterized constructor
BackpackType::BackpackType(backpackItems item, int weight)
{
	//this->SetCurrentItem(item);
	//this->SetMaxWeight(weight);	
	currentItem = item;
	maxWeight = weight;
};


// default destructor
BackpackType::~BackpackType()
{};