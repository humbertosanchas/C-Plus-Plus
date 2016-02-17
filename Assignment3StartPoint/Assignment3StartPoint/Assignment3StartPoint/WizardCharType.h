#pragma once

#include <string>
#include "CharType.h"

using namespace std;

// Your class definition for the Wizard Character goes here
class WizardCharType : public CharType
{

	public: enum weapon { STAFF, WAND, BOOK, CRYSTAL };

	private:
		weapon wep;
		int magic;
		int magicHealth;
		int totalMagicDamage;

	public:
		void SetMagic(int inMagic) { magic = inMagic; }
		int GetMagic() { return magic; }
		void SetHealth(int inMagicHealth) { magicHealth = inMagicHealth; }
		int GetHealth() { return magicHealth; }
		void SetTotalMagicDamage(int inTotalMagicDamage) { totalMagicDamage = inTotalMagicDamage; }
		int GetTotalMagicDamage() { return totalMagicDamage; }

		void Display();

		WizardCharType() : CharType()
		{
			wep = WAND;
			magic = 0;
			magicHealth = 0;
			totalMagicDamage = 0;
		}

		WizardCharType(string name, int level, int inMagic, weapon inWep ) : CharType(name, level)
		{
			wep = inWep;
			magic = inMagic;
			magicHealth = 0;
			totalMagicDamage = 0;
		}

};