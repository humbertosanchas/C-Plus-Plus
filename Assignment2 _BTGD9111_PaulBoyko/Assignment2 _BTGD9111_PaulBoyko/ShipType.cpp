//Paul Boyko Feb 2016  This file defines a ShipType remainder of the fuctions, constructors and destructors
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <mmsystem.h>
#include "ShipType.h"

//--------------------------------------------------------------
// Implement your ship class functions in this file

bool ShipType::IsAlive() //checks if ship is alive and return true if is else false
{
	if (this->hitPoints > DEAD_AND_GONE)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ShipType::TakeDamage(ShipType enemyShip) // damages sheild or ship depending on which is appropiate
{
	int damageTaken;
	if (defense > DEAD_AND_GONE)
	{
		damageTaken = rand() % ((enemyShip.attack / WARNING_SHIELD_MODIFIER) + 1); // rand damage between 0 and half otherships attack
		this->defense = defense - damageTaken;
		if (defense < DEAD_AND_GONE)
		{
			this->hitPoints = this->hitPoints + this->defense;
			this->defense = DEAD_AND_GONE;
		}
	}
	else
	{
		damageTaken = rand() % (enemyShip.attack + 1); // rand damage between 0 and otherships attack
		this->hitPoints = hitPoints - damageTaken;
		if (hitPoints < DEAD_AND_GONE)
		{
			hitPoints = DEAD_AND_GONE;
		}
	}
	PlaySound(TEXT("Laser.wav"), NULL, SND_SYNC);

}

void ShipType::AttackShip(ShipType& enemyShip, ShipType thisShip) //call by one ship to attack the other
{
	enemyShip.TakeDamage(thisShip);
}

void ShipType::SetTextColour() // changes the colour of some outputs depending on shield or ship health
{
	int mildCautionShields = staringShields / WARNING_SHIELD_MODIFIER;  //point at which sheild will turn yellow
	int seriousAlertShields = staringShields / EXTREME_DANGER_MODIFIER; //point at which sheild will go red
	int mildCautionShip = MAX_HIT_POINTS / WARNING_SHIELD_MODIFIER; // point at which ship goes yellow
	int seriousAlertShip = MAX_HIT_POINTS / EXTREME_DANGER_MODIFIER; //point at which ship goes red
	if (defense < mildCautionShields && defense > seriousAlertShields)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //yellow
		cout << "Defense Shields : " << defense << endl;
	}
	else if (defense <= seriousAlertShields)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red
		cout << "Defense Shields : " << defense << endl;
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // green
		cout << "Defense Shields : " << defense << endl;
	}

	if (hitPoints < mildCautionShip && hitPoints > seriousAlertShip)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //yellow
		cout << "Hit Points :      " << hitPoints << endl;
	}
	else if (hitPoints <= seriousAlertShip)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //Red
		cout << "Hit Points :      " << hitPoints << endl;
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); //green
		cout << "Hit Points :      " << hitPoints << endl;
	}	
}

ShipType::ShipType() //default constructor
{
	this->name = "Ship Name";
	this->attack = DEAD_AND_GONE;
	this->defense = DEAD_AND_GONE;
	this->hitPoints = MAX_HIT_POINTS;
	this->staringShields = this->defense;
}

ShipType::ShipType(string name, int attack, int defense) //parameterized constructor
{
	this->name = name;
	this->attack = attack;
	this->defense = defense;
	this->hitPoints = MAX_HIT_POINTS;
	this->staringShields = defense;
}

ShipType::~ShipType() //default destructor
{
}