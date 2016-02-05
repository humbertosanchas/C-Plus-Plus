//Paul Boyko Feb 2016  This header file defines a ShipType data members, function headers, constructors header ,destructors header and some simple functions
#pragma once
#include <string>

using namespace std;
//--------------------------------------------------------------
// Define your ship type class in this header file

static const int MAX_HIT_POINTS = 100;
static const int WARNING_SHIELD_MODIFIER = 2;
static const int EXTREME_DANGER_MODIFIER = 4;
static const int DEAD_AND_GONE = 0;

class ShipType
{
	//Data and function members go here
	private:
		string name;
		int attack;
		int defense;
		int hitPoints;
		int staringShields;

	public:
		string GetName() { return name; } //simple getter
		void SetName(string name) { this->name = name; } //simple setter
		int GetAttackDamage() {	return attack; }//simple getter
		void SetAttackDamage(int& attack) { this->attack = attack; }//simple setter
		int GetDefenseSheild() { return defense; }//simple getter
		void SetDefenseSheild(int& sheild){	this->defense = sheild; }//simple setter
		int GetHitPoints() { return hitPoints; }//simple getter
		void SetHitPoints(int hp) { (hp < MAX_HIT_POINTS ? hitPoints = hp : hitPoints = MAX_HIT_POINTS); }//setter
		// Prototypes (just function headers)
		bool IsAlive();
		void TakeDamage(ShipType enemyShip);
		void SetTextColour();
		void AttackShip(ShipType& enemyShip , ShipType thisShip);

		//default constructor header
		ShipType();
		//parameterized constructor header
		ShipType(string name, int attack, int defense);
		//default destructor header
		~ShipType();
};