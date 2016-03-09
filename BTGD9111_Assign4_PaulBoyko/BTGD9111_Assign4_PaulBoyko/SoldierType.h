#pragma once
#include <string>

#include "PersonType.h"
#include "BackpackType.h"

using namespace std;
//Header class for the SoldierType class
//Paul Boyko March 9th 2015
class SoldierType : PersonType
{
	private:
		//enum for rank
		int numberOfKills;
		BackpackType backpack;

	public:
		// getters setters
		void SetNumberOfKills(int kills) { numberOfKills = kills; }
		int GetNumberOfKills() { return numberOfKills; }

		//diplay method
		void Display();

		//default and parameterized constructor
		SoldierType();
		SoldierType(int kills, string currentItem, int maxWeight);

		//default destructor
		~SoldierType();
		
};