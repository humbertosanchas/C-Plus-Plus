#pragma once

#include <string>
#include "CharType.h"


using namespace std;


class MeleeCharType : public CharType
{
	public: enum weapon { SWORD, MACE, SPEAR, CLUB };

	private:
		weapon wep;
		int comboLvl;
		int numberOfKills;
		int static const MAX_WEAPONS = 4;
		string static weaponString[MAX_WEAPONS];

	public:		
		weapon GetWeapon() { return this->wep; }
		int GetComboLvl() { return this->comboLvl; }
		int GetNumberOfKills() { return this->numberOfKills; }

		void SetWeapon(weapon w) { this->wep = w; }
		void SetComboLvl(int cLvl) { this->comboLvl = cLvl; }
		void SetNumOfKills(int nKills) { this->numberOfKills = nKills; }

		void Display();

		MeleeCharType() : CharType()
		{
			this->wep = SWORD;
			this->comboLvl = 0;
			this->numberOfKills = 0;
		}

		MeleeCharType(string name, int	level, int comboLvl, weapon wepType) : CharType(name, level)
		{
			this->wep = wepType;
			this->comboLvl = comboLvl;
			this->numberOfKills = 0;
		}
		

};

