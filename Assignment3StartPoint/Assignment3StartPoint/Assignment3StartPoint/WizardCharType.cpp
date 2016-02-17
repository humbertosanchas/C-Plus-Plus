#include <iostream>
#include <string>
#include "WizardCharType.h"

using namespace std;

// implementation methods for the Wizard class go here
void WizardCharType::Display()
{
	CharType::Display();
	cout << "Magic : " << magic << endl << "Magic Health : " << magicHealth << endl << "Total Magic Damage : " << totalMagicDamage << endl;
}

