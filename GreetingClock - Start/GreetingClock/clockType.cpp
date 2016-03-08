//----------------------------------------------------------------------
// Clock class implementation 
//----------------------------------------------------------------------

#include <iostream>
#include "ClockType.h"

using namespace std;

int clockType::clockCount = 0;	// Since this varaible is common to all objects we initialize it outside the class methods

//----------------------------------------------------------------------
// Used to set the time variables of a clockType object
void clockType::setTime(int inHour, int inMin, int inSec)
{
	if (inHour >= 0 && inHour < 24) // if the hours parameter is in the valid range set it, otherwise default it to 0 
	{
		hours = inHour;
	}
	else
	{
		hours = 0;
	}

	if (inMin >= 0 && inMin < 60)	// if the minutes parameter is in the valid range set it, otherwise default it to 0
	{
		mins = inMin;
	}
	else
	{
		mins = 0;
	}

	if (inSec >= 0 && inSec < 60)	// if the seconds parameter is in the valid range set it, otherwise default it to 0
	{
		secs = inSec;
	}
	else
	{
		secs = 0;
	}
}

//----------------------------------------------------------------------
// Used to display the time variables of a clockType object
void clockType::displayTime() const
{
	if (hours < 10)
		cout << "0";
	cout << hours << ":";

	if (mins < 10)
		cout << "0";
	cout << mins << ":";

	if (secs < 10)
		cout << "0";
	cout << secs;
}

//----------------------------------------------------------------------
// Used to increment the hours variable
void clockType::incrementHours()
{
	hours++;		// add 1 to the number of hours
	if (hours > 23)	// if the hours are greater than 23, reset it back to 0
	{
		hours = 0;
	}
}

//----------------------------------------------------------------------
// Used to increment the minutes variable
void clockType::incrementMins()
{
	mins++;			// increment the minutes
	if (mins > 59)	// if the minutes are greater than 59, cycle back to 0 and increment the hours
	{
		mins = 0;
		incrementHours();	// Note, if the minutes have cycled back to 0, we need to increment the hours so call the class function to do so
	}
}

//----------------------------------------------------------------------
// Used to increment the seconds variable
void clockType::incrementSecs()
{
	secs++;			// increment the seconds
	if (secs > 59)	// if the seconds are greater than 59, cycle back to 0 and increment the minutes
	{
		secs = 0;
		incrementMins(); // Note, if the second have cycled back to 0, we need to increment the minutes so call the class function to do so
	}
}

//----------------------------------------------------------------------
// Used to check equality between 2 clocks
bool clockType::equalTime(const clockType& inClock) const
{
	if (hours == inClock.hours && mins == inClock.mins && secs == inClock.secs)
		return true;
	else
		return false;
}

//----------------------------------------------------------------------
// Default Constructor
clockType::clockType()
{
	hours = 0;
	mins = 0;
	secs = 0;

	clockCount++;		// incrementing the clock counter as another clock was created
}

//----------------------------------------------------------------------
// Parameterized Constructor - sets the object variables to values sent
// in through the parameters
clockType::clockType(int inHours, int inMinutes, int inSeconds)
{
	// Poor method of initialize the clock as invalid values may be passed to the constructor
	//hours = inHours;
	//mins = inMinutes;
	//secs = inSeconds;

	// Better way of initializing the clock.  Since the checks for valid values are built into the SetTime function call it from the constructor
	setTime(inHours, inMinutes, inSeconds);

	clockCount++;		// incrementing the clock counter as another clock was created
}

//----------------------------------------------------------------------
// Destructor
clockType::~clockType()
{
	//cout << "******************************************************" << endl;
	//cout << "clockType destructor is getting called for an object" << endl;
	//cout << "******************************************************" << endl;

	clockCount--;		// decrementing the clock counter as a clock object has just been destroyed.
}