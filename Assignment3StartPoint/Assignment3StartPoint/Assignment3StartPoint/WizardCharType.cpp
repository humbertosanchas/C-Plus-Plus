#include <iostream>
#include <string>
#include "WizardCharType.h"

using namespace std;

string WizardCharType::weaponString[MAX_WEAPONS] = { "Staff", "Wand", "Book", "Crystal" };

// implementation methods for the Wizard class go here
void WizardCharType::Display()
{
	CharType::Display();
	cout << "Weapon : " << WizardCharType::weaponString[wep] << endl << "Magic Health : " << magicHealth << endl << "Total Magic Damage : " << totalMagicDamage << endl << endl;
}

