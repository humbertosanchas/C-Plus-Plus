#include <iostream>
#include <iomanip>
#include "runnerType.h"

string runnerType::raceTypeNames[runnerType::RACE_TYPE_MAX] = { "5K", "10k", "Half Marathon", "Full Marathon"};

//-------------------------------------------------------------------
runnerType::runnerType() 
	:personType(), bestTime()    //call bestTime default constructor here 
{
	bestRaceType = FIVEK;
}

//-------------------------------------------------------------------
runnerType::runnerType( string inFName, string inLName, 
	int inHour, int inMin, int inSec, int inBestHour, int inBestMin, int inBestSec, raceType inRaceType)
	:personType(inFName, inLName), bestTime(inBestHour, inBestMin,inBestSec)  //call bestTime paramterized constructor here 
{
	bestRaceType = inRaceType;
}

//-------------------------------------------------------------------
void runnerType::setBestRaceType( raceType inRaceType )
{
	bestRaceType = inRaceType;
}

//-------------------------------------------------------------------
runnerType::raceType runnerType::getBestRaceType( )
{
	return bestRaceType;
}



//-------------------------------------------------------------------
void runnerType::printInfo() //override function for printinfo from personType (base class)
{

	personType::printInfo();  //use base class to call printInfo for base class data members
	cout << setw(16) << "Best Time: ";
	 //ADD bestTime display here
	bestTime.printTime(); // call the print of the clockType
	cout << endl;
	cout << setw(16) << "Race Type: " << raceTypeNames[bestRaceType] << endl << endl << endl;
}

