#include <iostream>
#include <string>
#include "WizardCharType.h"

using namespace std;
//Paul Boyko Feb 2016
//array to hold the strin values of the available weapons
string WizardCharType::weaponString[MAX_WEAPONS] = { "Staff", "Wand", "Book", "Crystal" };

// implementation methods for the Wizard class go here
void WizardCharType::Display()
{
	CharType::Display();
	cout << "Weapon : " << WizardCharType::weaponString[wep] << endl << "Magic Health : " << magicHealth << endl << "Total Magic Damage : " << totalMagicDamage << endl << endl;
}

