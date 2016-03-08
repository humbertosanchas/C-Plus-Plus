//----------------------------------------------------------------------
// Date class definition 
//----------------------------------------------------------------------
#pragma once

class dateType
{
	public:
		void setDate(int inMonth, int inDay, int inYear);
		  //Function to set the date.
		  //The member variables month, day, and year are set 
		  //according to the parameters.
		  //Postcondition: month = inMonth; day = inDay;
		  //               year = inYear

		int getDay() const { return day; }
		  //Function to return the day.
		  //Postcondition: The value of day is returned.

		int getMonth() const {return month; }
		  //Function to return the month.  
		  //Postcondition: The value of month is returned.

		int getYear() const { return year; }
		  //Function to return the year.     
		  //Postcondition: The value of year is returned.

		void printDate() const;
		  //Function to output the date in the form mm-dd-yyyy.

		dateType(int month = 1, int day = 1, int year = 1900);
		  //Constructor to set the date
		  //The member variables dMonth, dDay, and dYear are set 
		  //according to the parameters.
		  //Postcondition: dMonth = month; dDay = day; dYear = year;
		  //               If no values are specified, the default 
		  //               values are used to initialize the member
		  //               variables.

	private:
		int month; //variable to store the month
		int day;   //variable to store the day
		int year;  //variable to store the year
		static int const daysInMonth[12];	// stores the days in the month - leap years don't exist in this example
};

