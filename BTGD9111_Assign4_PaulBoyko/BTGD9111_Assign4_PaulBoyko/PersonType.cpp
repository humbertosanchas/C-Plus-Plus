#pragma once
#include <string>
#include <iostream>

#include "PersonType.h"

using namespace std;

//Paul Boyko March 2015
//CPP for the PersonType class (parent to soldier class)


//display method for data members of the PersonType class
void PersonType::DisplayPerson()
{
	cout << "Person Name : " << personName << endl << "Person Gender : " << personGender << endl << "Person Height : " << personHeight << endl;
};

//setter for gender to limit only acceptable inputs to M or F not case sensitive it changes all data to upper and if its not a m or f it store a ?
void PersonType::SetPersonGender(char gender)
{
	if (toupper(gender) == 'M' || toupper(gender) == 'F')
	{
		this->personGender = toupper(gender);
	}
	else
	{
		this->personGender = '?';
	}
}

//default constructor
PersonType::PersonType()
{
	personName = "Unknown";
	personGender = '?';
	personHeight = 0.0;
};

//paramtereized constructor
PersonType::PersonType(string name, char gender, double height)
{
	personName = name;
	SetPersonGender(gender);
	personHeight = height;
};

//default destructor
PersonType::~PersonType()
{};
