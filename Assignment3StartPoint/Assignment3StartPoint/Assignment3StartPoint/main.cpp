//------------------------------------------------------------------------------
// Your comments go here...
//------------------------------------------------------------------------------

#include <iostream>
#include "main.h"

using namespace std;

//------------------------------------------------------------------------------
void main()
{
	cout << "Start writing your derived classes then start uncommenting the appropriate code to bring your battle to life!" << endl << endl;

	system("pause");
		
  //WizardCharType wizardChar("Zara", 1, 30, WizardCharType::ORBS);		// Use parameterized constructors to initialize objects
  MeleeCharType meleeChar("Kai", 1, 3, MeleeCharType::SWORD);
 
  //// Display Initialized Character Data
  //DisplayCharacterInformation(wizardChar, meleeChar, "Intial Character Data: ");    
  DisplayCharacterInformation(meleeChar, "Intial Character Data: ");    

  //// Testing derived class
  //TestWizardClass(wizardChar);  
  //TestMeleeClass(meleeChar);
  //
  //// Display Final Character Data
  //DisplayCharacterInformation(wizardChar, meleeChar, "Final Character Data: ");     
}
  
//------------------------------------------------------------------------------
// Test Melee Class
//------------------------------------------------------------------------------
//void TestMeleeClass(MeleeCharType& melee)
//{
  //cout << " *** Testing Melee Class ***" << endl << endl;
  //melee.Display();
  //system("pause");
  //system("cls");

  //// Update Melee Levels Based on Experience ( assume meleeChar is in battle )
  //for (int i = 0; i < MELEE_SUCCESSFUL_COMBOS; i++)
  //{
	 // // Assume Melee character performs successful combos
	 // cout << melee.GetName() <<" succesfully completed combo!!!" << endl;
	 // melee.UpdateExperience(MELEE_EXP_COMBO_GAIN);
  //}

  //// Display Melee Character Data
  //cout << endl;
  //melee.Display();
  //system("pause");
  //system("cls");

  //// Assume meleeChar has killed two enemies
  //cout << endl << endl << melee.GetName() <<" has killed two enemies!" << endl;
  //melee.SetNumOfKills(2);

  //// Assume melee character takes a lot of damage and loses alot of health
  //melee.UpdateHealth(MELEE_HEALTH_LOSS);
  //cout << melee.GetName() << " is losing battle. Health is " <<  melee.GetHealth() << " !!!" << endl;

  //// Display Melee Character Data
  //melee.Display();
  //system("pause");
  //system("cls");
//}

//------------------------------------------------------------------------------
// Test Wizard Class
//------------------------------------------------------------------------------
//void TestWizardClass(WizardCharType& wizard)
//{
  //int wizardLevelBefore =  wizard.GetLevel(), totalMagicalDamageDealt = 0;

  //cout << " *** Testing Wizard Class ***" << endl << endl;
  //wizard.Display();
  //system("pause");
  //system("cls");

  //// Update Wizard Levels Based on Experience
  //for (int i = 0; i < WIZARD_SUCCESSFUL_CASTS; i++)
  //{
	 // // Assume Wizard casts Orbs and does Magical Damage
	 // cout << wizard.GetName() <<" casts Orbs and does Magical Damage..." <<endl;
  //
	 // totalMagicalDamageDealt = wizard.GetTotalMagicDamage();
	 // totalMagicalDamageDealt += WIZARD_MAG_DAMAGE_DEALT;
	 // wizard.SetTotalMagicDamage(totalMagicalDamageDealt);
	 // wizard.UpdateExperience(WIZARD_EXP_GAIN);
  //}
  //
  //// If Wizard leveled up then get new weapon... 
  //if (wizardLevelBefore < wizard.GetLevel())
  //{
	 // cout << endl << wizard.GetName() <<" leveled up and gains SPELL weapon!!!" << endl << endl;
	 // wizard.SetWeapon(WizardCharType::SPELL);
  //}
  //
  //// Display WizardCharacter Data
  //cout << endl;
  //wizard.Display();
  //system("pause");
  //system("cls");
//}

//------------------------------------------------------------------------------
// Display Character Data
//------------------------------------------------------------------------------
//void DisplayCharacterInformation(WizardCharType wizardChar, MeleeCharType meleeChar, string title)
//{
//  cout << title << endl;
//
//  cout << endl;
//  wizardChar.Display();
//  cout << endl;
//
//  meleeChar.Display();
//  system("pause");
//  system("cls");
//}

void DisplayCharacterInformation(MeleeCharType meleeChar, string title)
{
  cout << title << endl;

  cout << endl;

  meleeChar.Display();
  system("pause");
  system("cls");
}