#pragma once
#include <string>

using namespace std;
//Header class for the PersonType class
//Paul Boyko March 2015

class PersonType
{
	//private data members
	private:
		string personName;
		char personGender;
		double personHeight;

	public:
		 //getters and setters
		void SetPersonName(string name) { personName = name; }
		string GetPersonName() { return personName; }

		//written in cpp to allow limit imput vaule to M or F
		void SetPersonGender(char gender);
		
		//rest of the inline getters and setter
		char GetPersonGender() { return personGender; }
		void SetPersonHeight(double height) { personHeight = height; }
		double GetPersonHeight() { return personHeight; }

		//display method
		void DisplayPerson();

		//default and parameterized constructors
		PersonType();
		PersonType(string name, char gender, double height);

		//default destructor
		~PersonType();
};