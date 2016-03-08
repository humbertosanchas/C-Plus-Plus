//----------------------------------------------------------------------
// Date class implementation 
//----------------------------------------------------------------------
  
#include <iostream>
#include "dateType.h"

using namespace std;

int const dateType::daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

//------------------------------------------------------------------
// Verifies the date is valid and sets the data members accordingly
void dateType::setDate(int inMonth, int inDay, int inYear)
{
	if (inMonth >= 1 && inMonth <= 12)
		month = inMonth;
	else
		month = 1;

	if (inDay >= 1 && inDay <= daysInMonth[month])
		day = inDay;
	else
		day = 1;

	if (inYear >= 1900 && inYear <= 5000)
		year = inYear;
	else
		year = 1900;
}

//------------------------------------------------------------
// Default Constructor 
void dateType::printDate() const
{
	if (month < 10)
		cout << "0";
	cout << month << "-";

	if (day < 10)
		cout << "0";
	cout << day << "-";

	cout << year;
}

//------------------------------------------------------------
// Parameterized Constructor
dateType::dateType(int inMonth, int inDay, int inYear) 
{ 
	setDate(inMonth, inDay, inYear);
}

