#pragma once
#include <string>

using namespace std;
//Paul Boyko
//Test 1 - Feb 2016
//gameobjectType.h contains a game object base class storing the name, uniqueID and 3D position of the object.

class gameObjectType
{
	//private data members of this class
	private:
		string gameObjName;
		int gameObjID;
		int gameObjX_Pos;
		int gameObjY_Pos;
		int gameObjZ_Pos;

public:

	//Getters and setter for all data members written inline
	void SetGameObjectName(string name) { gameObjName = name; }
	string GetGameObjectName() { return gameObjName; }
	void SetGameObjectID(int ID) { gameObjID = ID; }
	int GetGameObjectID() { return gameObjID; }
	void SetGameObjectX_Pos(int Pos_X) { gameObjX_Pos = Pos_X; }
	int GetGameObjectX_Pos() { return gameObjX_Pos; }
	void SetGameObjectY_Pos(int Pos_Y) { gameObjY_Pos = Pos_Y; }
	int GetGameObjectY_Pos() { return gameObjY_Pos; }
	void SetGameObjectZ_Pos(int Pos_Z) { gameObjZ_Pos = Pos_Z; }
	int GetGameObjectZ_Pos() { return gameObjZ_Pos; }

	//header for the Display method
	void DisplayGameObject();

	//header for the default and parameterized constructor
	gameObjectType();
	gameObjectType(string name, int ID, int X_Pos, int Y_Pos, int Z_Pos);

	//header for the default distructor
	~gameObjectType();



};


