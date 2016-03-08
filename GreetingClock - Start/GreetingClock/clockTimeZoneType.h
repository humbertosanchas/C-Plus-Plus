//----------------------------------------------------------------------
// ClockTimeZoneType class definition 
//----------------------------------------------------------------------

#pragma once			// used to direct the compliler to only include this file once during compilation
#include "clockType.h"	// need to include the clock header file so we can use it for inheritance
#include <string>		// include string because we use that type for the time zone

using namespace std;

class clockTimeZoneType : public clockType //inherits the clockType Class and makes all clockType public members public to the new class
{
	public:
		enum TimeZones { NOTASSIGNED, EASTERN, CENTRAL, PACIFIC };		// declaring enum type for time zones.  Note, declaration needs to occur prior to variable member being declared

	private:
		TimeZones timeZone;		// enumerated type variable member
		int static const MAX_TIMEZONES = 4;		// declare the static constant for the array size
		string static timeZoneStrings[MAX_TIMEZONES];	// declare the array for the time zone strings

	public:
		//Accessor Functions (inline)
		void setTimeZone(TimeZones inTimeZone){ timeZone = inTimeZone; }		// using enumerated tyoe for setter/getter
		TimeZones getTimeZone() const { return timeZone; }

		//Overridden Funcions - we say it is overriden because the base class has a function called displayTime
		void displayTime() const;

		// constructors
		clockTimeZoneType();
		clockTimeZoneType(int inHours, int inMins, int inSecs, TimeZones inTimeZone); //parameterized constructor

		//destructor
		~clockTimeZoneType();
};