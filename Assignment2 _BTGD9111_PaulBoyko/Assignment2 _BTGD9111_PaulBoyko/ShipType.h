#include <string>

using namespace std;

static const int MAX_HIT_POINTS = 100;

class ShipType
{
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
		void SetHitPoints(int& hp) { (hp < MAX_HIT_POINTS ? hitPoints = hp : hitPoints = MAX_HIT_POINTS); }
		

		



	

};