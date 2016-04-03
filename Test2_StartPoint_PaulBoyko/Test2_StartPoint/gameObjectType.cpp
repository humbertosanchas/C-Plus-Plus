#pragma once
#include <iostream>
#include "gameObjectType.h"

using namespace std;

//Paul Boyko March 30th 2016

//display method for the base gameObjectType class
void gameObjectType::DisplayGameObj()
{
	//var to output bool as text
	string hasMovedString;
	//check if object moves or not and apply the proper string output
	if (hasMoved)
	{
		hasMovedString = "Yes";
	}
	else
	{
		hasMovedString = "No";
	}
	cout << "Object Name : " << gameObjName << endl << "Object Id : " << gameObjId << endl << "Object can move : " << hasMovedString << endl;
}

//default constructor
gameObjectType::gameObjectType()
{
	gameObjName = "Unknown";
	gameObjId = -1;
	hasMoved = false;
}

//parameterized construcor
gameObjectType::gameObjectType(string name, int id, bool wasMoved)
{
	gameObjName = name;
	gameObjId = id;
	hasMoved = wasMoved;
}

// default destructor
gameObjectType::~gameObjectType()
{

}