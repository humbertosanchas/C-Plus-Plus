#pragma once
#include "gameObjectType.h"
#include <string>
#include <iostream>

//Paul Boyko
//Test 1 - Feb 2016
//gameObjectType.cpp -- implementation file

//Display method to show all all data members values
void gameObjectType::DisplayGameObject()
{
	cout << "Game Object Name: " << gameObjName << "\nGame Object ID : " << gameObjID << "\nGame object X Position : " << gameObjX_Pos << "\nGame Object Y Position : " << gameObjY_Pos << "\nGame Object Z Position : " << gameObjZ_Pos << endl << endl;
}

//Default constructor
gameObjectType::gameObjectType()
{
	gameObjName = "Unknown";
	gameObjID = -1;
	gameObjX_Pos = 0;
	gameObjY_Pos = 0;
	gameObjZ_Pos = 0;
}

//parameterized constructor
gameObjectType::gameObjectType(string name, int ID, int X_Pos, int Y_Pos, int Z_Pos)
{
	gameObjName = name;
	gameObjID = ID;
	gameObjX_Pos = X_Pos;
	gameObjY_Pos = Y_Pos;
	gameObjZ_Pos = Z_Pos;
}

//default destructor
gameObjectType::~gameObjectType()
{
}