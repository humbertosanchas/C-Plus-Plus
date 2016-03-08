//----------------------------------------------------------------------
// Calendar Clock class definition 
//----------------------------------------------------------------------
#pragma once

#include "clockTimeZoneType.h"
#include "dateType.h"

using namespace std;

class calendarClockType
{
	public:
		calendarClockType();
		calendarClockType(int h, int m, int s, int month, int d, int y);

			void Display();
		

	private:
		clockType clock;
		dateType date;
		
};