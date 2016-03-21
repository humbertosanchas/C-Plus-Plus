#pragma once
#include <string>

#include "PersonType.h"
#include "BackpackType.h"

using namespace std;
//Header class for the SoldierType class
//Paul Boyko March 9th 2015
class SoldierType : PersonType
{
	
	public:
		enum soldierRank {PRIVATE, CORPORAL , SERGEANT, LIEUTENANT, GENERAL};

	private:
		soldierRank rank;
		int numberOfKills;
		int static const MAX_RANKS = 5;
		string static rankString[MAX_RANKS];
		BackpackType backpack;

	public:
		// getters setters
		void SetRank(soldierRank rank) { this->rank = rank; }
		soldierRank GetRank() { return this->rank; }
		void SetNumberOfKills(int kills) { numberOfKills = kills; }
		int GetNumberOfKills() { return numberOfKills; }

		//diplay method
		void DisplaySoldier();

		//default and parameterized constructor
		SoldierType();
		SoldierType(soldierRank rank ,int kills, string name, char gender, double height, BackpackType::backpackItems currentItem, int maxWeight);

		//default destructor
		~SoldierType();
		
};