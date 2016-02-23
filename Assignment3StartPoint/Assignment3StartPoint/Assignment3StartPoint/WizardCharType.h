#pragma once

#include <string>
#include "CharType.h"

using namespace std;

// Your class definition for the Wizard Character goes here
class WizardCharType : public CharType
{

	public: enum Weapon { STAFF, WAND, BOOK, CRYSTAL };

	private:
		Weapon wep;
		int magicHealth;
		int totalMagicDamage;
		int static const MAX_WEAPONS = 4;
		string static weaponString[MAX_WEAPONS];

	public:
		void SetWeapon(Weapon w) { this->wep = w; }	
		Weapon GetWeapon() { return wep; }
		void SetHealth(int inMagicHealth) { magicHealth = inMagicHealth; }
		int GetHealth() { return magicHealth; }
		void SetTotalMagicDamage(int inTotalMagicDamage) { totalMagicDamage = inTotalMagicDamage; }
		int GetTotalMagicDamage() { return totalMagicDamage; }

		void Display();

		WizardCharType() : CharType()
		{
			wep = WizardCharType::WAND;
			magicHealth = 0;
			totalMagicDamage = 0;
		}

		WizardCharType(string name, int level, int inMagicHealth, Weapon inWep ) : CharType(name, level)
		{
			wep = inWep;
			magicHealth = inMagicHealth;
			totalMagicDamage = 0;
		}

};