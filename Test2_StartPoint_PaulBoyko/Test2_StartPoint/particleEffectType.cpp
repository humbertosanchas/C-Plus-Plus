#pragma once
#include <iostream>
#include <string>

#include "particleEffectType.h"

//Paul Boyko March 30th 2016

//Array of string to display user freindly info about particle effect selected
string particleEffetType::particles[MAX_PARTICLES] { "Sparks", "Dust", "Water Drops", "Energy Burst", "Blood Drops" };

//particle effects display method which displays base class and colour class outputs as well
void particleEffetType::DisplayGameObj()
{
	gameObjectType::DisplayGameObj();
	cout << "Effect Style : " << particles[effectStyle] << endl << "Effect Duration : " << duration << endl;
	colour.printColour();
};

//default constructor also calling base class and colourClassType default constructor
particleEffetType::particleEffetType() : gameObjectType(), colour()
{

};

//parametized constructor which passed off data to the parameterized constructor of the base class and the colourClassType 
particleEffetType::particleEffetType(string name, int id, bool hasMoved, effect effectStyle, float duration, int red, int green, int blue) : gameObjectType(name, id, hasMoved), colour(red, green, blue)
{
	this->effectStyle = effectStyle;
	this->duration = duration;
};

//defualt destructor
particleEffetType::~particleEffetType()
{

};

