#include <iostream>
#include <string>
#include "MeleeCharType.h"

using namespace std;

// implementation methods for the Melee class go here
void MeleeCharType::Display()
{
	cout << "Name: " << this->GetName() << endl << "Lvl: " << this->GetLevel() << endl << "Health: " << this->GetHealth() << endl  << "Experience: " << this->GetExperienceh() << endl << "Weapon: " << this->GetWeapon() << endl << "Combo Level: " << this->GetComboLvl() << endl << "Number of Kills: " << this->GetNumberOfKills() << endl;
}
