#pragma once
#include <string>

using namespace std;
//--------------------------------------------------------------
// Define your ship type class in this header file

static const int MAX_HIT_POINTS = 100;

class ShipType
{
	//Data and function members go here
	private:
		string name;
		int attack;
		int defense;
		int hitPoints;

	public:
		string GetName() { return name; }
		void SetName(string name) { this->name = name; }
		int GetAttackDamage() {	return attack; }
		void SetAttackDamage(int& attack) { this->attack = attack; }
		int GetDefenseSheild() { return defense; }
		void SetDefenseSheild(int& sheild){	this->defense = sheild; }
		int GetHitPoints() { return hitPoints; }
		void SetHitPoints(int hp) { (hp < MAX_HIT_POINTS ? hitPoints = hp : hitPoints = MAX_HIT_POINTS); }
		bool IsAlive();
		void TakeDamage(ShipType enemyShip);
		void SetTextColour();
		void AttackShip(ShipType& enemyShip , ShipType thisShip);

		ShipType();
		ShipType(string name, int attack, int defense, int hitPoints);
		~ShipType();
};