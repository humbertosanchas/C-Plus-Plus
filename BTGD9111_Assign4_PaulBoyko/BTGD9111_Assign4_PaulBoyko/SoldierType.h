#pragma once
#include <string>

#include "PersonType.h"
#include "BackpackType.h"

using namespace std;
//Header class for the SoldierType class
//Paul Boyko March 2015
class SoldierType :  public PersonType
{
	
	public:
		//enum to limit possible ranks
		enum soldierRank {PRIVATE, CORPORAL , SERGEANT, LIEUTENANT, GENERAL};
		//make backpack public so soldier class can change the currentItems and maxWeight
		BackpackType backpack;

	private:
		//private data members
		soldierRank rank;
		int numberOfKills;
		int static const MAX_RANKS = 5;
		string static rankString[MAX_RANKS];
		//BackpackType backpack;

	public:
		// public getters setters
		void SetRank(soldierRank rank) { this->rank = rank; }
		soldierRank GetRank() { return this->rank; }
		void SetNumberOfKills(int kills) { numberOfKills = kills; }
		int GetNumberOfKills() { return numberOfKills; }
		void SetBackpack(BackpackType::backpackItems currentItem, int weight) { this->backpack = BackpackType(currentItem, weight); }
		BackpackType GetBackpack(){ return this->backpack; }

		//diplay method for solder class only
		void DisplaySoldier();
		//display method to show all data of the Soldier class, inherieted person class and the data member backpack class.
		void DiplayAllDataOfSoldier();

		//default and parameterized constructor
		SoldierType();
		SoldierType(soldierRank rank ,int kills, string name, char gender, double height, BackpackType::backpackItems currentItem, int maxWeight);

		//default destructor
		~SoldierType();
		
};