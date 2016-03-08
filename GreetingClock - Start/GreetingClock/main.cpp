#include <iostream>
#include "dateType.h"
#include "ClockTimeZoneType.h"
#include "calendarClock.h"
  
using namespace std; 
 
//-----------------------------------------------------------------
// Program entry point
int main()
{
	calendarClockType defaultClock;
	calendarClockType paramClock(10, 9, 20, 3, 8, 2016);

	defaultClock.Display();
	paramClock.Display();

	system("pause");
	return 0;
}
                     