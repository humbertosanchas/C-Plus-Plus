//Paul Boyko
//Main file for Test 1 - 2016
//Creates two game objects (using gameObjectType), sets and displays their data

#include<iostream>
#include <string>
#include "gameObjectType.h"


using namespace std;
	

int main()
{
	//create 2 object one with default constructor one with parameters
	gameObjectType testGame1;
	gameObjectType testGame2("Testing", 1, 24, 60, 1);

	//testGame1.DisplayGameObject();

	//using set to change obj1's values
	testGame1.SetGameObjectName("UsingSet");
	testGame1.SetGameObjectID(2);
	testGame1.SetGameObjectX_Pos(8);
	testGame1.SetGameObjectY_Pos(26);
	testGame1.SetGameObjectZ_Pos(4);

	//displaying both objects 
	testGame1.DisplayGameObject();
	testGame2.DisplayGameObject();

	//using gets to display only part of the objects stored values
	cout << endl << "Object : " << testGame2.GetGameObjectName() << "\nPosition : X: " << testGame2.GetGameObjectX_Pos() << " Y: " << testGame2.GetGameObjectY_Pos() << " Z: " << testGame2.GetGameObjectZ_Pos() << endl << endl;


	system("pause");
	return 0;
}