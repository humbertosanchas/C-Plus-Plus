//This is missing my comments
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "GameCharacterType.h"

using namespace std;

int main()
{
	GameCharacterTypeCollection gameCharacterCollections;
	char input = '\0';	
	ReadFile(gameCharacterCollections);
	GetInput(input, gameCharacterCollections);	

	return 0;	
}

void DisplayMenu()
{
	cout << "A. Display Character Informartion" << endl << "B. Add New Character" << endl << "C. Display Highest and Lowest by Health" << endl << "D. Display Character Data by Type" << endl << "E. Save Character Data to Disk" << endl << "X. Exit Program" << endl << endl;
}

void ReadFile(GameCharacterTypeCollection& gameCharacter)
{
	string line;
	string name;
	char type;
	int health;
	int c = 0;
	ifstream myFile("GameCharacters.txt");
	if (myFile.is_open())
	{
		while (!myFile.eof() && c < MAX_CHARACTERS)
		{
			myFile >> name >> type >> health;
			GameCharacterType character(name, type, health);
			gameCharacter.gameCharacters[c] = character;
			gameCharacter.gameCharacterCount = c;
			c++;
		}
		myFile.close();
	}	
}

void SaveCharacters(GameCharacterTypeCollection  gameCollection)
{
	int c = 0;
	ofstream saveFile("GameCharacters.txt");
	if (saveFile.is_open())
	{
		while (!saveFile.eof() && c <= gameCollection.gameCharacterCount)
		{
			saveFile << gameCollection.gameCharacters[c].charName << " " << gameCollection.gameCharacters[c].charType << " " << gameCollection.gameCharacters[c].charHealth << endl;			
			c++;
		}
		saveFile.close();
	}
	system("PAUSE");
	system("CLS");
}

void AddCharacter(GameCharacterTypeCollection& gameCharacterCollections)
{
	string name;
	char type;
	int health;
	
		cout << "Character Name: ";
		cin >> name;		
	while (true)
	{
		cout << "Character Type: ";
		cin >> type;
		if (toupper(type) == 'M' || toupper(type) == 'R')
		{
			type = toupper(type);
			break;
		}
	}
	while (true)
	{		
		cout << "Character Health: ";			
		if (cin >> health)
		{
			break;
		}
		else 
		{				
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}		
	}	
	GameCharacterType character(name, type, health);
	gameCharacterCollections.gameCharacterCount = gameCharacterCollections.gameCharacterCount + 1;
	gameCharacterCollections.gameCharacters[gameCharacterCollections.gameCharacterCount] = character;

	system("PAUSE");
	system("CLS");
}

void DisplayCharacters(GameCharacterTypeCollection gameCollection)
{
	system("CLS");
	for (int i = 0; i <= gameCollection.gameCharacterCount; i++)
	{
		cout << gameCollection.gameCharacters[i].charName << " " << gameCollection.gameCharacters[i].charType << " " << gameCollection.gameCharacters[i].charHealth << endl;
	}
	cout << endl;
	system("PAUSE");
	system("CLS");
}

void HighLowCharacterHealth(GameCharacterTypeCollection gameCollection)
{
	GameCharacterType high;
	GameCharacterType low;
	for (int i = 0; i <= gameCollection.gameCharacterCount; i++)
	{
		if (i == 0)
		{
			high = gameCollection.gameCharacters[i];
			low = gameCollection.gameCharacters[i];
		}
		else
		{
			if (gameCollection.gameCharacters[i].charHealth > high.charHealth)
			{
				high = gameCollection.gameCharacters[i];
			}
			else if (gameCollection.gameCharacters[i].charHealth < low.charHealth)
			{
				low = gameCollection.gameCharacters[i];
			}
		}		
	}
	cout << "Highest Health: " << high.charName << " " << high.charType << " " << high.charHealth << endl
		<< "Lowest Health: " << low.charName << " " << low.charType << " " << low.charHealth << endl << endl;	
	system("PAUSE");
	system("CLS");
}

void CharacterByType(GameCharacterTypeCollection gameCollection)
{
	char inputType;
	cout << "Select a character by type: ";
	cin >> inputType;
	cout << "\n";
	if (toupper(inputType) == 'R' || toupper(inputType) == 'M')
	{
		for (int i = 0; i <= gameCollection.gameCharacterCount; i++)
		{
			if (toupper(inputType) == gameCollection.gameCharacters[i].charType)
			{
				cout << gameCollection.gameCharacters[i].charName << " " << gameCollection.gameCharacters[i].charType << " " << gameCollection.gameCharacters[i].charHealth << endl;
			}
		}	
		cout << endl;
	}
	system("PAUSE");
	system("CLS");
}


void GetInput(char input, GameCharacterTypeCollection gameCollection)
{
	while (true)
	{
		DisplayMenu();

		cin >> input;
		if (toupper(input) == 'A')
		{
			DisplayCharacters(gameCollection);
		}
		else if (toupper(input) == (char)'B')
		{
			AddCharacter(gameCollection);			
		}
		else if (toupper(input) == (char)'C')
		{
			HighLowCharacterHealth(gameCollection);
		}
		else if (toupper(input) == (char)'D')
		{
			CharacterByType(gameCollection);
		}
		else if (toupper(input) == (char)'E')
		{
			SaveCharacters(gameCollection);
		}
		else if (toupper(input) == (char)'X')
		{
			exit(6);
		}
		else
		{
			cout << "Please enter a valid value" << endl;
			system("PAUSE");
			system("CLS");
		}
	}
}