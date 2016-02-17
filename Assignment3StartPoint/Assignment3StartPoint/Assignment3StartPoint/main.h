#include "CharType.h"
#include "MeleeCharType.h"
#include "WizardCharType.h"

// Uncomment prototypes below as you develop the derived classes
//--------------------------------------------------------
void DisplayCharacterInformation(WizardCharType wizardChar, MeleeCharType meleeChar, string title);
//void DisplayCharacterInformation(MeleeCharType meleeChar, string title);
//void TestWizardClass(WizardCharType& wizard);
//void TestMeleeClass(MeleeCharType& melee);

//WIZARD TEST CONSTANTS
const int WIZARD_SUCCESSFUL_CASTS = 6;
const int WIZARD_EXP_GAIN = 5;
const int WIZARD_MAG_DAMAGE_DEALT = 8;

//MELEE TEST CONSTANTS
const int MELEE_SUCCESSFUL_COMBOS = 3;
const int MELEE_EXP_COMBO_GAIN = 15;
const int MELEE_HEALTH_LOSS = -60;
