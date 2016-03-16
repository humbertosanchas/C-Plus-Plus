#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

//-------------------------------------------------------------------
personType::personType()
{
	firstName = "Unassigned";
	lastName = "Unassigned";
}

//-------------------------------------------------------------------
personType::personType( string inFName, string inLName)
{
	firstName = inFName;
	lastName = inLName;
}

//-------------------------------------------------------------------
void personType::setFirstName(string inFName)
{
	firstName = inFName;
}

//-------------------------------------------------------------------
string personType::getFirstName()
{
	return firstName;
}

//-------------------------------------------------------------------
void personType::setLastName(string inLName)
{
	lastName = inLName;
}
	
//-------------------------------------------------------------------
string personType::getLastName()
{
	return lastName;
}

//-------------------------------------------------------------------
void personType::printInfo()
{
	cout << firstName << " " << lastName << endl;
}

