#include<iostream>
#include <string>

#include "gameObjectType.h"
#include "particleEffectType.h"
#include "colourClassType.h"

using namespace std;

//Paul Boyko March 30th 2016

int main()
{
	//place your test code here
	
	//instantiate gameObject using deafult constructor
	gameObjectType gameObj;

	//pointer to a particle effect using dinamic memory
	particleEffetType *partEffect = new particleEffetType("Hand Injury", 1, false, particleEffetType::BLOOD_DROPS, 5.0, 255, 0, 0);

	//using setter and getters on the gameObject
	gameObj.SetGameObjName("Person");
	gameObj.SetGameObjId(2);
	gameObj.SetGameObjHaveMoved(true);

	//Display game object and particleEffect object which pointer is pointing to
	gameObj.DisplayGameObj();
	cout << endl;
	partEffect->DisplayGameObj();

	//use setters and getter to change the value of the particle effect the the pointer is pointing to
	partEffect->SetGameObjName("Changed Object");
	partEffect->SetGameObjId(3);
	partEffect->SetGameObjHaveMoved(true);
	partEffect->SetEffectStyle(particleEffetType::ENERGY_BURST);
	partEffect->SetDuration(2.25);
	partEffect->SetColour(colourClassType(150, 150, 150));

	cout << endl;
	// display the changes
	partEffect->DisplayGameObj();

	cout << endl;
	system("pause");
	return 0;
}