//----------------------------------------------------------------------
// Clock class implementation 
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// ClockTimeZoneType class definition 
//----------------------------------------------------------------------
#include <iostream>
#include "clockTimeZoneType.h"

using namespace std;

// initializing the static class array.  Note, it can't be initialized in the definition file.  Needs to be outside all methods in the implemention file
string clockTimeZoneType::timeZoneStrings[MAX_TIMEZONES] = { "Time zone unknown", "Easter", "Central", "Pacific" };	

//----------------------------------------------------------------------
// displays time and time zone
void clockTimeZoneType::displayTime() const
{
	clockType::displayTime();			// calling base class function to display the time portion

	cout << " " << timeZoneStrings[timeZone] << endl;	// Using the enumerated type variable as an index into our time zone string array.
}

//----------------------------------------------------------------------
//Default Constructor
clockTimeZoneType::clockTimeZoneType() : clockType() //tell the base class constructor to 
{
	timeZone = clockTimeZoneType::NOTASSIGNED;  // set default time zone
}

//----------------------------------------------------------------------
//Parameterized Constructor
clockTimeZoneType::clockTimeZoneType(int inHours, int inMins, int inSecs,	TimeZones inTimeZone) : clockType(inHours, inMins, inSecs)
{
	timeZone = inTimeZone;
}

//----------------------------------------------------------------------
// Destructor
clockTimeZoneType::~clockTimeZoneType()
{
	//cout << "*******************************" << endl;
	//cout << "clockTimeZoneType destructor is getting called for object" << endl;
	//cout << "*******************************" << endl;
}