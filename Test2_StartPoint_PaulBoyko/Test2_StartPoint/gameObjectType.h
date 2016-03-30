#pragma once
#include <string>

using namespace std;

//Paul Boyko March 30th 2016

class gameObjectType
{

	private:
		//Private data members
		string  gameObjName;
		int gameObjId;
		bool hasMoved;

	public:

		//public getters and setters
		string GetGameObjName() { return this->gameObjName; }
		void SetGameObjName(string name) { this->gameObjName = name; }
		int GetGameObjId() { return this->gameObjId; }
		void SetGameObjId(int id) { this->gameObjId = id; }
		bool GetGameObjHasMoved() { return this->hasMoved; }
		void SetGameObjHaveMoved(bool hasMoved) { this->hasMoved = hasMoved; }

		//public display method header
		void DisplayGameObj();		


		//header for default constructor and destructor and parameterized constructor;
		gameObjectType();
		gameObjectType(string name, int id, bool wasMoved);
		~gameObjectType();



};



