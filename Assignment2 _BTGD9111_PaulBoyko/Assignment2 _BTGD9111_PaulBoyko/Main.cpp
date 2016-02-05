//Paul Boyko Feb 2016  This file handles the battle between 2 ShipType's and displays the out come
#include <string>
#include <iostream>
#include <windows.h>
#include "ShipType.h"
#include "main.h"
using namespace std;

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //make sure text is white
	//instantiate 2 ships with values
	ShipType ship1("Enterprise", 10, 100);
	ShipType ship2("Star Destroyer", 20, 100);

	BattleIntro(ship1, ship2); //show intro method
	Battle(ship1, ship2); // start the battle	
	
	return 0;
}

void BattleIntro(ShipType ship1, ShipType ship2) //shows user what is going on and starting values of both ships
{
	cout << "***------------------------ ENEMY SIGHTED, RAISE SHEILDS AND PREPARE FOR BATTLE ------------------------***\n\n";
	Display(ship1);
	cout << endl;
	Display(ship2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //make sure text is white
	cout << "\nPrepaire to fire.....\n\n";

	system("PAUSE");
	system("CLS");
}

void BattleReport(ShipType ship1, ShipType ship2) // shows the winner if there is one else it declares mutual destruction
{
	system("CLS");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //make sure text is white
	if (ship1.IsAlive())
	{
		cout << "The Battle has ended \nThe Victor was... \n\n";
		Display(ship1);
	}
	else if (ship2.IsAlive())
	{
		cout << "The Battle has ended \nThe Victor was ... \n\n";
		Display(ship2);
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "\n*** MUTUAL DESTRUCTION ***\n";
	}
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //make sure text is white
	system("PAUSE");
		
}

void ShipBattle(ShipType &ship1, ShipType &ship2) // each ship attacks the other and then displays the change to ship1 and ship2
{
	ship1.AttackShip(ship2, ship1);
	ship2.AttackShip(ship1, ship2);
	Display(ship1);
	cout << endl;
	Display(ship2);
	
}

void Battle(ShipType ship1, ShipType ship2) //loops while ships are alive call the ShipBattle mothod pause and beeps Battle report called once one ship dies
{
	int c = 0;
	while (ship1.IsAlive() && ship2.IsAlive())
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //make sure text is white
		cout << "Round " << c << ".....\n\n";
		ShipBattle(ship1, ship2);		
		Sleep(1000);
		cout << '\a';
		c++;
		system("CLS");
	}		
	BattleReport(ship1, ship2);
}

void Display(ShipType ship) //A function to display the output of battle calls SetColour to keep the text test appropiately
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);  //make sure text is white
	cout << "Ship Name :       " << ship.GetName() << endl
		<< "Attack Damage :   " << ship.GetAttackDamage() << endl;
		ship.SetTextColour();		
}