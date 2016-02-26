#pragma once

#include <string>
#include "CharType.h"


using namespace std;

//Paul Boyko Feb 2016
//melee class extends CharType
class MeleeCharType : public CharType
{
	//enum of available wepons
	public: enum weapon { SWORD, MACE, SPEAR, CLUB };

	//private data members
	private:
		weapon wep;
		int comboLvl;
		int numberOfKills;
		int static const MAX_WEAPONS = 4;
		string static weaponString[MAX_WEAPONS];

	 //public getters and setters
	public:		
		weapon GetWeapon() { return this->wep; }
		int GetComboLvl() { return this->comboLvl; }
		int GetNumberOfKills() { return this->numberOfKills; }

		void SetWeapon(weapon w) { this->wep = w; }
		void SetComboLvl(int cLvl) { this->comboLvl = cLvl; }
		void SetNumOfKills(int nKills) { this->numberOfKills = nKills; }

		//public display method header
		void Display();

		//public default constructor
		MeleeCharType() : CharType()
		{
			this->wep = SWORD;
			this->comboLvl = 0;
			this->numberOfKills = 0;
		}

		//public parameterized constructor
		MeleeCharType(string name, int	level, int comboLvl, weapon wepType) : CharType(name, level)
		{
			this->wep = wepType;
			this->comboLvl = comboLvl;
			this->numberOfKills = 0;
		}
		

};

