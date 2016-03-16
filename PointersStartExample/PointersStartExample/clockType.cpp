#include <iostream>
#include "clockType.h"

using namespace std;

int clockType::objectCount = 0;
//-------------------------------------------------------------------
clockType::clockType()
{
	hour = 0;
	min = 0;
	sec = 0;

	objectCount++; //keep track of #of objects created
}

//-------------------------------------------------------------------
clockType::clockType( int inHours, int inMinutes, int inSeconds )
{
	setTime(inHours, inMinutes, inSeconds);

	objectCount++; //keep track of #of objects created
}

//-------------------------------------------------------------------
clockType::~clockType()
{
	cout << "******************************************************"<< endl;
	cout << "clockType destructor is getting called for an object" << endl;
	cout << "******************************************************"<< endl;

	objectCount--; //keep track of #of objects destroyed
}

//-------------------------------------------------------------------
void clockType::setTime( int inHours, int inMinutes, int inSeconds )
{
	if( inHours >= 0 && inHours <= 24 )
	{
		hour = inHours;
	}
	else
	{
		hour = 0;
	}
	if( inMinutes >= 0 && inMinutes <= 60)
	{
		min  = inMinutes;
	}
	else
	{
		min = 0;
	}
	if( inSeconds >= 0 && inSeconds <= 60)
	{
		sec  = inSeconds;
	}
	else
	{
		sec = 0;
	}
}

//-------------------------------------------------------------------
void clockType::getTime(int& outHours, int& outMinutes, int& outSeconds) const
{
	outHours = hour;
	outMinutes = min;
	outSeconds = sec;
}

//-------------------------------------------------------------------
void clockType::printTime() const
{
	cout << hour <<" : ";
	cout << min <<" : ";
	cout << sec;

}

//-------------------------------------------------------------------
void clockType::incrementHours()
{
	hour++;
	if(hour > 23) //check boundary ( 0 - 23 clock )
	{
		hour = 0;
	}
}
void clockType::incrementMinutes()
{
	min++;
	if (min > 59)  //check boundary can't have  61 minutes on clock
	{
		min = 0;
		incrementHours(); //just got to 60 minutes so increment hour
	}
}

//-------------------------------------------------------------------
void clockType::incrementSeconds()
{
	sec++;
	if(sec > 59)  //check boundary can't have  61 minutes on clock
	{
		sec = 0;
		incrementMinutes(); // just got to 60 secs so increment Minutes
	}
}

//-------------------------------------------------------------------
bool clockType::equalTime( const clockType& otherClock) const
{
	bool isEqual = false;

	if ( hour == otherClock.hour && 
		 min == otherClock.min && 
		 sec == otherClock.sec )
	{
		isEqual = true;
	}
	return(isEqual);
}