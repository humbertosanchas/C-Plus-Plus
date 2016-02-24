#include <iostream>
#include <string>
#include "CharType.h"

using namespace std;

//------------------------------------------------------------------------------------
CharType::CharType()
{
	name = "";
	level = 0;
	health = MAX_HEALTH;
	experience = 0;
}

//------------------------------------------------------------------------------------
CharType::CharType( string inName, int inLevel )
{
	name = inName;
	level = inLevel;
	health = MAX_HEALTH;
	experience = 0;
}

//------------------------------------------------------------------------------------
CharType::~CharType( )
{
}

//------------------------------------------------------------------------------------
void CharType::LevelDecrease( )
{
	if( level > 1 )
		level--;
}

//------------------------------------------------------------------------------------
void CharType::Display( )
{
	cout << "Character Name:  " << name << endl;
	cout << "Character Level: " << level << endl;
	cout << "Character Health: " << health << endl;
	cout << "Character Experience: " << experience << endl;
}

//------------------------------------------------------------------------------------
void CharType::UpdateHealth( int inHealthInc )
{
	health += inHealthInc;
	if( health < 0 )
	{
		health = 0;
	}
	else if (health > MAX_HEALTH )
	{
		health = MAX_HEALTH;
	}
}

//------------------------------------------------------------------------------------
//
// UpdateExperience( int inExpInc  )
//
// UpdateExperience increases the experience variable of the character and will 
// level up the character as experience reaches certain levels.
//
void CharType::UpdateExperience( int inExpInc )
{
	//Only update experience if we are gaining experience
	if ( inExpInc > 0)
	{
		experience += inExpInc;
		if( experience < 0 )
		{
			experience = 0;
		}
		else if (experience > MAX_EXPERIENCE )
		{
			experience = MAX_EXPERIENCE;
		}
		UpdateLevel();
	}
}

//------------------------------------------------------------------------------------
//
// UpdateLevel( )
//
// UpdateLevel sets the level variable to match the character's experience value
//
void CharType::UpdateLevel()
{
  int level = (experience / EXP_LEVEL_THRESHOLD) + 1;

  if( level > MAX_CHAR_LEVELS )
    SetLevel(MAX_CHAR_LEVELS);
  else
    SetLevel( level );
}



