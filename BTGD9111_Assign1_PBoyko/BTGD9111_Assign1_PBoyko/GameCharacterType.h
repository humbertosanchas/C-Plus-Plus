#pragma once
#include <string>
#include <iostream>
#include <sstream>


using namespace std;

const int MAX_CHARACTERS = 20;

struct GameCharacterType
{
	string charName;
	char charType;
	int charHealth;

	GameCharacterType()
	{
		charName = "";
		charType = ' ';
		charHealth = 0;
	}

	GameCharacterType(string name, char type, int health)
	{		
		charName = name;
		charType = type;
		charHealth = health;
	}
};

struct GameCharacterTypeCollection
{
	GameCharacterType gameCharacters[MAX_CHARACTERS];	
	int gameCharacterCount;
};

void DisplayMenu();
void ReadFile(GameCharacterTypeCollection& gameCharacter);
void AddCharacter(GameCharacterTypeCollection& gameCharacterCollections);
void GetInput(char input, GameCharacterTypeCollection gameCollection);
void DisplayCharacters(GameCharacterTypeCollection gameCollection);
void HighLowCharacterHealth(GameCharacterTypeCollection gameCollection);
void SaveCharacters(GameCharacterTypeCollection  gameCollection);