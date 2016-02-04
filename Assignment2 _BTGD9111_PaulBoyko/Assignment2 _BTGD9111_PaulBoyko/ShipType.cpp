#include <iostream>
#include <Windows.h>
#include <iomanip>
#include "ShipType.h"

//--------------------------------------------------------------
// Implement your ship class functions in this file

bool ShipType::IsAlive()
{
	if (this->hitPoints > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void ShipType::TakeDamage(ShipType enemyShip)
{
	if (defense > 0)
	{
		int damageTaken = rand() % ((enemyShip.attack / 2) + 1);
		this->defense =- damageTaken;
	}
	else
	{
		int damageTaken = rand() % (enemyShip.attack + 1);
		this->defense =- damageTaken;
	}
}

void ShipType::AttackShip(ShipType& enemyShip, ShipType thisShip)
{
	enemyShip.TakeDamage(thisShip);
}

void ShipType::SetTextColour()
{
	double mildCautionShields = defense / 2;
	double seriousAlertShields = defense / 4;
	double mildCautionShip = hitPoints / 2;
	double seriousAlertShip = hitPoints /4;	
	if (defense < mildCautionShields && defense > seriousAlertShields)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "Sheilds level: " << defense;
	}
	else if (defense < seriousAlertShields)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "Sheilds level: " << defense;
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "Sheilds level: " << defense;
	}

	if (hitPoints < mildCautionShip && hitPoints > seriousAlertShip)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "Ship Health: " << hitPoints;
	}
	else if (hitPoints < seriousAlertShip)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "Ship Health: " << hitPoints;
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "Ship Health: " << hitPoints;
	}	
}

ShipType::ShipType()
{
	this->name = "Ship Name";
	this->attack = 0;
	this->defense = 0;
	this->hitPoints = 0;
}

ShipType::ShipType(string name, int attack, int defense, int hitPoints)
{
	this->name = name;
	this->attack = attack;
	this->defense = defense;
	this->hitPoints = hitPoints;
}

ShipType::~ShipType()
{

}