#ifndef H_RUNNER_TYPE
#include "personType.h"
#include "clockType.h"

//Example of a derived class which also uses composition

class runnerType : public personType  //INHERITANCE: runnerType is derived from the base class personType
{

public:
	clockType bestTime;

	//statics
	static enum raceType{ FIVEK, TENK, HALF, FULL, RACE_TYPE_MAX }; 
	static string raceTypeNames[RACE_TYPE_MAX];


	void setBestRaceType( raceType inRaceType );
	raceType getBestRaceType( );
	
	
	//void setBestTime( int inHour, int inMin, int inSec);
	//void getBestTime( int& outHour, int& outMin, int& outSec);  //Can use ref params here. WHY?
	
	//override
	void printInfo();

	//CONSTRUCTORS: responsible for initialize data members of class (including base class)
	runnerType();
	runnerType(string inFName, string inLName, int inHour, int inMin, int inSec, int inBestHour, int inBestMin, int inBestSec, raceType inRaceType);

	//ADD bestTime data member here.

protected:
	

	raceType  bestRaceType;   //stores race type for the best time

};


#endif