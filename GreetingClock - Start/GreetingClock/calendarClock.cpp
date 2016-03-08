//----------------------------------------------------------------------
// Calendar Clock class implementation 
//----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "calendarClock.h"

using namespace std;

calendarClockType::calendarClockType() : clock(), date()
{

}

calendarClockType::calendarClockType(int h, int m, int s, int month, int d, int y) : clock(h, m, s), date(month, d, y)
{

}

void calendarClockType::Display()
{
	cout << "Clock Values : ";
	clock.displayTime();
	cout << "\nDate Values : ";
	date.printDate();
	cout << endl;
}
